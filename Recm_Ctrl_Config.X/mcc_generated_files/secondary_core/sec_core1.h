/**
 * SEC_CORE1 Generated Driver Header File
 * 
 * @file     sec_core1.h
 * 
 * @ingroup  sec_coredriver
 * 
 * @brief    This is the generated driver header file for the SEC_CORE1 driver
 *
 * @skipline @version Firmware Driver Version 1.0.0
 *
 * @skipline @version   PLIB Version 1.2.0
 *            
 * @skipline Device : dsPIC33CH512MP508
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

#ifndef SEC_CORE1_H
#define SEC_CORE1_H

// Section: Included Files

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include "sec_core_types.h"
#include "sec_core_interface.h"

// Section: Data Type Definitions


/**
 * @ingroup  sec_coredriver
 * @brief    Structure object of type SEC_CORE_INTERFACE with the custom name given by 
 *           the user in the Melody Driver User interface. The default name 
 *           e.g. Secondary1 can be changed by the user in the SEC_CORE user interface. 
 *           This allows defining a structure with application specific name using 
 *           the 'Custom Name' field. Application specific name allows the API Portability.
*/
extern const struct SEC_CORE_INTERFACE MSIInterface;

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_Initialize API
 */
#define MSIInterface_Initialize SEC_CORE1_Initialize

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_Deinitialize API
 */
#define MSIInterface_Deinitialize SEC_CORE1_Deinitialize

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_Program API
 */
#define MSIInterface_Program SEC_CORE1_Program

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_Strat API
 */
#define MSIInterface_Strat SEC_CORE1_Strat

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_InterruptRequestGenerate API
 */
#define MSIInterface_InterruptRequestGenerate SEC_CORE1_InterruptRequestGenerate

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_IsInterruptRequestAcknowledged API
 */
#define MSIInterface_IsInterruptRequestAcknowledged SEC_CORE1_IsInterruptRequestAcknowledged

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_InterruptRequestComplete API
 */
#define MSIInterface_InterruptRequestComplete SEC_CORE1_InterruptRequestComplete

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_IsInterruptRequested API
 */
#define MSIInterface_IsInterruptRequested SEC_CORE1_IsInterruptRequested

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_InterruptRequestAcknowledge API
 */
#define MSIInterface_InterruptRequestAcknowledge SEC_CORE1_InterruptRequestAcknowledge

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_InterruptRequestAcknowledgeComplete API
 */
#define MSIInterface_InterruptRequestAcknowledgeComplete SEC_CORE1_InterruptRequestAcknowledgeComplete

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_GetResetCause API
 */
#define MSIInterface_GetResetCause SEC_CORE1_GetResetCause

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_ResetCauseClear API
 */
#define MSIInterface_ResetCauseClear SEC_CORE1_ResetCauseClear

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_SystemStatusGet API
 */
#define MSIInterface_SystemStatusGet SEC_CORE1_SystemStatusGet

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_WriteFIFOEnable API
 */
#define MSIInterface_WriteFIFOEnable SEC_CORE1_WriteFIFOEnable

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_WriteFIFODisable API
 */
#define MSIInterface_WriteFIFODisable SEC_CORE1_WriteFIFODisable

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_ReadFIFOEnable API
 */
#define MSIInterface_ReadFIFOEnable SEC_CORE1_ReadFIFOEnable

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_ReadFIFODisable API
 */
#define MSIInterface_ReadFIFODisable SEC_CORE1_ReadFIFODisable

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_FIFORead API
 */
#define MSIInterface_FIFORead SEC_CORE1_FIFORead

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_FIFOWrite API
 */
#define MSIInterface_FIFOWrite SEC_CORE1_FIFOWrite

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_FIFOReadIsFull API
 */
#define MSIInterface_FIFOReadIsFull SEC_CORE1_FIFOReadIsFull

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_FIFOReadIsEmpty API
 */
#define MSIInterface_FIFOReadIsEmpty SEC_CORE1_FIFOReadIsEmpty

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_FIFOWriteIsFull API
 */
#define MSIInterface_FIFOWriteIsFull SEC_CORE1_FIFOWriteIsFull

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_FIFOWriteIsEmpty API
 */
