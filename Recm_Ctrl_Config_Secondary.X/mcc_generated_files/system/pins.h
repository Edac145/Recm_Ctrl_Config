/**
 * PINS Generated Driver Header File 
 * 
 * @file      pins.h
 *            
 * @defgroup  pinsdriver Pins Driver
 *            
 * @brief     The Pin Driver directs the operation and function of 
 *            the selected device pins using dsPIC MCUs.
 *
 * @skipline @version   Firmware Driver Version 1.0.2
 *
 * @skipline @version   PLIB Version 1.3.0
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

#ifndef PINS_H
#define PINS_H
// Section: Includes
#include <xc.h>

// Section: Device Pin Macros

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD2 GPIO Pin which has a custom name of IO_RD2 to High
 * @pre      The RD2 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RD2_SetHigh()          (_LATD2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD2 GPIO Pin which has a custom name of IO_RD2 to Low
 * @pre      The RD2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD2_SetLow()           (_LATD2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD2 GPIO Pin which has a custom name of IO_RD2
 * @pre      The RD2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD2_Toggle()           (_LATD2 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD2 GPIO Pin which has a custom name of IO_RD2
 * @param    none
 * @return   none  
 */
#define IO_RD2_GetValue()         _RD2

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD2 GPIO Pin which has a custom name of IO_RD2 as Input
 * @param    none
 * @return   none  
 */
#define IO_RD2_SetDigitalInput()  (_TRISD2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD2 GPIO Pin which has a custom name of IO_RD2 as Output
 * @param    none
 * @return   none  
 */
