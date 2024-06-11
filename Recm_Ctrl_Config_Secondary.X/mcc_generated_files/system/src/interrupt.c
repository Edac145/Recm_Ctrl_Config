/**
 * INTERRUPT Generated Driver Source File 
 * 
 * @file      interrupt.c
 *            
 * @ingroup   interruptdriver
 *            
 * @brief     This is the generated driver source file for INTERRUPT driver
 *            
 * @skipline @version   Firmware Driver Version 1.1.2
 *
 * @skipline @version   PLIB Version 1.3.1
 *            
 * @skipline  Device : dsPIC33CH512MP508S1
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

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

// Section: Includes
#include <xc.h>
#include "../interrupt.h"

// Section: Driver Interface Function Definitions

void INTERRUPT_Initialize(void)
{
    // DMT: Dead Man Timer
    // Priority: 1
    IPC11bits.DMTIP = 1;
    
    // MSIA: MSI Protocol A
    // Priority: 1
    IPC32bits.MSIAIP = 1;
    
    // MSIB: MSI Protocol B
    // Priority: 1
    IPC32bits.MSIBIP = 1;
    
    // MSIDT: MSI Slave Read FIFO Data Ready
    // Priority: 1
    IPC34bits.MSIDTIP = 1;
    
    // MSIFLT: MSI Slave R/W FIFO Over/Underflow
    // Priority: 1
    IPC35bits.MSIFLTIP = 1;
    
    // MSIM: MSI Master Initiated
    // Priority: 1
    IPC32bits.MSIMIP = 1;
    
    // MSIWFE: MSI Slave Write FIFO Empty
    // Priority: 1
    IPC34bits.MSIWFEIP = 1;
    
    // MSTRST: MSI Master Reset
    // Priority: 1
    IPC35bits.MSTRSTIP = 1;
    
}

void INTERRUPT_Deinitialize(void)
{
    //POR default value of priority
    IPC11bits.DMTIP = 4;
    IPC32bits.MSIAIP = 4;
    IPC32bits.MSIBIP = 4;
    IPC34bits.MSIDTIP = 4;
    IPC35bits.MSIFLTIP = 4;
    IPC32bits.MSIMIP = 4;
    IPC34bits.MSIWFEIP = 4;
    IPC35bits.MSTRSTIP = 4;
}
