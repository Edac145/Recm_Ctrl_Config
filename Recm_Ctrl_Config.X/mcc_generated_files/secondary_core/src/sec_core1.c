/**
 * SEC_CORE1 Generated Driver Source File
 * 
 * @file     sec_core1.c
 * 
 * @ingroup  sec_coredriver
 * 
 * @brief    This is the generated driver source file for SEC_CORE1 driver
 *
 * @skipline @version Firmware Driver Version 1.0.0
 *
 * @skipline @version   PLIB Version 1.2.0
 *            
 * @skipline  Device : dsPIC33CH512MP508
*/

/*
� [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/


// FMBXM
#pragma config MBXM0 = M2S    //Mailbox 0 data direction->Mailbox register configured for Main data write (Main to Secondary data transfer)
#pragma config MBXM1 = M2S    //Mailbox 1 data direction->Mailbox register configured for Main data write (Main to Secondary data transfer)
#pragma config MBXM2 = S2M    //Mailbox 2 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM3 = S2M    //Mailbox 3 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM4 = S2M    //Mailbox 4 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM5 = S2M    //Mailbox 5 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM6 = S2M    //Mailbox 6 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM7 = S2M    //Mailbox 7 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM8 = S2M    //Mailbox 8 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM9 = S2M    //Mailbox 9 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM10 = S2M    //Mailbox 10 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM11 = S2M    //Mailbox 11 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM12 = S2M    //Mailbox 12 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM13 = S2M    //Mailbox 13 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM14 = S2M    //Mailbox 14 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)
#pragma config MBXM15 = S2M    //Mailbox 15 data direction->Mailbox register configured for Main data read (Secondary to Main data transfer)

// FMBXHS1
#pragma config MBXHSA = MBX1    //Mailbox handshake protocol block A register assignment->MSIxMBXD1 assigned to mailbox handshake protocol block A
#pragma config MBXHSB = MBX3    //Mailbox handshake protocol block B register assignment->MSIxMBXD3 assigned to mailbox handshake protocol block B
#pragma config MBXHSC = MBX15    //Mailbox handshake protocol block C register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block C
#pragma config MBXHSD = MBX15    //Mailbox handshake protocol block D register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block D

// FMBXHS2
#pragma config MBXHSE = MBX15    //Mailbox handshake protocol block E register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block E
#pragma config MBXHSF = MBX15    //Mailbox handshake protocol block F register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block F
#pragma config MBXHSG = MBX15    //Mailbox handshake protocol block G register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block G
#pragma config MBXHSH = MBX15    //Mailbox handshake protocol block H register assignment->MSIxMBXD15 assigned to mailbox handshake protocol block H

// FMBXHSEN
#pragma config HSAEN = ON    //Mailbox A data flow control protocol block enable->Mailbox data flow control handshake protocol block enabled
#pragma config HSBEN = ON    //Mailbox B data flow control protocol block enable->Mailbox data flow control handshake protocol block enabled
#pragma config HSCEN = OFF    //Mailbox C data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSDEN = OFF    //Mailbox D data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSEEN = OFF    //Mailbox E data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSFEN = OFF    //Mailbox F data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSGEN = OFF    //Mailbox G data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.
#pragma config HSHEN = OFF    //Mailbox H data flow control protocol block enable->Mailbox data flow control handshake protocol block disabled.

// FS1DMTIVTL
#pragma config S1DMTIVTL = 0x0    //Secondary Dead Man Timer Interval low word

// FS1DMTIVTH
#pragma config S1DMTIVTH = 0x0    //Secondary Dead Man Timer Interval high word

// FS1DMTCNTL
#pragma config S1DMTCNTL = 0x0    //Secondary DMT instruction count time-out value low word

// FS1DMTCNTH
#pragma config S1DMTCNTH = 0x0    //Secondary DMT instruction count time-out value high word

// FS1DMT
#pragma config S1DMTDIS = OFF    //Secondary Dead Man Timer Disable bit->Secondary Dead Man Timer is Disabled and can be enabled by software

// FS1OSCSEL
#pragma config S1FNOSC = FRC    //Oscillator Source Selection->Internal Fast RC (FRC)
#pragma config S1IESO = OFF    //Two-speed Oscillator Start-up Enable bit->Start up with user-selected oscillator source

// FS1OSC
#pragma config S1OSCIOFNC = OFF    //Secondary OSC2 Pin Function bit->OSC2 is clock output
#pragma config S1FCKSM = CSDCMD    //Clock Switching Mode bits->Both Clock switching and Fail-safe Clock Monitor are disabled
#pragma config S1PLLKEN = S1PLLKEN_ON    //S1PLLKEN->S1PLLKEN_ON

// FS1WDT
#pragma config S1RWDTPS = PS1048576    //Run Mode Watchdog Timer Post Scaler select bits->1:1048576
#pragma config S1RCLKSEL = LPRC    //Watchdog Timer Clock Select bits->Always use LPRC
#pragma config S1WINDIS = ON    //Watchdog Timer Window Enable bit->Watchdog Timer operates in Non-Window mode
#pragma config S1WDTWIN = WIN25    //Watchdog Timer Window Select bits->WDT Window is 25% of WDT period
#pragma config S1SWDTPS = PS1048576    //Sleep Mode Watchdog Timer Post Scaler select bits->1:1048576
#pragma config S1FWDTEN = ON_SW    //Watchdog Timer Enable bit->WDT controlled via WDTCON.ON bit

// FS1ICD
#pragma config S1ICS = PGD1    //ICD Communication Channel Select bits->Communicate on PGC1 and PGD1
#pragma config S1ISOLAT = ON    //Isolate the Secondary core subsystem from the Main subsystem during Debug->The Secondary can operate (in debug mode) even if the SLVEN bit in the MSI is zero.
#pragma config S1NOBTSWP = OFF    //BOOTSWP Instruction Enable/Disable bit->BOOTSWP instruction is disabled

// FS1DEVOPT
#pragma config S1ALTI2C1 = OFF    //Alternate I2C1 Pin bit->I2C1 mapped to SDA1/SCL1 pins
#pragma config S1SPI1PIN = PPS    //S1 SPI1 Pin Select bit->Secondary SPI1 uses I/O remap (PPS) pins
#pragma config S1SSRE = ON    //Secondary Secondary Reset Enable->Secondary generated resets will reset the Secondary Enable Bit in the MSI module
#pragma config S1MSRE = OFF    //Main Secondary Reset Enable->The Main software oriented RESET events (RESET Op-Code, Watchdog timeout, TRAP reset, illegalInstruction) will not cause the Secondary subsystem to reset.

// FS1ALTREG
#pragma config S1CTXT1 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 1 bits->Not Assigned
#pragma config S1CTXT2 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 2 bits->Not Assigned
#pragma config S1CTXT3 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 3 bits->Not Assigned
#pragma config S1CTXT4 = OFF    //Specifies Interrupt Priority Level (IPL) Associated to Alternate Working Register 4 bits->Not Assigned

// FS1POR
#pragma config S1BISTDIS = DISABLED    //Secondary BIST on reset disable bit->Secondary BIST on reset feature disabled

// Section: Included Files

#include <stddef.h>
#include <libpic30.h>
#include "../sec_core_types.h"
#include "../sec_core_interface.h"
#include "../sec_core1.h"
#include "Recm_Ctrl_Config_Secondary.h"

#define SECONDARY_IMAGE     Recm_Ctrl_Config_Secondary
#define SECONDARY_NUMBER    1

/*
    Backward compatibility DFP package support
    dsPIC33CH-MP_DFP version: < v1.3.125
*/
#ifndef _MTSIRQ
#define _MTSIRQ _MSTIRQ
#endif