#define MSIInterface_FIFOWriteIsEmpty SEC_CORE1_FIFOWriteIsEmpty

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_ProtocolWrite API
 */
#define MSIInterface_ProtocolWrite SEC_CORE1_ProtocolWrite

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_ProtocolRead API
 */
#define MSIInterface_ProtocolRead SEC_CORE1_ProtocolRead

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_ProtocolIsFull API
 */
#define MSIInterface_ProtocolIsFull SEC_CORE1_ProtocolIsFull

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_ProtocolIsEmpty API
 */
#define MSIInterface_ProtocolIsEmpty SEC_CORE1_ProtocolIsEmpty

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_ProtocolCallbackRegister API
 */
#define MSIInterface_ProtocolCallbackRegister SEC_CORE1_ProtocolCallbackRegister

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_ReadFIFODataReadyCallbackRegister API
 */
#define MSIInterface_ReadFIFODataReadyCallbackRegister SEC_CORE1_ReadFIFODataReadyCallbackRegister

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_WriteFIFOEmptyCallbackRegister API
 */
#define MSIInterface_WriteFIFOEmptyCallbackRegister SEC_CORE1_WriteFIFOEmptyCallbackRegister

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_FIFOOverFLowUnderFlowCallbackRegister API
 */
#define MSIInterface_FIFOOverFLowUnderFlowCallbackRegister SEC_CORE1_FIFOOverFLowUnderFlowCallbackRegister

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_SecondaryInitiatedCallbackRegister API
 */
#define MSIInterface_SecondaryInitiatedCallbackRegister SEC_CORE1_SecondaryInitiatedCallbackRegister

/**
 * @ingroup  sec_coredriver
 * @brief    This macro defines the Custom Name for \ref SEC_CORE1_SecondaryResetCallbackRegister API
 */
#define MSIInterface_SecondaryResetCallbackRegister SEC_CORE1_SecondaryResetCallbackRegister

// Section: SEC_CORE1 Module APIs

/**
 * @ingroup  sec_coredriver
 * @brief    This routine initializes the MSI driver.
 *           This routine must be called before any other MSI routine is called.
 *           This routine should only be called once during system initialization.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_Initialize(void);

/**
 * @ingroup  sec_coredriver
 * @brief    Deinitializes SEC_CORE1 to POR values.
 * @param    none
 * @return   none 
 */
void SEC_CORE1_Deinitialize(void);

/**
 * @ingroup  sec_coredriver
 * @brief    This routine enables secondary core.
 * @param    none
 * @return   none  
 */        
void SEC_CORE1_Start(void);

/**
 * @ingroup  sec_coredriver
 * @brief    This routine programs secondary.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_Program(void);

/**
 * @ingroup  sec_coredriver
 * @brief    This routine generates interrupt to SEC_CORE1.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_InterruptRequestGenerate(void);

/**
 * @ingroup  sec_coredriver
 * @brief    This routine returns the status of interrupt request acknowledge from the  SEC_CORE1.
 * @param    none
 * @return   True  - when SEC_CORE1 has acknowledged Main MSI interrupt request.
 * @return   False - when SEC_CORE1 has not acknowledged Main MSI interrupt request.  
 */       
bool SEC_CORE1_IsInterruptRequestAcknowledged(void);    

/**
 * @ingroup  sec_coredriver
 * @brief    This routine clears interrupt to SEC_CORE1.
 * @param    none
 * @return   none  
 */       
void SEC_CORE1_InterruptRequestComplete(void);    

/**
 * @ingroup  sec_coredriver
 * @brief    This routine returns the status of interrupt request from the  SEC_CORE1.
 * @param    none
 * @return   True  - when SEC_CORE1 has issued interrupt to Main Core.
 * @return   False - when SEC_CORE1 has not issued interrupt to Main Core.  
 */     
bool SEC_CORE1_IsInterruptRequested(void);    

/**
 * @ingroup  sec_coredriver
 * @brief    This routine acknowledges interrupt received from SEC_CORE1.
 * @param    none
 * @return   none  
 */       
void SEC_CORE1_InterruptRequestAcknowledge(void);    

/**
 * @ingroup  sec_coredriver
 * @brief    This routine clears acknowledge for interrupt received from SEC_CORE1.
 * @param    none
 * @return   none  
 */       
