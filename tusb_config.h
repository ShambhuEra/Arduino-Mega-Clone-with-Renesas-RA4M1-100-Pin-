/*
 * tusb_config.h
 *
 * Configuration for TinyUSB on Custom RA4M1-based Arduino Mega 2560 Clone
 * Updated: March 27, 2025
 */

 #ifndef TUSB_CONFIG_H_
 #define TUSB_CONFIG_H_
 
 #ifdef __cplusplus
 extern "C" {
 #endif
 
 // RHPort number, set to 0 (RA4M1 USB)
 #ifndef BOARD_TUD_RHPORT
 #define BOARD_TUD_RHPORT      0
 #endif
 
 // RHPort mode as USB Device
 #define CFG_TUSB_RHPORT0_MODE   (OPT_MODE_DEVICE)
 
 // Max speed set to Full-Speed (12 Mbps), matching R4
 #ifndef BOARD_TUD_MAX_SPEED
 #define BOARD_TUD_MAX_SPEED   OPT_MODE_DEFAULT_SPEED
 #endif
 
 //--------------------------------------------------------------------
 // COMMON CONFIGURATION
 //--------------------------------------------------------------------
 
 // MCU for RA4M1
 #ifndef CFG_TUSB_MCU
 #error CFG_TUSB_MCU must be defined
 #endif
 
 // No OS, Arduino bare-metal
 #ifndef CFG_TUSB_OS
 #define CFG_TUSB_OS           OPT_OS_NONE
 #endif
 
 // Debug level
 #ifndef CFG_TUSB_DEBUG
 #define CFG_TUSB_DEBUG        0
 #endif
 
 // Enable Device stack
 #define CFG_TUD_ENABLED       1
 
 // Max speed set to Full-Speed
 #define CFG_TUD_MAX_SPEED     BOARD_TUD_MAX_SPEED
 
 // Memory alignment for RA4M1 USB DMA
 #ifndef CFG_TUSB_MEM_SECTION
 #define CFG_TUSB_MEM_SECTION
 #endif
 
 #ifndef CFG_TUSB_MEM_ALIGN
 #define CFG_TUSB_MEM_ALIGN    __attribute__ ((aligned(4)))
 #endif
 
 //--------------------------------------------------------------------
 // DEVICE CONFIGURATION
 //--------------------------------------------------------------------
 
 // Endpoint 0 size
 #ifndef CFG_TUD_ENDPOINT0_SIZE
 #define CFG_TUD_ENDPOINT0_SIZE    64
 #endif
 
 #ifndef CFG_TUD_ENDPOINT0_SIZE
 #define CFG_TUD_ENDPOINT0_SIZE    64
 #endif

 //------------- CLASS -------------//
 #define CFG_TUD_CDC              1   // Serial, R4-like
 #define CFG_TUD_MSC              0   // No Mass Storage
 #define CFG_TUD_HID              1   // HID, R4-like
 #define CFG_TUD_MIDI             0   // No MIDI
 #define CFG_TUD_VENDOR           0   // No Vendor class
 #define CFG_TUD_DFU_RUNTIME      1   // DFU runtime, R4-like
 
 // CDC FIFO sizes (Full-Speed, matching R4)
 #define CFG_TUD_CDC_RX_BUFSIZE   ((TUD_OPT_HIGH_SPEED ? 512 : 64) * 4)
 #define CFG_TUD_CDC_TX_BUFSIZE   ((TUD_OPT_HIGH_SPEED ? 512 : 64) * 4)
 
// CDC Endpoint transfer buffer size, more is faster
#define CFG_TUD_CDC_EP_BUFSIZE   (TUD_OPT_HIGH_SPEED ? 512 : 64)
 
 // MSC Buffer size (unused)
 #define CFG_TUD_MSC_EP_BUFSIZE   512
 
 #ifdef __cplusplus
 }
 #endif
 
 #endif /* TUSB_CONFIG_H_ */