// Section: File specific functions
void (*SEC_CORE1_MSI1_ProtocolAHandler)(void) = NULL;
void (*SEC_CORE1_MSI1_ProtocolBHandler)(void) = NULL;

void (*SEC_CORE1_ReadFIFODataReadyHandler)(void) = NULL;
void (*SEC_CORE1_WriteFIFOEmptyHandler)(void) = NULL;
void (*SEC_CORE1_FIFOOverFLowUnderFlowHandler)(void) = NULL;
void (*SEC_CORE1_SecondaryInitiatedHandler)(void) = NULL;
void (*SEC_CORE1_SecondaryResetHandler)(void) = NULL;
// Section: Driver Interface

const struct SEC_CORE_INTERFACE MSIInterface = {
    .Initialize                         = &SEC_CORE1_Initialize,
    .Deinitialize                       = &SEC_CORE1_Deinitialize,
    .Program                            = &SEC_CORE1_Program,
    .Start                              = &SEC_CORE1_Start,
    .InterruptRequestGenerate           = &SEC_CORE1_InterruptRequestGenerate,
    .IsInterruptRequestAcknowledged     = &SEC_CORE1_IsInterruptRequestAcknowledged,
    .InterruptRequestComplete           = &SEC_CORE1_InterruptRequestComplete,
    .IsInterruptRequested               = &SEC_CORE1_IsInterruptRequested,
    .InterruptRequestAcknowledge        = &SEC_CORE1_InterruptRequestAcknowledge,
    .InterruptRequestAcknowledgeComplete= &SEC_CORE1_InterruptRequestAcknowledgeComplete,
    .GetResetCause                      = &SEC_CORE1_GetResetCause,
    .ResetCauseClear                    = &SEC_CORE1_ResetCauseClear,
    .SystemStatusGet                    = &SEC_CORE1_SystemStatusGet,
    .WriteFIFOEnable                    = &SEC_CORE1_WriteFIFOEnable,
    .WriteFIFODisable                   = &SEC_CORE1_WriteFIFODisable,
    .ReadFIFOEnable                     = &SEC_CORE1_ReadFIFOEnable,
    .ReadFIFODisable                    = &SEC_CORE1_ReadFIFODisable,
    .FIFORead                           = &SEC_CORE1_FIFORead,             
    .FIFOWrite                          = &SEC_CORE1_FIFOWrite,
    .FIFOReadIsFull                     = &SEC_CORE1_FIFOReadIsFull,
    .FIFOReadIsEmpty                    = &SEC_CORE1_FIFOReadIsEmpty,
    .FIFOWriteIsFull                    = &SEC_CORE1_FIFOWriteIsFull,
    .FIFOWriteIsEmpty                   = &SEC_CORE1_FIFOWriteIsEmpty,
    .ProtocolRead                       = &SEC_CORE1_ProtocolRead,
    .ProtocolWrite                      = &SEC_CORE1_ProtocolWrite, 
    .ProtocolIsFull                     = &SEC_CORE1_ProtocolIsFull,
    .ProtocolIsEmpty                    = &SEC_CORE1_ProtocolIsEmpty,
    .ProtocolCallbackRegister           = &SEC_CORE1_ProtocolCallbackRegister,
    .ReadFIFODataReadyCallbackRegister        = &SEC_CORE1_ReadFIFODataReadyCallbackRegister,
    .WriteFIFOEmptyCallbackRegister        = &SEC_CORE1_WriteFIFOEmptyCallbackRegister,
    .FIFOOverFLowUnderFlowCallbackRegister        = &SEC_CORE1_FIFOOverFLowUnderFlowCallbackRegister,
    .SecondaryInitiatedCallbackRegister        = &SEC_CORE1_SecondaryInitiatedCallbackRegister,
    .SecondaryBreakCallbackRegister        = NULL,
    .SecondaryResetCallbackRegister        = &SEC_CORE1_SecondaryResetCallbackRegister,
};