#define IO_RD2_SetDigitalOutput() (_TRISD2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD3 GPIO Pin which has a custom name of IO_RD3 to High
 * @pre      The RD3 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RD3_SetHigh()          (_LATD3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD3 GPIO Pin which has a custom name of IO_RD3 to Low
 * @pre      The RD3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD3_SetLow()           (_LATD3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD3 GPIO Pin which has a custom name of IO_RD3
 * @pre      The RD3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD3_Toggle()           (_LATD3 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD3 GPIO Pin which has a custom name of IO_RD3
 * @param    none
 * @return   none  
 */
#define IO_RD3_GetValue()         _RD3

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD3 GPIO Pin which has a custom name of IO_RD3 as Input
 * @param    none
 * @return   none  
 */
#define IO_RD3_SetDigitalInput()  (_TRISD3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD3 GPIO Pin which has a custom name of IO_RD3 as Output
 * @param    none
 * @return   none  
 */
#define IO_RD3_SetDigitalOutput() (_TRISD3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD4 GPIO Pin which has a custom name of IO_RD4 to High
 * @pre      The RD4 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RD4_SetHigh()          (_LATD4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD4 GPIO Pin which has a custom name of IO_RD4 to Low
 * @pre      The RD4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD4_SetLow()           (_LATD4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD4 GPIO Pin which has a custom name of IO_RD4
 * @pre      The RD4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD4_Toggle()           (_LATD4 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD4 GPIO Pin which has a custom name of IO_RD4
 * @param    none
 * @return   none  
 */
#define IO_RD4_GetValue()         _RD4

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD4 GPIO Pin which has a custom name of IO_RD4 as Input
 * @param    none
 * @return   none  
 */
#define IO_RD4_SetDigitalInput()  (_TRISD4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD4 GPIO Pin which has a custom name of IO_RD4 as Output
 * @param    none
 * @return   none  
 */
#define IO_RD4_SetDigitalOutput() (_TRISD4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD5 GPIO Pin which has a custom name of IO_RD5 to High
 * @pre      The RD5 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RD5_SetHigh()          (_LATD5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD5 GPIO Pin which has a custom name of IO_RD5 to Low
 * @pre      The RD5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD5_SetLow()           (_LATD5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD5 GPIO Pin which has a custom name of IO_RD5
 * @pre      The RD5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RD5_Toggle()           (_LATD5 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD5 GPIO Pin which has a custom name of IO_RD5
 * @param    none
 * @return   none  
 */
#define IO_RD5_GetValue()         _RD5

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD5 GPIO Pin which has a custom name of IO_RD5 as Input
 * @param    none
 * @return   none  
 */
#define IO_RD5_SetDigitalInput()  (_TRISD5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD5 GPIO Pin which has a custom name of IO_RD5 as Output
 * @param    none
 * @return   none  
 */
#define IO_RD5_SetDigitalOutput() (_TRISD5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE0 GPIO Pin which has a custom name of IO_RE0 to High
 * @pre      The RE0 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE0_SetHigh()          (_LATE0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE0 GPIO Pin which has a custom name of IO_RE0 to Low
 * @pre      The RE0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE0_SetLow()           (_LATE0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE0 GPIO Pin which has a custom name of IO_RE0
 * @pre      The RE0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE0_Toggle()           (_LATE0 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE0 GPIO Pin which has a custom name of IO_RE0
 * @param    none
 * @return   none  
 */
#define IO_RE0_GetValue()         _RE0

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE0 GPIO Pin which has a custom name of IO_RE0 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE0_SetDigitalInput()  (_TRISE0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE0 GPIO Pin which has a custom name of IO_RE0 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE0_SetDigitalOutput() (_TRISE0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE1 GPIO Pin which has a custom name of IO_RE1 to High
 * @pre      The RE1 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE1_SetHigh()          (_LATE1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE1 GPIO Pin which has a custom name of IO_RE1 to Low
 * @pre      The RE1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE1_SetLow()           (_LATE1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE1 GPIO Pin which has a custom name of IO_RE1
 * @pre      The RE1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE1_Toggle()           (_LATE1 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE1 GPIO Pin which has a custom name of IO_RE1
 * @param    none
 * @return   none  
 */
#define IO_RE1_GetValue()         _RE1

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE1 GPIO Pin which has a custom name of IO_RE1 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE1_SetDigitalInput()  (_TRISE1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE1 GPIO Pin which has a custom name of IO_RE1 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE1_SetDigitalOutput() (_TRISE1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE2 GPIO Pin which has a custom name of IO_RE2 to High
 * @pre      The RE2 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE2_SetHigh()          (_LATE2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE2 GPIO Pin which has a custom name of IO_RE2 to Low
 * @pre      The RE2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE2_SetLow()           (_LATE2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE2 GPIO Pin which has a custom name of IO_RE2
 * @pre      The RE2 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE2_Toggle()           (_LATE2 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE2 GPIO Pin which has a custom name of IO_RE2
 * @param    none
 * @return   none  
 */
#define IO_RE2_GetValue()         _RE2

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE2 GPIO Pin which has a custom name of IO_RE2 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE2_SetDigitalInput()  (_TRISE2 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE2 GPIO Pin which has a custom name of IO_RE2 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE2_SetDigitalOutput() (_TRISE2 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE3 GPIO Pin which has a custom name of IO_RE3 to High
 * @pre      The RE3 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE3_SetHigh()          (_LATE3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE3 GPIO Pin which has a custom name of IO_RE3 to Low
 * @pre      The RE3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE3_SetLow()           (_LATE3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE3 GPIO Pin which has a custom name of IO_RE3
 * @pre      The RE3 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE3_Toggle()           (_LATE3 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE3 GPIO Pin which has a custom name of IO_RE3
 * @param    none
 * @return   none  
 */
#define IO_RE3_GetValue()         _RE3

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE3 GPIO Pin which has a custom name of IO_RE3 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE3_SetDigitalInput()  (_TRISE3 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE3 GPIO Pin which has a custom name of IO_RE3 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE3_SetDigitalOutput() (_TRISE3 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE4 GPIO Pin which has a custom name of IO_RE4 to High
 * @pre      The RE4 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE4_SetHigh()          (_LATE4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE4 GPIO Pin which has a custom name of IO_RE4 to Low
 * @pre      The RE4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE4_SetLow()           (_LATE4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE4 GPIO Pin which has a custom name of IO_RE4
 * @pre      The RE4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE4_Toggle()           (_LATE4 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE4 GPIO Pin which has a custom name of IO_RE4
 * @param    none
 * @return   none  
 */
#define IO_RE4_GetValue()         _RE4

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE4 GPIO Pin which has a custom name of IO_RE4 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE4_SetDigitalInput()  (_TRISE4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE4 GPIO Pin which has a custom name of IO_RE4 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE4_SetDigitalOutput() (_TRISE4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE5 GPIO Pin which has a custom name of IO_RE5 to High
 * @pre      The RE5 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE5_SetHigh()          (_LATE5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE5 GPIO Pin which has a custom name of IO_RE5 to Low
 * @pre      The RE5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE5_SetLow()           (_LATE5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE5 GPIO Pin which has a custom name of IO_RE5
 * @pre      The RE5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE5_Toggle()           (_LATE5 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE5 GPIO Pin which has a custom name of IO_RE5
 * @param    none
 * @return   none  
 */
#define IO_RE5_GetValue()         _RE5

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE5 GPIO Pin which has a custom name of IO_RE5 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE5_SetDigitalInput()  (_TRISE5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE5 GPIO Pin which has a custom name of IO_RE5 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE5_SetDigitalOutput() (_TRISE5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE6 GPIO Pin which has a custom name of IO_RE6 to High
 * @pre      The RE6 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE6_SetHigh()          (_LATE6 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE6 GPIO Pin which has a custom name of IO_RE6 to Low
 * @pre      The RE6 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE6_SetLow()           (_LATE6 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE6 GPIO Pin which has a custom name of IO_RE6
 * @pre      The RE6 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE6_Toggle()           (_LATE6 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE6 GPIO Pin which has a custom name of IO_RE6
 * @param    none
 * @return   none  
 */
#define IO_RE6_GetValue()         _RE6

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE6 GPIO Pin which has a custom name of IO_RE6 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE6_SetDigitalInput()  (_TRISE6 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE6 GPIO Pin which has a custom name of IO_RE6 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE6_SetDigitalOutput() (_TRISE6 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE7 GPIO Pin which has a custom name of IO_RE7 to High
 * @pre      The RE7 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE7_SetHigh()          (_LATE7 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE7 GPIO Pin which has a custom name of IO_RE7 to Low
 * @pre      The RE7 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE7_SetLow()           (_LATE7 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE7 GPIO Pin which has a custom name of IO_RE7
 * @pre      The RE7 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE7_Toggle()           (_LATE7 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE7 GPIO Pin which has a custom name of IO_RE7
 * @param    none
 * @return   none  
 */
#define IO_RE7_GetValue()         _RE7

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE7 GPIO Pin which has a custom name of IO_RE7 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE7_SetDigitalInput()  (_TRISE7 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE7 GPIO Pin which has a custom name of IO_RE7 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE7_SetDigitalOutput() (_TRISE7 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE8 GPIO Pin which has a custom name of IO_RE8 to High
 * @pre      The RE8 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE8_SetHigh()          (_LATE8 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE8 GPIO Pin which has a custom name of IO_RE8 to Low
 * @pre      The RE8 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE8_SetLow()           (_LATE8 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE8 GPIO Pin which has a custom name of IO_RE8
 * @pre      The RE8 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE8_Toggle()           (_LATE8 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE8 GPIO Pin which has a custom name of IO_RE8
 * @param    none
 * @return   none  
 */
#define IO_RE8_GetValue()         _RE8

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE8 GPIO Pin which has a custom name of IO_RE8 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE8_SetDigitalInput()  (_TRISE8 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE8 GPIO Pin which has a custom name of IO_RE8 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE8_SetDigitalOutput() (_TRISE8 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE9 GPIO Pin which has a custom name of IO_RE9 to High
 * @pre      The RE9 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE9_SetHigh()          (_LATE9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE9 GPIO Pin which has a custom name of IO_RE9 to Low
 * @pre      The RE9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE9_SetLow()           (_LATE9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE9 GPIO Pin which has a custom name of IO_RE9
 * @pre      The RE9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE9_Toggle()           (_LATE9 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE9 GPIO Pin which has a custom name of IO_RE9
 * @param    none
 * @return   none  
 */
#define IO_RE9_GetValue()         _RE9

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE9 GPIO Pin which has a custom name of IO_RE9 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE9_SetDigitalInput()  (_TRISE9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE9 GPIO Pin which has a custom name of IO_RE9 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE9_SetDigitalOutput() (_TRISE9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE10 GPIO Pin which has a custom name of IO_RE10 to High
 * @pre      The RE10 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE10_SetHigh()          (_LATE10 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE10 GPIO Pin which has a custom name of IO_RE10 to Low
 * @pre      The RE10 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE10_SetLow()           (_LATE10 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE10 GPIO Pin which has a custom name of IO_RE10
 * @pre      The RE10 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE10_Toggle()           (_LATE10 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE10 GPIO Pin which has a custom name of IO_RE10
 * @param    none
 * @return   none  
 */
#define IO_RE10_GetValue()         _RE10

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE10 GPIO Pin which has a custom name of IO_RE10 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE10_SetDigitalInput()  (_TRISE10 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE10 GPIO Pin which has a custom name of IO_RE10 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE10_SetDigitalOutput() (_TRISE10 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE11 GPIO Pin which has a custom name of IO_RE11 to High
 * @pre      The RE11 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE11_SetHigh()          (_LATE11 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE11 GPIO Pin which has a custom name of IO_RE11 to Low
 * @pre      The RE11 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE11_SetLow()           (_LATE11 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE11 GPIO Pin which has a custom name of IO_RE11
 * @pre      The RE11 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE11_Toggle()           (_LATE11 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE11 GPIO Pin which has a custom name of IO_RE11
 * @param    none
 * @return   none  
 */
#define IO_RE11_GetValue()         _RE11

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE11 GPIO Pin which has a custom name of IO_RE11 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE11_SetDigitalInput()  (_TRISE11 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE11 GPIO Pin which has a custom name of IO_RE11 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE11_SetDigitalOutput() (_TRISE11 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE12 GPIO Pin which has a custom name of IO_RE12 to High
 * @pre      The RE12 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE12_SetHigh()          (_LATE12 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE12 GPIO Pin which has a custom name of IO_RE12 to Low
 * @pre      The RE12 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE12_SetLow()           (_LATE12 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE12 GPIO Pin which has a custom name of IO_RE12
 * @pre      The RE12 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE12_Toggle()           (_LATE12 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE12 GPIO Pin which has a custom name of IO_RE12
 * @param    none
 * @return   none  
 */
#define IO_RE12_GetValue()         _RE12

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE12 GPIO Pin which has a custom name of IO_RE12 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE12_SetDigitalInput()  (_TRISE12 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE12 GPIO Pin which has a custom name of IO_RE12 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE12_SetDigitalOutput() (_TRISE12 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE13 GPIO Pin which has a custom name of IO_RE13 to High
 * @pre      The RE13 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE13_SetHigh()          (_LATE13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE13 GPIO Pin which has a custom name of IO_RE13 to Low
 * @pre      The RE13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE13_SetLow()           (_LATE13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE13 GPIO Pin which has a custom name of IO_RE13
 * @pre      The RE13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE13_Toggle()           (_LATE13 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE13 GPIO Pin which has a custom name of IO_RE13
 * @param    none
 * @return   none  
 */
#define IO_RE13_GetValue()         _RE13

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE13 GPIO Pin which has a custom name of IO_RE13 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE13_SetDigitalInput()  (_TRISE13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE13 GPIO Pin which has a custom name of IO_RE13 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE13_SetDigitalOutput() (_TRISE13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE14 GPIO Pin which has a custom name of IO_RE14 to High
 * @pre      The RE14 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE14_SetHigh()          (_LATE14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE14 GPIO Pin which has a custom name of IO_RE14 to Low
 * @pre      The RE14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE14_SetLow()           (_LATE14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE14 GPIO Pin which has a custom name of IO_RE14
 * @pre      The RE14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE14_Toggle()           (_LATE14 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE14 GPIO Pin which has a custom name of IO_RE14
 * @param    none
 * @return   none  
 */
#define IO_RE14_GetValue()         _RE14

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE14 GPIO Pin which has a custom name of IO_RE14 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE14_SetDigitalInput()  (_TRISE14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE14 GPIO Pin which has a custom name of IO_RE14 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE14_SetDigitalOutput() (_TRISE14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE15 GPIO Pin which has a custom name of IO_RE15 to High
 * @pre      The RE15 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define IO_RE15_SetHigh()          (_LATE15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE15 GPIO Pin which has a custom name of IO_RE15 to Low
 * @pre      The RE15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE15_SetLow()           (_LATE15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE15 GPIO Pin which has a custom name of IO_RE15
 * @pre      The RE15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define IO_RE15_Toggle()           (_LATE15 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE15 GPIO Pin which has a custom name of IO_RE15
 * @param    none
 * @return   none  
 */
#define IO_RE15_GetValue()         _RE15

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE15 GPIO Pin which has a custom name of IO_RE15 as Input
 * @param    none
 * @return   none  
 */
#define IO_RE15_SetDigitalInput()  (_TRISE15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE15 GPIO Pin which has a custom name of IO_RE15 as Output
 * @param    none
 * @return   none  
 */
#define IO_RE15_SetDigitalOutput() (_TRISE15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Initializes the PINS module
 * @param    none
 * @return   none  
 */
void PINS_Initialize(void);



#endif
