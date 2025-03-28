/* generated configuration header file - do not edit */
#ifndef BSP_PIN_CFG_H_
#define BSP_PIN_CFG_H_
#include "r_ioport.h"

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

/* Digital Pins (D0-D53) */
#define D0  (BSP_IO_PORT_01_PIN_05)  /* UART1 RX */
#define D1  (BSP_IO_PORT_01_PIN_04)  /* UART1 TX */
#define D2  (BSP_IO_PORT_02_PIN_00)  /* PWM */
#define D3  (BSP_IO_PORT_02_PIN_01)  /* PWM */
#define D4  (BSP_IO_PORT_04_PIN_00)  /* CAN TX, PWM */
#define D5  (BSP_IO_PORT_04_PIN_01)  /* CAN RX, PWM */
#define D6  (BSP_IO_PORT_02_PIN_02)  /* PWM */
#define D7  (BSP_IO_PORT_02_PIN_03)  /* PWM */
#define D8  (BSP_IO_PORT_02_PIN_04)  /* PWM */
#define D9  (BSP_IO_PORT_02_PIN_05)  /* PWM */
#define D10 (BSP_IO_PORT_02_PIN_06)  /* SPI CS, PWM */
#define D11 (BSP_IO_PORT_05_PIN_01)  /* SPI MOSI, PWM */
#define D12 (BSP_IO_PORT_05_PIN_00)  /* SPI MISO, PWM */
#define D13 (BSP_IO_PORT_05_PIN_02)  /* SPI SCK, PWM */
#define D14 (BSP_IO_PORT_01_PIN_06)  /* UART2 TX */
#define D15 (BSP_IO_PORT_01_PIN_07)  /* UART2 RX */
#define D16 (BSP_IO_PORT_01_PIN_02)  /* UART3 RX */
#define D17 (BSP_IO_PORT_01_PIN_03)  /* UART3 TX */
#define D18 (BSP_IO_PORT_01_PIN_01)  /* UART4 RX */
#define D19 (BSP_IO_PORT_01_PIN_00)  /* UART4 TX */
#define D20 (BSP_IO_PORT_00_PIN_01)  /* I2C SDA */
#define D21 (BSP_IO_PORT_00_PIN_00)  /* I2C SCL */
#define D22 (BSP_IO_PORT_03_PIN_00)
#define D23 (BSP_IO_PORT_03_PIN_01)
#define D24 (BSP_IO_PORT_03_PIN_02)
#define D25 (BSP_IO_PORT_03_PIN_03)
#define D26 (BSP_IO_PORT_03_PIN_04)
#define D27 (BSP_IO_PORT_03_PIN_05)
#define D28 (BSP_IO_PORT_03_PIN_06)
#define D29 (BSP_IO_PORT_03_PIN_07)
#define D30 (BSP_IO_PORT_03_PIN_08)
#define D31 (BSP_IO_PORT_03_PIN_09)
#define D32 (BSP_IO_PORT_03_PIN_10)
#define D33 (BSP_IO_PORT_03_PIN_11)
#define D34 (BSP_IO_PORT_03_PIN_12)
#define D35 (BSP_IO_PORT_03_PIN_13)
#define D36 (BSP_IO_PORT_03_PIN_14)
#define D37 (BSP_IO_PORT_03_PIN_15)
#define D38 (BSP_IO_PORT_04_PIN_02)
#define D39 (BSP_IO_PORT_04_PIN_03)
#define D40 (BSP_IO_PORT_04_PIN_04)
#define D41 (BSP_IO_PORT_04_PIN_05)
#define D42 (BSP_IO_PORT_04_PIN_06)
#define D43 (BSP_IO_PORT_04_PIN_07)
#define D44 (BSP_IO_PORT_04_PIN_08)  /* PWM */
#define D45 (BSP_IO_PORT_04_PIN_09)  /* PWM */
#define D46 (BSP_IO_PORT_04_PIN_10)  /* PWM */
#define D47 (BSP_IO_PORT_04_PIN_11)
#define D48 (BSP_IO_PORT_04_PIN_12)
#define D49 (BSP_IO_PORT_04_PIN_13)
#define D50 (BSP_IO_PORT_04_PIN_14)
#define D51 (BSP_IO_PORT_04_PIN_15)
#define D52 (BSP_IO_PORT_05_PIN_03)
#define D53 (BSP_IO_PORT_05_PIN_04)

/* Analog Pins (A0-A15) */
#define A0  (BSP_IO_PORT_09_PIN_14)
#define A1  (BSP_IO_PORT_09_PIN_13)
#define A2  (BSP_IO_PORT_09_PIN_12)
#define A3  (BSP_IO_PORT_09_PIN_11)
#define A4  (BSP_IO_PORT_09_PIN_10)
#define A5  (BSP_IO_PORT_09_PIN_09)
#define A6  (BSP_IO_PORT_09_PIN_08)
#define A7  (BSP_IO_PORT_09_PIN_07)
#define A8  (BSP_IO_PORT_09_PIN_06)
#define A9  (BSP_IO_PORT_09_PIN_01)  /* DAC */
#define A10 (BSP_IO_PORT_09_PIN_00)
#define A11 (BSP_IO_PORT_06_PIN_00)
#define A12 (BSP_IO_PORT_06_PIN_01)
#define A13 (BSP_IO_PORT_06_PIN_02)
#define A14 (BSP_IO_PORT_06_PIN_03)
#define A15 (BSP_IO_PORT_06_PIN_04)

/* USB Pins (Assuming defaults for RA4M1) */
#define USB_DM   (BSP_IO_PORT_04_PIN_11)  /* USB D- */
#define USB_DP   (BSP_IO_PORT_04_PIN_12)  /* USB D+ */
#define USB_VBUS (BSP_IO_PORT_04_PIN_07)  /* USB VBUS */

/* External Configuration */
extern const ioport_cfg_t g_bsp_pin_cfg; /* Custom Mega 2560 clone pincfg */

void BSP_PinConfigSecurityInit();

/* Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER

#endif /* BSP_PIN_CFG_H_ */