// Section: SEC_CORE1 Module APIs

void SEC_CORE1_Initialize(void)
{
    //SRSTIE enabled; STMIACK disabled; MSTIRQ disabled; RFITSEL Trigger data valid interrupt when 1st FIFO entry is written by Slave; SLVEN disabled; 
    MSI1CON = 0x80U;    
    //RFEN disabled; WFEN disabled; 
    MSI1FIFOCS = 0x0U;    

    SEC_CORE1_ProtocolCallbackRegister(MSI1_ProtocolA, &SEC_CORE1_MSI1_ProtocolACallback);
    SEC_CORE1_ProtocolCallbackRegister(MSI1_ProtocolB, &SEC_CORE1_MSI1_ProtocolBCallback);
    SEC_CORE1_ReadFIFODataReadyCallbackRegister(&SEC_CORE1_ReadFIFODataReadyCallback);
    SEC_CORE1_WriteFIFOEmptyCallbackRegister(&SEC_CORE1_WriteFIFOEmptyCallback);
    SEC_CORE1_FIFOOverFLowUnderFlowCallbackRegister(&SEC_CORE1_FIFOOverFLowUnderFlowCallback);
    SEC_CORE1_SecondaryInitiatedCallbackRegister(&SEC_CORE1_SecondaryInitiatedCallback);
    SEC_CORE1_SecondaryResetCallbackRegister(&SEC_CORE1_SecondaryResetCallback);
    
    //ProtocolA Interrupt Flag Clear
    IFS8bits.MSIAIF = 0U;    
    //ProtocolA Interrupt Enable
    IEC8bits.MSIAIE = 1U;
    //ProtocolB Interrupt Flag Clear
    IFS8bits.MSIBIF = 0U;    
    //ProtocolB Interrupt Enable
    IEC8bits.MSIBIE = 1U;
    //Read FIFO Interrupt Flag Clear
    IFS8bits.MSIDTIF = 0U;
    //Read FIFO Interrupt Enable
    IEC8bits.MSIDTIE = 1U;     
    //Write FIFO Interrupt Flag Clear
    IFS8bits.MSIWFEIF = 0U;
    //Write FIFO Interrupt Enable
    IEC8bits.MSIWFEIE = 1U;     
    //FIFO Overflow-Underflow Interrupt Flag Clear
    IFS8bits.MSIFLTIF = 0U;
    //FIFO Overflow-Underflow Interrupt Enable
    IEC8bits.MSIFLTIE = 1U;     
    //Secondary Initiated Interrupt Flag Clear
    IFS8bits.MSIS1IF = 0U;
    //Secondary Initiated Interrupt Enable
    IEC8bits.MSIS1IE = 1U;     
    //Secondary Reset Interrupt Flag Clear
    IFS8bits.S1RSTIF = 0U;
    //Secondary Reset Interrupt Enable
    IEC8bits.S1RSTIE = 1U;     
}

