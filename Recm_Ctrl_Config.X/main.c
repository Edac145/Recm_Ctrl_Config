#define FCY 10000000UL // 10 MHz Instruction Rate
#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <libpic30.h>
#include <inttypes.h>
#include <string.h>
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/clock.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/uart/uart2.h"
#include "mcc_generated_files/uart/uart1.h"
#include "mcc_generated_files/secondary_core/sec_core1.h"

#define UART_BUFFER_SIZE 256  // Define the size of the buffer
const struct SEC_CORE_INTERFACE *secondaryCore = &MSIInterface;

typedef struct {
    bool output_pins[5];
    bool input_pins[3];
    unsigned int uart_status;
} MainCoreStatus;

typedef struct {
    bool output_pins[12];
    bool input_pins[8];
    int analog_inputs[3];
    int pwm_status[4];
    unsigned int uart_status;
    unsigned int spi_status;
} SecondaryCoreStatus;

MainCoreStatus getMainCoreStatus();
void encodeMainCoreStatus(char *buffer, MainCoreStatus status);
void decodeSecondaryCoreStatus(SecondaryCoreStatus *status, int *buffer);

bool getOutputPinStatus(int pin);
bool getInputPinStatus(int pin);
unsigned int getUARTStatus();
void sendStatusViaUART(const char *buffer);
void encodeSecondaryCoreStatus(char *buffer, SecondaryCoreStatus status);

void parseControlData(const MainCoreStatus* status);
void setInputPinStatus(int pin, bool value);
void setOutputPinStatus(int pin, bool value);
void setUARTBaudRate(unsigned int baudRate);
void receiveStatusViaUART(MainCoreStatus* status);
void parseStatusString(const char* data, MainCoreStatus* status);

/*
    Main application
*/

int main(void)
{
//     char mainCoreBuffer[50]; // Adjust size based on protocol
    char secondaryCoreBuffer[100];
//    char incomingBuffer[100]; // Buffer to store incoming UART data
    SYSTEM_Initialize();
    SEC_CORE1_Initialize();
    SEC_CORE1_Program();
    SEC_CORE1_Start();
//    char uartBuffer[UART_BUFFER_SIZE];
    char mainCoreBuffer[100];
    MainCoreStatus receivedStatus;
    
//    sendStatusViaUART("System Initialized\n");

    while (1)
    {
//        sendStatusViaUART("Waiting for data...\n");
         // Get and send the main core status
        MainCoreStatus mainStatus = getMainCoreStatus();
        encodeMainCoreStatus(mainCoreBuffer, mainStatus);
        sendStatusViaUART(mainCoreBuffer);
        __delay_ms(1000);
        
         // Wait for interrupt from secondary core
        while (!secondaryCore->IsInterruptRequested());
        secondaryCore->InterruptRequestAcknowledge();
        while (secondaryCore->IsInterruptRequested());
        secondaryCore->InterruptRequestAcknowledgeComplete();
        
        // Mailbox read
        int dataReceive[30]; // Adjust size to match the size of the SecondaryCoreStatus
        secondaryCore->ProtocolRead(MSI1_ProtocolB, (unsigned int*)dataReceive);
        
        // Decode the received data to the status structure
        SecondaryCoreStatus secStatus;
        decodeSecondaryCoreStatus(&secStatus, dataReceive);
        encodeSecondaryCoreStatus(secondaryCoreBuffer, secStatus);
        sendStatusViaUART(secondaryCoreBuffer);
        __delay_ms(1000);

        // Receive data via UART and parse it
        receiveStatusViaUART(&receivedStatus);
//        sendStatusViaUART("Data received.\n");

        // Debugging information
        sprintf(mainCoreBuffer, "Parsed Status: %d,%d,%d,%d,%d,%d,%d,%d,%u\n",
                receivedStatus.output_pins[0], receivedStatus.output_pins[1], receivedStatus.output_pins[2],
                receivedStatus.output_pins[3], receivedStatus.output_pins[4],
                receivedStatus.input_pins[0], receivedStatus.input_pins[1], receivedStatus.input_pins[2],
                receivedStatus.uart_status);
//        sendStatusViaUART(mainCoreBuffer);

        parseControlData(&receivedStatus);
        __delay_ms(1000);
        // Get and send the main core status
        mainStatus = getMainCoreStatus();
        encodeMainCoreStatus(mainCoreBuffer, mainStatus);
        sendStatusViaUART(mainCoreBuffer);
    }
}

bool getInputPinStatus(int pin) {
    switch(pin) {
        case 0: return IO_RD8_GetValue();
        case 1: return IO_RD9_GetValue();
        case 2: return IO_RD10_GetValue();
        default: return 0;
    }
}

bool getOutputPinStatus(int pin) {
    switch(pin) {
        case 0: return IO_RD11_GetValue();
        case 1: return IO_RD12_GetValue();
        case 2: return IO_RD13_GetValue();
        case 3: return IO_RD14_GetValue();
        case 4: return IO_RD15_GetValue();
        default: return 0;
    }
}

unsigned int getUARTStatus() {
    return UART2_BaudRateGet();
}

MainCoreStatus getMainCoreStatus() {
    MainCoreStatus status;
    for (int i = 0; i < 5; i++) {
        status.output_pins[i] = getOutputPinStatus(i);
    }
    for (int i = 0; i < 3; i++) {
        status.input_pins[i] = getInputPinStatus(i);
    }
    status.uart_status = getUARTStatus();
    return status;
}