void SEC_CORE1_InterruptRequestAcknowledgeComplete(void);

/**
 * @ingroup  sec_coredriver
 * @brief    This routine returns the cause for SEC_CORE1 reset.
 * @param    none
 * @return   SECONDARY_RESET_CAUSE: Enum which provides the cause for SEC_CORE1 reset.  
 */
enum SEC_CORE_RESET_CAUSE SEC_CORE1_GetResetCause(void);    

/**
 * @ingroup  sec_coredriver
 * @brief    This routine clears the cause for SEC_CORE1 reset.
 * @pre      SECONDARY_RESET_CAUSE: Enum which provides the cause for SEC_CORE1 reset.
 * @param    resetCause - reset to be cleared
 * @return   none  
 */     
void SEC_CORE1_ResetCauseClear(enum SEC_CORE_RESET_CAUSE resetCause);    

/**
 * @ingroup  sec_coredriver
 * @brief    This routine returns Secondary system status.
 * @param    none
 * @return   SEC_CORE_SYSTEM_STATUS: Enum which provides the status of SEC_CORE1.  
 */       
enum SEC_CORE_SYSTEM_STATUS SEC_CORE1_SystemStatusGet(void);    

/**
 * @ingroup    sec_coredriver
 * @brief      This routine reads FIFO data sent from the SEC_CORE1.
 * @pre        SEC_CORE1_ReadFIFOEnable should be called before calling this routine.
 * @param[in]  *pData      - Pointer to an array to store the read data
 * @param[in]  wordCount   - Number of words to be read.     
 * @return     Number of words read.  
 */     
uint16_t SEC_CORE1_FIFORead(uint16_t *pData, uint16_t wordCount);    

/**
 * @ingroup    sec_coredriver
 * @brief      This routine transfers FIFO data to SEC_CORE1.
 * @pre        SEC_CORE1_WriteFIFOEnable() should be called before calling this routine.
 * @param[in]  *pData      - Pointer to an array which has data for transmission.
 * @param[in]  wordCount   - Number of words to be transfer.  
 * @return     Number of words transferred.  
 */       
uint16_t SEC_CORE1_FIFOWrite(uint16_t *pData, uint16_t wordCount);

/** 
 * @ingroup  sec_coredriver
 * @brief    This inline function Enables the Write FIFO. 
 * @param    none
 * @return   none
 */ 
inline static void SEC_CORE1_WriteFIFOEnable(void)
{
    MSI1FIFOCSbits.WFEN = 1U;
}

/** 
 * @ingroup  sec_coredriver
 * @brief    This inline function Disables the Write FIFO. 
 * @param    none
 * @return   none
 */ 
inline static void SEC_CORE1_WriteFIFODisable(void)
{
    MSI1FIFOCSbits.WFEN = 0U;
}

/** 
 * @ingroup  sec_coredriver
 * @brief    This inline function Enables the Read FIFO. 
 * @param    none
 * @return   none
 */ 
inline static void SEC_CORE1_ReadFIFOEnable(void)
{
    MSI1FIFOCSbits.RFEN = 1U;
}

/** 
 * @ingroup  sec_coredriver
 * @brief    This inline function Disables the Read FIFO. 
 * @param    none
 * @return   none
 */ 
inline static void SEC_CORE1_ReadFIFODisable(void)
{
    MSI1FIFOCSbits.RFEN = 0U;
}

/** 
 * @ingroup  sec_coredriver
 * @brief    This inline function checks whether the status of Read FIFO is full. 
 *           last write by Secondary core to Read FIFO (RFDATA) was into the last free location
 * @return   true   -    Read FIFO is full
 * @return   false  -    Read FIFO is not full
 */ 
inline static bool SEC_CORE1_FIFOReadIsFull(void)
{
    return(MSI1FIFOCSbits.RFFULL);
}

/** 
 * @ingroup  sec_coredriver
 * @brief    This inline function checks whether the status of Read FIFO is Empty. 
 *           Returns true if last read by Main core from Read FIFO (RFDATA) emptied the 
 *           FIFO of all valid data or FIFO is disabled (and initialized to the empty state)
 * @return   true   -    Read FIFO is Empty
 * @return   false  -    Read FIFO is not Empty (Read FIFO contains valid data not yet read by the Main core)
 */