void SEC_CORE1_Deinitialize(void)
{
    MSI1CON = 0x0U;    
    MSI1FIFOCS = 0x0U;    

    //ProtocolA Interrupt Disable
    IEC8bits.MSIAIE = 0U;
    //ProtocolA Interrupt Flag Clear
    IFS8bits.MSIAIF = 0U;    
    //ProtocolB Interrupt Disable
    IEC8bits.MSIBIE = 0U;
    //ProtocolB Interrupt Flag Clear
    IFS8bits.MSIBIF = 0U;    
    //Read FIFO Interrupt Disable
    IEC8bits.MSIDTIE = 0U; 
    //Read FIFO Interrupt Flag Clear
    IFS8bits.MSIDTIF = 0U;
    //Write FIFO Interrupt Disable
    IEC8bits.MSIWFEIE = 0U; 
    //Write FIFO Interrupt Flag Clear
    IFS8bits.MSIWFEIF = 0U;
    //FIFO Overflow-Underflow Interrupt Disable
    IEC8bits.MSIFLTIE = 0U; 
    //FIFO Overflow-Underflow Interrupt Flag Clear
    IFS8bits.MSIFLTIF = 0U;
    //Secondary Initiated Interrupt Disable
    IEC8bits.MSIS1IE = 0U; 
    //Secondary Initiated Interrupt Flag Clear
    IFS8bits.MSIS1IF = 0U;
    //Secondary Reset Interrupt Disable
    IEC8bits.S1RSTIE = 0U; 
    //Secondary Reset Interrupt Flag Clear
    IFS8bits.S1RSTIF = 0U;
}

void SEC_CORE1_Start(void)
{
    #if __XC16_VERSION__ < 1700
    
    /*
    Backward compatibility support for
    XC16 version < v1.70
    dsPIC33CH-MP_DFP version < 1.6.186
    */
    
    _start_slave();
    #else
    _start_secondary();
    #endif
}

void SEC_CORE1_Program(void)               
{
    #if __XC16_VERSION__ < 1700
    
    /*
    Backward compatibility support for
    XC16 version < v1.70
    dsPIC33CH-MP_DFP version < 1.6.186
    */

    _program_slave(SECONDARY_NUMBER,0,SECONDARY_IMAGE);
    #else
    _program_secondary(SECONDARY_NUMBER,0,SECONDARY_IMAGE);
    #endif
}

void SEC_CORE1_InterruptRequestGenerate(void)
{
    MSI1CONbits.MTSIRQ = 1U;
}