void encodeMainCoreStatus(char *buffer, MainCoreStatus status) {
    sprintf(buffer, "AA,01,%d,%d,%d,%d,%d,%d,%d,%d,%u\n",
            status.input_pins[0], status.input_pins[1], status.input_pins[2],
            status.output_pins[0], status.output_pins[1], status.output_pins[2], status.output_pins[3], status.output_pins[4],
            status.uart_status);
}

void sendStatusViaUART(const char *buffer) {
    while(*buffer) {
        UART1_Write(*buffer++);
    }
     // Add a delay if necessary to ensure data is fully sent
    __delay_ms(10); // Add appropriate delay
}

void receiveStatusViaUART(MainCoreStatus* status) 
{
    char uartBuffer[UART_BUFFER_SIZE];
    uint16_t i = 0;

    // Read characters until a newline or buffer limit is reached
    while (i < UART_BUFFER_SIZE - 1) {
        if (UART1_IsRxReady()) {
            uint8_t receivedChar = UART1_Read();

            // Store the received character in the buffer
            uartBuffer[i] = receivedChar;
            i++;

            // Check for termination character (newline)
            if (receivedChar == '\n' || receivedChar == '\r')
            {
                break;
            }
        }
    }

    // Null-terminate the string
    uartBuffer[i] = '\0';
    sendStatusViaUART("Raw data received: ");
    sendStatusViaUART(uartBuffer);
//    sendStatusViaUART("\n");

    // Parse the string into the MainCoreStatus structure
    parseStatusString(uartBuffer, status);
}

// Function to parse a string and fill the MainCoreStatus structure
void parseStatusString(const char* data, MainCoreStatus* status) {
    // Initialize the structure to default values
    memset(status, 0, sizeof(MainCoreStatus));
   
//    sendStatusViaUART("Parsing data...\n");

    // Example input format: "AB,01,%d,%d,%d,%d,%d,%d,%d,%d,%u\n"
    if (strncmp(data, "AB,01,", 6) == 0) {
        int outputPins[5];
        int inputPins[3];
        unsigned int uartStatus;

        // Parse the data to extract input pins, output pins, and UART status
        int parsed = sscanf(data + 6, "%d,%d,%d,%d,%d,%d,%d,%d,%u",
                            &inputPins[0], &inputPins[1], &inputPins[2],
                            &outputPins[0], &outputPins[1], &outputPins[2], &outputPins[3], &outputPins[4],                       
                            &uartStatus);

        if (parsed == 9) { // Ensure that all expected items are parsed
            // Set the parsed values to the structure
            for (int i = 0; i < 5; i++) {
                status->output_pins[i] = (bool)outputPins[i];
            }
            for (int i = 0; i < 3; i++) {
                status->input_pins[i] = (bool)inputPins[i];
            }
            status->uart_status = uartStatus;
//            sendStatusViaUART("Data parsed successfully.\n");
        } else {
//            sendStatusViaUART("Parsing failed.\n");
        }
    } else {
        // Invalid data format
//        sendStatusViaUART("Invalid data format\n");
    }
}

void parseControlData(const MainCoreStatus* status) {
    // Set the output pin statuses
    for (int i = 0; i < 5; i++) {
        setOutputPinStatus(i, status->output_pins[i]);
    }

    // Set the UART baud rate
    setUARTBaudRate(status->uart_status);
    return;
}

void setOutputPinStatus(int pin, bool value) {
    switch(pin) {
        case 0: (value != 0) ? IO_RD11_SetHigh(): IO_RD11_SetLow(); break;
        case 1: (value != 0) ? IO_RD12_SetHigh(): IO_RD12_SetLow(); break;
        case 2: (value != 0) ? IO_RD13_SetHigh(): IO_RD13_SetLow(); break;
        case 3: (value != 0) ? IO_RD14_SetHigh(): IO_RD14_SetLow(); break;
        case 4: (value != 0) ? IO_RD15_SetHigh(): IO_RD15_SetLow(); break;
    }
}

void setUARTBaudRate(unsigned int baudRate) {
    UART2_BaudRateSet(baudRate);
}

void decodeSecondaryCoreStatus(SecondaryCoreStatus *status, int *buffer) {
    int idx = 2; // Skip header and core identifier
    for (int i = 0; i < 12; i++) {
        status->output_pins[i] = buffer[idx++];
    }
    for (int i = 0; i < 8; i++) {
        status->input_pins[i] = buffer[idx++];
    }
    for (int i = 0; i < 3; i++) {
        status->analog_inputs[i] = buffer[idx++];
    }
    for (int i = 0; i < 4; i++) {
        status->pwm_status[i] = buffer[idx++];
    }
    status->uart_status = buffer[idx++];
    status->spi_status = buffer[idx++];
}

void encodeSecondaryCoreStatus(char *buffer, SecondaryCoreStatus status) {
    sprintf(buffer, "AA,02,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u\n", 
            status.output_pins[0], status.output_pins[1], status.output_pins[2], status.output_pins[3], status.output_pins[4], status.output_pins[5],
            status.output_pins[6], status.output_pins[7], status.output_pins[8], status.output_pins[9], status.output_pins[10], status.output_pins[11],
            status.input_pins[0], status.input_pins[1], status.input_pins[2], status.input_pins[3], status.input_pins[4], status.input_pins[5],
            status.input_pins[6], status.input_pins[7], status.analog_inputs[0], status.analog_inputs[1], status.analog_inputs[2], 
            status.pwm_status[0], status.pwm_status[1], status.pwm_status[2], status.pwm_status[3], status.uart_status, status.spi_status);
}