inline static bool SEC_CORE1_FIFOReadIsEmpty(void)
{
    return(MSI1FIFOCSbits.RFEMPTY);
}

/** 
 * @ingroup  sec_coredriver
 * @brief    This inline function checks whether the status of Write FIFO is Full. 
 *           Returns true if last write by Main core to Write FIFO (WFDATA) was into 
 *           the last free location
 * @return   true   -    Write FIFO is full
 * @return   false  -    Write FIFO is not full
 */ 
inline static bool SEC_CORE1_FIFOWriteIsFull(void)
{
    return(MSI1FIFOCSbits.WFFULL);
}

/** 
 * @ingroup  sec_coredriver
 * @brief    This inline function checks whether the status of Write FIFO is Empty. 
 *           Returns true if last write by Main core to Write FIFO (WFDATA) was into 
 *           the last free location
 * @return   true   -    Write FIFO is Empty
 * @return   false  -    Write FIFO is not Empty (Write FIFO contains valid data not yet read by the Secondary core)
 */ 
inline static bool SEC_CORE1_FIFOWriteIsEmpty(void)
{
    return(MSI1FIFOCSbits.WFEMPTY);
}

/**
 * @ingroup    sec_coredriver
 * @brief      This routine writes data to mailbox.
 * @param[in]  protocolName - Selected protocol 
 * @param[in]  *pData      - Pointer to a structure which has data for transmission.  
 * @return     true   -    successful write
 * @return     false  -    unsuccessful write  
 */      
bool SEC_CORE1_ProtocolWrite(enum SEC_CORE_PROTOCOLS protocolName, uint16_t *pData);

/** 
 * @ingroup    sec_coredriver
 * @brief      This routine reads data from mailbox.
 * @param[in]  protocolName - Selected protocol 
 * @param[in]  *pData       - Pointer to a structure to store the read data  
 * @return     true   -    successful read
 * @return     false  -    unsuccessful read  
 */   
bool SEC_CORE1_ProtocolRead(enum SEC_CORE_PROTOCOLS protocolName, uint16_t *pData);

/** 
 * @ingroup    sec_coredriver
 * @brief      This inline function checks whether mailbox is full. 
 *             Returns true if new data are ready to read. Returns false when 
 *             no data are available to be read by secondary
 * @param[in]  protocolName - Selected protocol 
 * @return     true   -    Mailbox is full
 * @return     false  -    Mailbox is empty 
 */ 
inline static bool SEC_CORE1_ProtocolIsFull(enum SEC_CORE_PROTOCOLS protocolName)
{
    bool status = false;
    switch(protocolName)
    {
        case MSI1_ProtocolA:
            status =  MSI1MBXSbits.DTRDYA;
            break;
        case MSI1_ProtocolB:
            status =  MSI1MBXSbits.DTRDYB;
            break;
        default:
            break;   
    }  
    return status;   
}

/** 
 * @ingroup    sec_coredriver
 * @brief      This inline function checks whether mailbox is empty. 
 *             Returns true if Protocol is empty indicating mailbox is ready to 
 *             write by secondary. Returns false indicating write operation cannot 
 *             be performed by secondary
 * @param[in]  protocolName - Selected protocol 
 * @return     true   -    Mailbox is empty
 * @return     false  -    Mailbox is full
 */ 
inline static bool SEC_CORE1_ProtocolIsEmpty(enum SEC_CORE_PROTOCOLS protocolName)
{
    bool status = false;
    switch(protocolName)
    {
        case MSI1_ProtocolA:
            status =  !MSI1MBXSbits.DTRDYA;
            break;
        case MSI1_ProtocolB:
            status =  !MSI1MBXSbits.DTRDYB;
            break;
        default:
            break;   
    }  
    return status; 
}

/**
 * @ingroup    sec_coredriver
 * @brief      This function can be used to override default callback and to define 
 *             custom callback for SEC_CORE1 protocol event.
 * @param[in]  protocolName - Selected protocol 
 * @param[in]  handler - Address of the callback function.  
 * @return     none
 */
