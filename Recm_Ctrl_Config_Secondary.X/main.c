
#define FCY CLOCK_PeripheralFrequencyGet()
#include <xc.h>
#include <inttypes.h>
#include <string.h>
#include <libpic30.h>
#include <stdio.h>
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/clock.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/main_core/main_core.h"


//#define FCY 10000000UL // 10 MHz Instruction Rate
typedef struct {
    bool output_pins[12];
    bool input_pins[5];
    int analog_inputs[3];
    int pwm_status[4];
    int uart_status;
    int spi_status;
} SecondaryCoreStatus;

const struct MAIN_CORE_INTERFACE *mainCore = &MSIInterface;

#define DATA_UNDER_TEST 0xAAAA
#define STATUS_DATA_SIZE (sizeof(SecondaryCoreStatus) / sizeof(int))

unsigned int dataSend[55]; // Adjust size based on protocol
unsigned int dataReceive[MSI1_ProtocolB_SIZE];

// Function prototypes
SecondaryCoreStatus getSecondaryCoreStatus(void);
void encodeSecondaryCoreStatus(int *buffer, SecondaryCoreStatus status);
bool getOutputPinStatus(int pin);
bool getInputPinStatus(int pin);
int getAnalogInputStatus(int pin);
int getPWMStatus(int pwm);
int getUARTStatus(void);
int getSPIStatus(void);

/*
    Main application
*/

int main(void)
{
    SYSTEM_Initialize();
    int secondaryCoreBuffer[55]; // Adjust size based on protocol

    while(1)
    {
         // Get and send Secondary Core status
        SecondaryCoreStatus status = getSecondaryCoreStatus();
        encodeSecondaryCoreStatus(secondaryCoreBuffer, status);
        memcpy(dataSend, secondaryCoreBuffer, sizeof(secondaryCoreBuffer));

        // Mailbox write
        mainCore->ProtocolWrite(MSI1_ProtocolB, dataSend);
        
        // Issue interrupt to main core
        mainCore->InterruptRequestGenerate();
        while (!mainCore->IsInterruptRequestAcknowledged());
        mainCore->InterruptRequestComplete();
        while (mainCore->IsInterruptRequestAcknowledged());
        __delay_ms(1000);
        
    }    
}

bool getOutputPinStatus(int pin) {
    switch(pin) {
        case 0: return IO_RE8_GetValue();
        case 1: return IO_RE9_GetValue();
        case 2: return IO_RE10_GetValue();
        case 3: return IO_RE11_GetValue();
        case 4: return IO_RE12_GetValue();
        case 5: return IO_RE13_GetValue();
        case 6: return IO_RE14_GetValue();
        case 7: return IO_RE15_GetValue();
        case 8: return IO_RD2_GetValue();
        case 9: return IO_RD3_GetValue();
        case 10: return IO_RD4_GetValue();
        case 11: return IO_RD5_GetValue();
        default: return 0; // Return 0 if the pin index is out of range
    }
}

bool getInputPinStatus(int pin) {
    switch(pin) {
        case 0: return IO_RE0_GetValue();
        case 1: return IO_RE1_GetValue();
        case 2: return IO_RE2_GetValue();
        case 3: return IO_RE3_GetValue();
        case 4: return IO_RE4_GetValue();
        case 5: return IO_RE5_GetValue();
        case 6: return IO_RE6_GetValue();
        case 7: return IO_RE7_GetValue();
        default: return 0; // Return 0 if the pin index is out of range
    }
}

SecondaryCoreStatus getSecondaryCoreStatus() {
    SecondaryCoreStatus status;

    for (int i = 0; i < 12; i++) {
        status.output_pins[i] = getOutputPinStatus(i);
    }
    for (int i = 0; i < 5; i++) {
        status.input_pins[i] = getInputPinStatus(i);
    }
    for (int i = 0; i < 3; i++) {
        status.analog_inputs[i] = getAnalogInputStatus(i);
    }
    for (int i = 0; i < 4; i++) {
        status.pwm_status[i] = getPWMStatus(i);
    }
    status.uart_status = getUARTStatus();
    status.spi_status = getSPIStatus();

    return status;
}

void encodeSecondaryCoreStatus(int *buffer, SecondaryCoreStatus status) {
    int idx = 0;
    buffer[idx++] = 0xAA; // Header
    buffer[idx++] = 0x02; // Core Identifier
    for (int i = 0; i < 12; i++) {
        buffer[idx++] = status.output_pins[i];
    }
    for (int i = 0; i < 5; i++) {
        buffer[idx++] = status.input_pins[i];
    }
    for (int i = 0; i < 3; i++) {
        buffer[idx++] = status.analog_inputs[i];
    }
    for (int i = 0; i < 4; i++) {
        buffer[idx++] = status.pwm_status[i];
    }
    buffer[idx++] = status.uart_status;
    buffer[idx++] = status.spi_status;
}

int getAnalogInputStatus(int pin) {
    return ( 0);
}

int getPWMStatus(int pwm) {
    return (/* hardware read operation */ 0);
}
int getUARTStatus() {
    return (/* hardware read operation */ 0);
}

int getSPIStatus() {
    return (/* hardware read operation */ 0);
}