bool SEC_CORE1_IsInterruptRequestAcknowledged(void)
{
    return(MSI1STATbits.MTSIACK);
    
}

void SEC_CORE1_InterruptRequestComplete(void)
{
    MSI1CONbits.MTSIRQ = 0U;
}
 
bool SEC_CORE1_IsInterruptRequested(void)
{
    return(MSI1STATbits.STMIRQ);
}
void SEC_CORE1_InterruptRequestAcknowledge(void)
{
    MSI1CONbits.STMIACK = 1U;
}

void SEC_CORE1_InterruptRequestAcknowledgeComplete(void)
{
    MSI1CONbits.STMIACK = 0U;
}

enum SEC_CORE_RESET_CAUSE SEC_CORE1_GetResetCause(void)
{
    enum SEC_CORE_RESET_CAUSE resetCause;
    
    if(MSI1STATbits.SLVWDRST)
    {
        resetCause = SEC_CORE_RESET_CAUSE_WATCHDOG;
    }
    else
    {
        resetCause = SEC_CORE_RESET_CAUSE_UNSPECIFIED;
    }
    
    return resetCause;
}

void SEC_CORE1_ResetCauseClear(enum SEC_CORE_RESET_CAUSE resetCause)
{
    switch(resetCause)
    {
        case SEC_CORE_RESET_CAUSE_WATCHDOG :   MSI1STATbits.SLVWDRST = 0U;
                                                    break;
        default                         :
                                            break;
    }
}
 
enum SEC_CORE_SYSTEM_STATUS SEC_CORE1_SystemStatusGet(void)
{
    enum SEC_CORE_SYSTEM_STATUS systemStatus = SEC_CORE_SYSTEM_STATUS_RUNNING_STATE;
    
    if(MSI1STATbits.SLVRST)
    {
        systemStatus = SEC_CORE_SYSTEM_STATUS_IN_RESET_STATE;
    }
    else
    {
        switch(MSI1STATbits.SLVPWR)
        {
            case 0: systemStatus = SEC_CORE_SYSTEM_STATUS_NOT_IN_LOW_POWER_MODE;
                    break;
            case 1: systemStatus = SEC_CORE_SYSTEM_STATUS_IDLE_MODE;
                    break;
            case 2: systemStatus = SEC_CORE_SYSTEM_STATUS_SLEEP_MODE;
                    break;
            default:systemStatus = SEC_CORE_SYSTEM_STATUS_RUNNING_STATE;
                    break;             
        }
    }
    return systemStatus;
}

uint16_t SEC_CORE1_FIFORead(uint16_t *pData, uint16_t wordCount)
{
    uint16_t readCountStatus = 0U;
    
    while(wordCount)
    {
        if(!SEC_CORE1_FIFOReadIsEmpty())
        {
            *pData++ = MRSWFDATA;
            wordCount--;
            readCountStatus++;
        }
        else
        {
            break;
        }
    }
    return readCountStatus;  
}

uint16_t SEC_CORE1_FIFOWrite(uint16_t *pData, uint16_t wordCount)
{
    uint16_t writeCountStatus = 0U;
    
    while(wordCount)
    {
        if(!SEC_CORE1_FIFOWriteIsFull())
        {
            MWSRFDATA = *pData++;
            wordCount--;
            writeCountStatus++;
        }
        else
        {
            break;
        }
    }
    return writeCountStatus;
}
 
bool SEC_CORE1_ProtocolWrite(enum SEC_CORE_PROTOCOLS protocolName, uint16_t *pData)
{
    bool status = false;
    switch(protocolName)
    {
        case MSI1_ProtocolA:
            if(SEC_CORE1_ProtocolIsEmpty(MSI1_ProtocolA))
            {
                MSI1MBX0D = pData[0];
                MSI1MBX1D = pData[1];
                status = true;
            }    
            else
            {
                status = false;
            }
            break;
        default:
            break; 
    }
    return status;    
}

bool SEC_CORE1_ProtocolRead(enum SEC_CORE_PROTOCOLS protocolName, uint16_t *pData)
{
    bool status = false;   
    switch(protocolName)
    {
        case MSI1_ProtocolB:
            if(SEC_CORE1_ProtocolIsFull(MSI1_ProtocolB))
            {
                pData[0] = MSI1MBX2D;
                pData[1] = MSI1MBX3D;

                status = true;
            }
            else
            {
                status = false;
            }
            break;
        default:
            break; 
	}
    return status;
}