void SEC_CORE1_ProtocolCallbackRegister(enum SEC_CORE_PROTOCOLS protocolName, void (*handler)(void));

/**
 * @ingroup  sec_coredriver
 * @brief    This is the default callback with weak attribute. The user can 
 *           override and implement the default callback without weak attribute 
 *           or can register a custom callback function using  \ref SEC_CORE1_MSI1_ProtocolACallbackRegister.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_MSI1_ProtocolACallback(void);

/**
 * @ingroup  sec_coredriver
 * @brief    This is the default callback with weak attribute. The user can 
 *           override and implement the default callback without weak attribute 
 *           or can register a custom callback function using  \ref SEC_CORE1_MSI1_ProtocolBCallbackRegister.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_MSI1_ProtocolBCallback(void);


/**
 * @ingroup    sec_coredriver
 * @brief      This function can be used to override default callback and to define 
 *             custom callback for SEC_CORE1 ReadFIFODataReady event.
 * @param[in]  handler - Address of the callback function.  
 * @return     none
 */
void SEC_CORE1_ReadFIFODataReadyCallbackRegister(void (*handler)(void));

/**
 * @ingroup  sec_coredriver
 * @brief    This is the default callback with weak attribute. The user can 
 *           override and implement the default callback without weak attribute 
 *           or can register a custom callback function using  \ref SEC_CORE1_ReadFIFODataReadyCallbackRegister.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_ReadFIFODataReadyCallback(void);

/**
 * @ingroup    sec_coredriver
 * @brief      This function can be used to override default callback and to define 
 *             custom callback for SEC_CORE1 WriteFIFOEmpty event.
 * @param[in]  handler - Address of the callback function.  
 * @return     none
 */
void SEC_CORE1_WriteFIFOEmptyCallbackRegister(void (*handler)(void));

/**
 * @ingroup  sec_coredriver
 * @brief    This is the default callback with weak attribute. The user can 
 *           override and implement the default callback without weak attribute 
 *           or can register a custom callback function using  \ref SEC_CORE1_WriteFIFOEmptyCallbackRegister.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_WriteFIFOEmptyCallback(void);

/**
 * @ingroup    sec_coredriver
 * @brief      This function can be used to override default callback and to define 
 *             custom callback for SEC_CORE1 FIFOOverFLowUnderFlow event.
 * @param[in]  handler - Address of the callback function.  
 * @return     none
 */
void SEC_CORE1_FIFOOverFLowUnderFlowCallbackRegister(void (*handler)(void));

/**
 * @ingroup  sec_coredriver
 * @brief    This is the default callback with weak attribute. The user can 
 *           override and implement the default callback without weak attribute 
 *           or can register a custom callback function using  \ref SEC_CORE1_FIFOOverFLowUnderFlowCallbackRegister.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_FIFOOverFLowUnderFlowCallback(void);

/**
 * @ingroup    sec_coredriver
 * @brief      This function can be used to override default callback and to define 
 *             custom callback for SEC_CORE1 SecondaryInitiated event.
 * @param[in]  handler - Address of the callback function.  
 * @return     none
 */
void SEC_CORE1_SecondaryInitiatedCallbackRegister(void (*handler)(void));

/**
 * @ingroup  sec_coredriver
 * @brief    This is the default callback with weak attribute. The user can 
 *           override and implement the default callback without weak attribute 
 *           or can register a custom callback function using  \ref SEC_CORE1_SecondaryInitiatedCallbackRegister.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_SecondaryInitiatedCallback(void);

/**
 * @ingroup    sec_coredriver
 * @brief      This function can be used to override default callback and to define 
 *             custom callback for SEC_CORE1 SecondaryReset event.
 * @param[in]  handler - Address of the callback function.  
 * @return     none
 */
void SEC_CORE1_SecondaryResetCallbackRegister(void (*handler)(void));

/**
 * @ingroup  sec_coredriver
 * @brief    This is the default callback with weak attribute. The user can 
 *           override and implement the default callback without weak attribute 
 *           or can register a custom callback function using  \ref SEC_CORE1_SecondaryResetCallbackRegister.
 * @param    none
 * @return   none  
 */
void SEC_CORE1_SecondaryResetCallback(void);

#endif //SEC_CORE1_H
