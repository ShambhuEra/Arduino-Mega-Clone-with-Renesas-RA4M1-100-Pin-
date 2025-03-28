/*
 * variant.cpp
 *
 * Initialization and pin configuration for Custom RA4M1-based Arduino Mega 2560 Clone
 * Updated: March 27, 2025
 */

 #include "Arduino.h"
 #include "pinmux.inc"
 
 // Additional pin function definitions from your request
 const uint16_t P400_b[] = {  // Pin 52, D4 (PWM, CAN TX adjusted to match pinmux.inc)
     PIN_PWM | CHANNEL_3 | PWM_CHANNEL_B | GPT_ODD_CFG,  // Adjusted from CHANNEL_6 to match D4 in pinmux.inc
     PIN_CAN_TX | CHANNEL_0,                             // Matches existing CAN TX
     PIN_SCL | CHANNEL_0,                                // Added from your request (optional, may conflict)
     PIN_INTERRUPT | CHANNEL_0,                          // Added from your request
     SCI_CHANNEL | PIN_SCK | CHANNEL_0 | SCI_EVEN_CFG | LAST_ITEM_GUARD
 };
 #define P400 P400_b
 
 const uint16_t P408_b[] = {  // Pin 60, D44 (PWM adjusted to match pinmux.inc)
     PIN_PWM | CHANNEL_6 | PWM_CHANNEL_A | GPT_ODD_CFG,  // Adjusted from CHANNEL_5 to match D44 in pinmux.inc
     PIN_INTERRUPT | CHANNEL_7,                          // Added from your request
     SCI_CHANNEL | PIN_CTS_RTS_SS | CHANNEL_1 | SCI_EVEN_CFG,  // Added from your request (optional)
     SCI_CHANNEL | PIN_RX_MISO_SCL | CHANNEL_9 | SCI_ODD_CFG | LAST_ITEM_GUARD
 };
 #define P408 P408_b
 
 const uint16_t P014_b[] = {  // Pin 10 (intended for DAC, adjusted for your clone)
     PIN_DAC | CHANNEL_0,                                // DAC, originally for A0 or similar
     PIN_ANALOG | CHANNEL_9 | LAST_ITEM_GUARD            // Analog channel 9
 };
 #define P014 P014_b
 
 // Pin configuration array for Mega 2560 clone with 15 PWM pins
 extern "C" const PinMuxCfg_t g_pin_cfg[] = {
     // Digital Pins (0-53)
     { BSP_IO_PORT_01_PIN_05,    P105   }, /* (0)  D0  - UART1 RX */
     { BSP_IO_PORT_01_PIN_04,    P104   }, /* (1)  D1  - UART1 TX */
     { BSP_IO_PORT_02_PIN_00,    P200   }, /* (2)  D2~ - PWM */
     { BSP_IO_PORT_02_PIN_01,    P201   }, /* (3)  D3~ - PWM */
     { BSP_IO_PORT_04_PIN_00,    P400   }, /* (4)  D4~ - PWM, CAN TX (using P400_b) */
     { BSP_IO_PORT_04_PIN_01,    P401   }, /* (5)  D5~ - PWM, CAN RX */
     { BSP_IO_PORT_02_PIN_02,    P202   }, /* (6)  D6~ - PWM */
     { BSP_IO_PORT_02_PIN_03,    P203   }, /* (7)  D7~ - PWM */
     { BSP_IO_PORT_02_PIN_04,    P204   }, /* (8)  D8~ - PWM */
     { BSP_IO_PORT_02_PIN_05,    P205   }, /* (9)  D9~ - PWM */
     { BSP_IO_PORT_02_PIN_06,    P206   }, /* (10) D10~ - PWM, SPI CS */
     { BSP_IO_PORT_05_PIN_01,    P501   }, /* (11) D11~ - PWM, SPI MOSI */
     { BSP_IO_PORT_05_PIN_00,    P500   }, /* (12) D12~ - PWM, SPI MISO */
     { BSP_IO_PORT_05_PIN_02,    P502   }, /* (13) D13~ - PWM, SPI SCK, LED */
     { BSP_IO_PORT_01_PIN_06,    P106   }, /* (14) D14 - UART2 TX */
     { BSP_IO_PORT_01_PIN_07,    P107   }, /* (15) D15 - UART2 RX */
     { BSP_IO_PORT_01_PIN_02,    P102   }, /* (16) D16 - UART3 RX */
     { BSP_IO_PORT_01_PIN_03,    P103   }, /* (17) D17 - UART3 TX */
     { BSP_IO_PORT_01_PIN_01,    P101   }, /* (18) D18 - UART4 RX */
     { BSP_IO_PORT_01_PIN_00,    P100   }, /* (19) D19 - UART4 TX */
     { BSP_IO_PORT_00_PIN_01,    P001   }, /* (20) D20 - I2C SDA */
     { BSP_IO_PORT_00_PIN_00,    P000   }, /* (21) D21 - I2C SCL */
     { BSP_IO_PORT_02_PIN_10,    P210   }, /* (22) D22 */
     { BSP_IO_PORT_02_PIN_11,    P211   }, /* (23) D23 */
     { BSP_IO_PORT_03_PIN_00,    P300   }, /* (24) D24 */
     { BSP_IO_PORT_03_PIN_01,    P301   }, /* (25) D25 */
     { BSP_IO_PORT_03_PIN_02,    P302   }, /* (26) D26 */
     { BSP_IO_PORT_03_PIN_03,    P303   }, /* (27) D27 */
     { BSP_IO_PORT_03_PIN_04,    P304   }, /* (28) D28 */
     { BSP_IO_PORT_03_PIN_05,    P305   }, /* (29) D29 */
     { BSP_IO_PORT_03_PIN_06,    P306   }, /* (30) D30 */
     { BSP_IO_PORT_03_PIN_07,    P307   }, /* (31) D31 */
     { BSP_IO_PORT_03_PIN_08,    P308   }, /* (32) D32 */
     { BSP_IO_PORT_03_PIN_09,    P309   }, /* (33) D33 */
     { BSP_IO_PORT_03_PIN_10,    P310   }, /* (34) D34 */
     { BSP_IO_PORT_03_PIN_11,    P311   }, /* (35) D35 */
     { BSP_IO_PORT_03_PIN_12,    P312   }, /* (36) D36 */
     { BSP_IO_PORT_03_PIN_13,    P313   }, /* (37) D37 */
     { BSP_IO_PORT_04_PIN_02,    P402   }, /* (38) D38 */
     { BSP_IO_PORT_04_PIN_03,    P403   }, /* (39) D39 */
     { BSP_IO_PORT_04_PIN_04,    P404   }, /* (40) D40 */
     { BSP_IO_PORT_04_PIN_05,    P405   }, /* (41) D41 */
     { BSP_IO_PORT_04_PIN_06,    P406   }, /* (42) D42 */
     { BSP_IO_PORT_04_PIN_07,    P407   }, /* (43) D43 */
     { BSP_IO_PORT_04_PIN_08,    P408   }, /* (44) D44~ - PWM (using P408_b) */
     { BSP_IO_PORT_04_PIN_09,    P409   }, /* (45) D45~ - PWM */
     { BSP_IO_PORT_04_PIN_10,    P410   }, /* (46) D46~ - PWM */
     { BSP_IO_PORT_04_PIN_11,    P411   }, /* (47) D47 */
     { BSP_IO_PORT_04_PIN_12,    P412   }, /* (48) D48 */
     { BSP_IO_PORT_04_PIN_13,    P413   }, /* (49) D49 */
     { BSP_IO_PORT_05_PIN_00,    P500   }, /* (50) D50 - SPI MISO (redundant) */
     { BSP_IO_PORT_05_PIN_01,    P501   }, /* (51) D51 - SPI MOSI (redundant) */
     { BSP_IO_PORT_05_PIN_02,    P502   }, /* (52) D52 - SPI SCK (redundant) */
     { BSP_IO_PORT_05_PIN_03,    P503   }, /* (53) D53 - SPI CS (redundant) */
 
     // Analog Pins (54-69)
     { BSP_IO_PORT_09_PIN_14,    P914   }, /* (54) A0 */
     { BSP_IO_PORT_09_PIN_13,    P913   }, /* (55) A1 - AVCC Measure */
     { BSP_IO_PORT_09_PIN_12,    P912   }, /* (56) A2 */
     { BSP_IO_PORT_09_PIN_11,    P911   }, /* (57) A3 */
     { BSP_IO_PORT_09_PIN_10,    P910   }, /* (58) A4 */
     { BSP_IO_PORT_09_PIN_05,    P905   }, /* (59) A5 */
     { BSP_IO_PORT_09_PIN_04,    P904   }, /* (60) A6 */
     { BSP_IO_PORT_09_PIN_03,    P903   }, /* (61) A7 */
     { BSP_IO_PORT_09_PIN_02,    P902   }, /* (62) A8 */
     { BSP_IO_PORT_09_PIN_01,    P901   }, /* (63) A9 - DAC */
     { BSP_IO_PORT_09_PIN_00,    P900   }, /* (64) A10 */
     { BSP_IO_PORT_09_PIN_09,    P909   }, /* (65) A11 */
     { BSP_IO_PORT_09_PIN_08,    P908   }, /* (66) A12 */
     { BSP_IO_PORT_09_PIN_07,    P907   }, /* (67) A13 */
     { BSP_IO_PORT_09_PIN_06,    P906   }, /* (68) A14 */
     { BSP_IO_PORT_06_PIN_00,    P600   }, /* (69) A15 */
 
     // Additional Pins
     { BSP_IO_PORT_00_PIN_12,    P012   }, /* (70) TX LED */
     { BSP_IO_PORT_00_PIN_13,    P013   }, /* (71) RX LED */
     { BSP_IO_PORT_00_PIN_14,    P014   }, /* (72) Extra pin for P014_b (e.g., DAC) */
 };
 
 extern "C" {
     unsigned int PINCOUNT_fn() {
         return (sizeof(g_pin_cfg) / sizeof(g_pin_cfg[0]));
     }
 }
 
 int32_t getPinIndex(bsp_io_port_pin_t p) {
     int max_index = PINS_COUNT;
     int rv = -1;
     for (int i = 0; i < max_index; i++) {
         if (g_pin_cfg[i].pin == p) {
             rv = i;
             break;
         }
     }
     return rv;
 }
 
 #include "FspTimer.h"
 
 // Enable USB voltage regulator post-initialization (R4-like)
 void usb_post_initialization() {
     ((R_USB_FS0_Type*)R_USB_FS0_BASE)->USBMC_b.VDCEN = 1;
 }
 
 // Enable subclock input pins (optional, kept for RA4M1 compatibility)
 void enableSubclockInputPins() {
     R_BSP_RegisterProtectDisable(BSP_REG_PROTECT_CGC);
     R_SYSTEM->SOSCCR_b.SOSTP = 1;
     R_BSP_RegisterProtectEnable(BSP_REG_PROTECT_CGC);
 }
 
 // Board-specific initialization
 void initVariant() {
     // Configure LED_BUILTIN (D13) as output and turn off to avoid spurious signals
     pinMode(LED_BUILTIN, OUTPUT);
     digitalWrite(LED_BUILTIN, LOW);
 
     // Configure TX and RX LEDs
     pinMode(LED_TX, OUTPUT);
     digitalWrite(LED_TX, LOW);
     pinMode(LED_RX, OUTPUT);
     digitalWrite(LED_RX, LOW);
 
     // Initialize PWM channels for Mega 2560’s 15 PWM pins
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(2, PIN_CFG_REQ_PWM)[0]));  // D2
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(3, PIN_CFG_REQ_PWM)[0]));  // D3
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(4, PIN_CFG_REQ_PWM)[0]));  // D4
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(5, PIN_CFG_REQ_PWM)[0]));  // D5
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(6, PIN_CFG_REQ_PWM)[0]));  // D6
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(7, PIN_CFG_REQ_PWM)[0]));  // D7
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(8, PIN_CFG_REQ_PWM)[0]));  // D8
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(9, PIN_CFG_REQ_PWM)[0]));  // D9
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(10, PIN_CFG_REQ_PWM)[0])); // D10
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(11, PIN_CFG_REQ_PWM)[0])); // D11
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(12, PIN_CFG_REQ_PWM)[0])); // D12
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(13, PIN_CFG_REQ_PWM)[0])); // D13
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(44, PIN_CFG_REQ_PWM)[0])); // D44
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(45, PIN_CFG_REQ_PWM)[0])); // D45
     FspTimer::set_initial_timer_channel_as_pwm(GPT_TIMER, GET_CHANNEL(getPinCfgs(46, PIN_CFG_REQ_PWM)[0])); // D46
 }