void SEC_CORE1_ProtocolCallbackRegister(enum SEC_CORE_PROTOCOLS protocolName, void (*handler)(void))
{
    switch(protocolName)
    {
        case MSI1_ProtocolA:
            if(NULL != handler)
            {
                SEC_CORE1_MSI1_ProtocolAHandler = handler;
            }
            break;
        case MSI1_ProtocolB:
            if(NULL != handler)
            {
                SEC_CORE1_MSI1_ProtocolBHandler = handler;
            }
            break;
        default:
            break;
    }
}

void __attribute__ ((weak)) SEC_CORE1_MSI1_ProtocolACallback(void)
{
    
}

void __attribute__ ((interrupt, no_auto_psv)) _MSIAInterrupt(void)
{
    (*SEC_CORE1_MSI1_ProtocolAHandler)();
    IFS8bits.MSIAIF=0U;
}

void __attribute__ ((weak)) SEC_CORE1_MSI1_ProtocolBCallback(void)
{
    
}

void __attribute__ ((interrupt, no_auto_psv)) _MSIBInterrupt(void)
{
    (*SEC_CORE1_MSI1_ProtocolBHandler)();
    IFS8bits.MSIBIF=0U;
}

void SEC_CORE1_ReadFIFODataReadyCallbackRegister(void (*handler)(void))
{
    if(NULL != handler)
    {
        SEC_CORE1_ReadFIFODataReadyHandler = handler;
    }
}

void __attribute__ ((weak)) SEC_CORE1_ReadFIFODataReadyCallback(void)
{ 

} 

void __attribute__ ((interrupt, no_auto_psv)) _MSIDTInterrupt(void)
{
    (*SEC_CORE1_ReadFIFODataReadyHandler)();
    IFS8bits.MSIDTIF=0U;
}

void SEC_CORE1_WriteFIFOEmptyCallbackRegister(void (*handler)(void))
{
    if(NULL != handler)
    {
        SEC_CORE1_WriteFIFOEmptyHandler = handler;
    }
}

void __attribute__ ((weak)) SEC_CORE1_WriteFIFOEmptyCallback(void)
{ 

} 

void __attribute__ ((interrupt, no_auto_psv)) _MSIWFEInterrupt(void)
{
    (*SEC_CORE1_WriteFIFOEmptyHandler)();
    IFS8bits.MSIWFEIF=0U;
}

void SEC_CORE1_FIFOOverFLowUnderFlowCallbackRegister(void (*handler)(void))
{
    if(NULL != handler)
    {
        SEC_CORE1_FIFOOverFLowUnderFlowHandler = handler;
    }
}

void __attribute__ ((weak)) SEC_CORE1_FIFOOverFLowUnderFlowCallback(void)
{ 

} 

void __attribute__ ((interrupt, no_auto_psv)) _MSIFLTInterrupt(void)
{
    (*SEC_CORE1_FIFOOverFLowUnderFlowHandler)();
    IFS8bits.MSIFLTIF=0U;
}

void SEC_CORE1_SecondaryInitiatedCallbackRegister(void (*handler)(void))
{
    if(NULL != handler)
    {
        SEC_CORE1_SecondaryInitiatedHandler = handler;
    }
}

void __attribute__ ((weak)) SEC_CORE1_SecondaryInitiatedCallback(void)
{ 

} 

void __attribute__ ((interrupt, no_auto_psv)) _MSIS1Interrupt(void)
{
    (*SEC_CORE1_SecondaryInitiatedHandler)();
    IFS8bits.MSIS1IF=0U;
}

void SEC_CORE1_SecondaryResetCallbackRegister(void (*handler)(void))
{
    if(NULL != handler)
    {
        SEC_CORE1_SecondaryResetHandler = handler;
    }
}

void __attribute__ ((weak)) SEC_CORE1_SecondaryResetCallback(void)
{ 

} 

void __attribute__ ((interrupt, no_auto_psv)) _S1RSTInterrupt(void)
{
    (*SEC_CORE1_SecondaryResetHandler)();
    IFS8bits.S1RSTIF=0U;
}



