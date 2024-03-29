/*******************************************************************************
  MPLAB Harmony Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app.h

  Summary:
    This header file provides prototypes and definitions for the application.

  Description:
    This header file provides function prototypes and data type definitions for
    the application.  Some of these are required by the system (such as the
    "APP_Initialize" and "APP_Tasks" prototypes) and some of them are only used
    internally by the application (such as the "APP_STATES" definition).  Both
    are defined here for convenience.
*******************************************************************************/

#ifndef _APP_H
#define _APP_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "configuration.h"
#include "definitions.h"

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************
#define APP_READ_BUFFER_SIZE                                512
#define APP_CDC_BUFFER_SIZE                                 256
#define APP_USB_SWITCH_DEBOUNCE_COUNT_FS                    150
#define APP_USB_SWITCH_DEBOUNCE_COUNT_HS                    1200

#define PAGE_SIZE                  (256U)
#define SECTOR_SIZE                (4096U)

/* Erase, Write and Read 80KBytes of memory */
#define SECTORS_TO_EWR             (20U)

/* Erase 80KBytes (81920 Bytes) of memory */
#define ERASE_BUFFER_SIZE          (SECTOR_SIZE * SECTORS_TO_EWR)

/* For example, BUFFER_SIZE <= ERASE_BUFFER_SIZE,
 * case 1 - BUFFER_SIZE < ERASE_BUFFER_SIZE, Read and Write 81667 (81920 - 256 + 3) Bytes of memory (Default)
 * case 2 - BUFFER_SIZE = ERASE_BUFFER_SIZE, Read and Write 81920 Bytes of memory. Below macro need be defined as #define BUFFER_SIZE    ERASE_BUFFER_SIZE
 */
#define BUFFER_SIZE                (ERASE_BUFFER_SIZE - PAGE_SIZE + 3U)

#define SIZE_GET(size, align)      (size + ((size % align)? (align - (size % align)) : 0))

#define READ_BUFFER_SIZE           SIZE_GET(BUFFER_SIZE, CACHE_LINE_SIZE)

#define WRITE_BUFFER_SIZE          SIZE_GET(BUFFER_SIZE, PAGE_SIZE)

#define MEM_START_ADDRESS          (0x0U)

#define SST26VF032B_JEDEC_ID       (0x004326BFUL)//(0xBF4326BFUL)

#define BUFF_DESC_NUMBER           (BUFFER_SIZE / PAGE_SIZE)

#define CMD_DESC_NUMBER             5

#define DUMMY_BYTE                  0x0
#define SUCCESS_LED_ON              LED2_On
#define SUCCESS_LED_OFF             LED2_Off
#define SUCCESS_LED_TOGGLE          LED2_Toggle

#define ERR_LED_ON                  LED1_On
#define ERR_LED_OFF                 LED1_Off
#define ERR_LED_TOGGLE              LED1_Toggle
#define SWITCH_PRESSED              (bool)!SW2_Get()
#define CLOCK_TICK_TIMER_PERIOD_MS 30
// *****************************************************************************
/* Application states

  Summary:
    Application states enumeration

  Description:
    This enumeration defines the valid application states.  These states
    determine the behavior of the application at various times.
*/

typedef enum
{
    /* Application's initial states */
    APP_STATE_INIT=0,
    APP_STATE_WAIT_FOR_CONFIGURATION,
    APP_STATE_QSPI_RESET,
    APP_STATE_QSPI_ENABLE_QUADIO,
    APP_STATE_QSPI_UNLOCK,
    APP_STATE_QSPI_READ_JEDECID,
    
    APP_STATE_IDLE,
    
    /* APP USB Download */
    APP_STATE_USB_START_DOWNLOAD,
    APP_STATE_USB_PREP_DOWNLOAD,
    APP_STATE_USB_DOWNLOAD,
    APP_STATE_USB_DOWNLOAD_WAIT,

    /* APP QSPI Program */
    APP_STATE_QSPI_ERASE,
    APP_STATE_QSPI_ERASE_WAIT,
    APP_STATE_QSPI_WRITE,
    APP_STATE_QSPI_WRITE_WAIT,
    APP_STATE_QSPI_READ,
    APP_STATE_QSPI_VERIFY,
    APP_STATE_QSPI_FINAL_WRITE,


    APP_STATE_CHECK_SWITCH_PRESSED,
    APP_STATE_SCHEDULE_READ,
    APP_STATE_WAIT_FOR_READ_COMPLETE,
    APP_STATE_SCHEDULE_WRITE,
    APP_STATE_WAIT_FOR_WRITE_COMPLETE,
    APP_STATE_ERROR

} APP_STATES;

typedef enum 
{
    APP_IMGFLASH_EVENT_NONE,
    APP_IMGFLASH_EVENT_START_FLASH,
    APP_IMGFLASH_EVENT_EXIT,
} APP_IMGFLASH_EVENT;

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    Application strings and buffers are be defined outside this structure.
 */

typedef struct
{
    /* Application transfer status */

    /* Jedec-ID*/
    uint32_t jedec_id;

    /* Read Buffer */
    CACHE_ALIGN uint8_t readBuffer[ERASE_BUFFER_SIZE] ;

    /* Write Buffer*/
    CACHE_ALIGN uint8_t writeBuffer[ERASE_BUFFER_SIZE] ;
    
    volatile uint32_t writeOffset;
        
} APP_QSPI_DATA;

typedef struct
{
    USB_DEVICE_HANDLE deviceHandle;
    APP_STATES state;
    USB_CDC_LINE_CODING setLineCodingData;
    bool isConfigured;
    USB_CDC_LINE_CODING getLineCodingData;
    USB_CDC_CONTROL_LINE_STATE controlLineStateData;
    USB_DEVICE_CDC_TRANSFER_HANDLE readTransferHandle;
    USB_DEVICE_CDC_TRANSFER_HANDLE writeTransferHandle;
    bool isReadComplete;
    bool isWriteComplete;
    bool isSwitchPressed;
    bool ignoreSwitchPress;
    bool sofEventHasOccurred;
    uint16_t breakData;
    unsigned int switchDebounceTimer;
    unsigned int debounceCount;
    uint8_t * cdcReadBuffer;
    uint8_t * cdcWriteBuffer;
    volatile uint32_t numBytesRead;
    uint32_t bytesToRead;

    APP_IMGFLASH_EVENT event;
    volatile uint32_t totalBytesRead;
    volatile uint32_t totalBytesWrite;
    uint32_t totalBytesCopied;
    
} APP_DATA;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
// *****************************************************************************
// *****************************************************************************
/* These routines are called by drivers when certain events occur.
*/
void APP_StartDownload (void);
void APP_StopDownload (void);

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Summary:
     MPLAB Harmony application initialization routine.

  Description:
    This function initializes the Harmony application.  It places the
    application in its initial state and prepares it to run so that its
    APP_Tasks function can be called.

  Precondition:
    All other system initialization routines should be called before calling
    this routine (in "SYS_Initialize").

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Initialize();
    </code>

  Remarks:
    This routine must be called from the SYS_Initialize function.
*/

void APP_Initialize ( void );


/*******************************************************************************
  Function:
    void APP_Tasks ( void )

  Summary:
    MPLAB Harmony Demo application tasks function

  Description:
    This routine is the Harmony Demo application's tasks function.  It
    defines the application's state machine and core logic.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Tasks();
    </code>

  Remarks:
    This routine must be called from SYS_Tasks() routine.
 */

void APP_Tasks( void );

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* _APP_H */

/*******************************************************************************
 End of File
 */

