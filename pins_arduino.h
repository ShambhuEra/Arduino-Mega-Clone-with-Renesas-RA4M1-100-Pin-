#pragma once

#define PIN(X,Y) (X * 16 + Y)  // Ensures unique pin numbering, adjusted for RA4M1 ports

// Pin count
#ifdef __cplusplus
extern "C" unsigned int PINCOUNT_fn();
#endif
#define PINS_COUNT           (PINCOUNT_fn())
#define NUM_DIGITAL_PINS     (70u)
#define NUM_ANALOG_INPUTS    (16u)
#define NUM_ANALOG_OUTPUTS   (1u)

// Analog Pins (A0 - A15) mapped to RA4M1 analog inputs
#define PIN_A0   (54u)  // Maps to RA4M1 pin 100 (AN000)
#define PIN_A1   (55u)  // Maps to RA4M1 pin 99 (AN001)
#define PIN_A2   (56u)  // Maps to RA4M1 pin 98 (AN002)
#define PIN_A3   (57u)  // Maps to RA4M1 pin 97 (AN003)
#define PIN_A4   (58u)  // Maps to RA4M1 pin 96 (AN004)
#define PIN_A5   (59u)  // Maps to RA4M1 pin 91 (AN005)
#define PIN_A6   (60u)  // Maps to RA4M1 pin 90 (AN006)
#define PIN_A7   (61u)  // Maps to RA4M1 pin 87 (AN007)
#define PIN_A8   (62u)  // Maps to RA4M1 pin 86 (AN008)
#define PIN_A9   (63u)  // Maps to RA4M1 pin 85 (AN009, also DAC)
#define PIN_A10  (64u)  // Maps to RA4M1 pin 84 (AN010)
#define PIN_A11  (65u)  // Maps to RA4M1 pin 95 (AN011)
#define PIN_A12  (66u)  // Maps to RA4M1 pin 94 (AN012)
#define PIN_A13  (67u)  // Maps to RA4M1 pin 93 (AN013)
#define PIN_A14  (68u)  // Maps to RA4M1 pin 92 (AN014)
#define PIN_A15  (69u)  // Maps to RA4M1 pin 76 (AN016)

// DAC (Digital-to-Analog Converter)
#define DAC8_HOWMANY   (0)  // No 8-bit DAC
#define DAC12_HOWMANY  (1)  // One 12-bit DAC
#define DAC            PIN_A0   // DAC output mapped to A0, RA4M1 pin 85
#define IS_DAC(x)      (x == DAC ? true : false)
#define DAC_ADDRESS_12_CH0  R_DAC_BASE  // DAC Register Base Address

#undef A0
#undef A1
#undef A2
#undef A3
#undef A4
#undef A5
#undef A6
#undef A7
#undef A8
#undef A9
#undef A10
#undef A11
#undef A12
#undef A13
#undef A14
#undef A15
static const uint8_t A0 = PIN_A0;
static const uint8_t A1 = PIN_A1;
static const uint8_t A2 = PIN_A2;
static const uint8_t A3 = PIN_A3;
static const uint8_t A4 = PIN_A4;
static const uint8_t A5 = PIN_A5;
static const uint8_t A6 = PIN_A6;
static const uint8_t A7 = PIN_A7;
static const uint8_t A8 = PIN_A8;
static const uint8_t A9 = PIN_A9;
static const uint8_t A10 = PIN_A10;
static const uint8_t A11 = PIN_A11;
static const uint8_t A12 = PIN_A12;
static const uint8_t A13 = PIN_A13;
static const uint8_t A14 = PIN_A14;
static const uint8_t A15 = PIN_A15;

// Digital Pins (D0 - D69) mapped to RA4M1 digital I/O pins
#define PIN_D0   (0u)   // Maps to RA4M1 pin 22 (UART1 RX)
#define PIN_D1   (1u)   // Maps to RA4M1 pin 21 (UART1 TX)
#define PIN_D2   (2u)   // Maps to RA4M1 pin 26 (PWM capable)
#define PIN_D3   (3u)   // Maps to RA4M1 pin 27 (PWM capable)
#define PIN_D4   (4u)   // Maps to RA4M1 pin 52 (CAN TX)
#define PIN_D5   (5u)   // Maps to RA4M1 pin 53 (CAN RX)
#define PIN_D6   (6u)   // Maps to RA4M1 pin 28 (PWM capable)
#define PIN_D7   (7u)   // Maps to RA4M1 pin 29 (PWM capable)
#define PIN_D8   (8u)   // Maps to RA4M1 pin 30 (PWM capable)
#define PIN_D9   (9u)   // Maps to RA4M1 pin 31 (PWM capable)
#define PIN_D10  (10u)  // Maps to RA4M1 pin 32 (PWM capable)
#define PIN_D11  (11u)  // Maps to RA4M1 pin 33 (PWM capable)
#define PIN_D12  (12u)  // Maps to RA4M1 pin 34 (PWM capable)
#define PIN_D13  (13u)  // Maps to RA4M1 pin 35 (PWM capable, built-in LED)
#define PIN_D14  (14u)  // Maps to RA4M1 pin 24 (UART4 RX)
#define PIN_D15  (15u)  // Maps to RA4M1 pin 25 (UART4 TX)
#define PIN_D16  (16u)  // Maps to RA4M1 pin 16 (UART3 RX)
#define PIN_D17  (17u)  // Maps to RA4M1 pin 17 (UART3 TX)
#define PIN_D18  (18u)  // Maps to RA4M1 pin 14 (UART2 RX)
#define PIN_D19  (19u)  // Maps to RA4M1 pin 13 (UART2 TX)
#define PIN_D20  (20u)  // Maps to RA4M1 pin 36 (general digital)
#define PIN_D21  (21u)  // Maps to RA4M1 pin 37 (general digital, LED_TX)
#define PIN_D22  (22u)  // Maps to RA4M1 pin 38 (general digital, LED_RX)
#define PIN_D23  (23u)  // Maps to RA4M1 pin 39 (general digital)
#define PIN_D24  (24u)  // Maps to RA4M1 pin 40 (general digital)
#define PIN_D25  (25u)  // Maps to RA4M1 pin 41 (general digital)
#define PIN_D26  (26u)  // Maps to RA4M1 pin 42 (general digital)
#define PIN_D27  (27u)  // Maps to RA4M1 pin 43 (general digital)
#define PIN_D28  (28u)  // Maps to RA4M1 pin 44 (general digital)
#define PIN_D29  (29u)  // Maps to RA4M1 pin 45 (general digital)
#define PIN_D30  (30u)  // Maps to RA4M1 pin 46 (general digital)
#define PIN_D31  (31u)  // Maps to RA4M1 pin 47 (general digital)
#define PIN_D32  (32u)  // Maps to RA4M1 pin 48 (general digital)
#define PIN_D33  (33u)  // Maps to RA4M1 pin 49 (general digital)
#define PIN_D34  (34u)  // Maps to RA4M1 pin 50 (general digital)
#define PIN_D35  (35u)  // Maps to RA4M1 pin 51 (general digital)
#define PIN_D36  (36u)  // Maps to RA4M1 pin 54 (general digital)
#define PIN_D37  (37u)  // Maps to RA4M1 pin 55 (general digital)
#define PIN_D38  (38u)  // Maps to RA4M1 pin 56 (general digital)
#define PIN_D39  (39u)  // Maps to RA4M1 pin 57 (general digital)
#define PIN_D40  (40u)  // Maps to RA4M1 pin 58 (general digital)
#define PIN_D41  (41u)  // Maps to RA4M1 pin 59 (general digital)
#define PIN_D42  (42u)  // Maps to RA4M1 pin 60 (general digital)
#define PIN_D43  (43u)  // Maps to RA4M1 pin 61 (general digital)
#define PIN_D44  (44u)  // Maps to RA4M1 pin 62 (PWM capable)
#define PIN_D45  (45u)  // Maps to RA4M1 pin 63 (PWM capable)
#define PIN_D46  (46u)  // Maps to RA4M1 pin 64 (PWM capable)
#define PIN_D47  (47u)  // Maps to RA4M1 pin 65 (general digital)
#define PIN_D48  (48u)  // Maps to RA4M1 pin 66 (general digital)
#define PIN_D49  (49u)  // Maps to RA4M1 pin 67 (general digital)
#define PIN_D50  (50u)  // Maps to RA4M1 pin 68 (general digital, SPI MISO)
#define PIN_D51  (51u)  // Maps to RA4M1 pin 69 (general digital, SPI MOSI)
#define PIN_D52  (52u)  // Maps to RA4M1 pin 70 (general digital, SPI SCK)
#define PIN_D53  (53u)  // Maps to RA4M1 pin 71 (general digital, SPI CS)
#define PIN_D54  (54u)  // Maps to RA4M1 pin 85 (A0, DAC, analog input)
#define PIN_D55  (55u)  // Maps to RA4M1 pin 84 (A1, analog input)
#define PIN_D56  (56u)  // Maps to RA4M1 pin 83 (A2, analog input)
#define PIN_D57  (57u)  // Maps to RA4M1 pin 82 (A3, analog input)
#define PIN_D58  (58u)  // Maps to RA4M1 pin 81 (A4, analog input)
#define PIN_D59  (59u)  // Maps to RA4M1 pin 80 (A5, analog input)
#define PIN_D60  (60u)  // Maps to RA4M1 pin 79 (A6, analog input)
#define PIN_D61  (61u)  // Maps to RA4M1 pin 78 (A7, analog input)
#define PIN_D62  (62u)  // Maps to RA4M1 pin 77 (A8, analog input)
#define PIN_D63  (63u)  // Maps to RA4M1 pin 76 (A9, analog input)
#define PIN_D64  (64u)  // Maps to RA4M1 pin 75 (A10, analog input)
#define PIN_D65  (65u)  // Maps to RA4M1 pin 74 (A11, analog input)
#define PIN_D66  (66u)  // Maps to RA4M1 pin 73 (A12, analog input)
#define PIN_D67  (67u)  // Maps to RA4M1 pin 72 (A13, analog input)
#define PIN_D68  (68u)  // Maps to RA4M1 pin 71 (A14, analog input)
#define PIN_D69  (69u)  // Maps to RA4M1 pin 70 (A15, analog input)

#undef D0
#undef D1
#undef D2
#undef D3
#undef D4
#undef D5
#undef D6
#undef D7
#undef D8
#undef D9
#undef D10
#undef D11
#undef D12
#undef D13
#undef D14
#undef D15
#undef D16
#undef D17
#undef D18
#undef D19
#undef D20
#undef D21
#undef D22
#undef D23
#undef D24
#undef D25
#undef D26
#undef D27
#undef D28
#undef D29
#undef D30
#undef D31
#undef D32
#undef D33
#undef D34
#undef D35
#undef D36
#undef D37
#undef D38
#undef D39
#undef D40
#undef D41
#undef D42
#undef D43
#undef D44
#undef D45
#undef D46
#undef D47
#undef D48
#undef D49
#undef D50
#undef D51
#undef D52
#undef D53
#undef D54
#undef D55
#undef D56
#undef D57
#undef D58
#undef D59
#undef D60
#undef D61
#undef D62
#undef D63
#undef D64
#undef D65
#undef D66
#undef D67
#undef D68
#undef D69
static const uint8_t D0 = PIN_D0;
static const uint8_t D1 = PIN_D1;
static const uint8_t D2 = PIN_D2;
static const uint8_t D3 = PIN_D3;
static const uint8_t D4 = PIN_D4;
static const uint8_t D5 = PIN_D5;
static const uint8_t D6 = PIN_D6;
static const uint8_t D7 = PIN_D7;
static const uint8_t D8 = PIN_D8;
static const uint8_t D9 = PIN_D9;
static const uint8_t D10 = PIN_D10;
static const uint8_t D11 = PIN_D11;
static const uint8_t D12 = PIN_D12;
static const uint8_t D13 = PIN_D13;
static const uint8_t D14 = PIN_D14;
static const uint8_t D15 = PIN_D15;
static const uint8_t D16 = PIN_D16;
static const uint8_t D17 = PIN_D17;
static const uint8_t D18 = PIN_D18;
static const uint8_t D19 = PIN_D19;
static const uint8_t D20 = PIN_D20;
static const uint8_t D21 = PIN_D21;
static const uint8_t D22 = PIN_D22;
static const uint8_t D23 = PIN_D23;
static const uint8_t D24 = PIN_D24;
static const uint8_t D25 = PIN_D25;
static const uint8_t D26 = PIN_D26;
static const uint8_t D27 = PIN_D27;
static const uint8_t D28 = PIN_D28;
static const uint8_t D29 = PIN_D29;
static const uint8_t D30 = PIN_D30;
static const uint8_t D31 = PIN_D31;
static const uint8_t D32 = PIN_D32;
static const uint8_t D33 = PIN_D33;
static const uint8_t D34 = PIN_D34;
static const uint8_t D35 = PIN_D35;
static const uint8_t D36 = PIN_D36;
static const uint8_t D37 = PIN_D37;
static const uint8_t D38 = PIN_D38;
static const uint8_t D39 = PIN_D39;
static const uint8_t D40 = PIN_D40;
static const uint8_t D41 = PIN_D41;
static const uint8_t D42 = PIN_D42;
static const uint8_t D43 = PIN_D43;
static const uint8_t D44 = PIN_D44;
static const uint8_t D45 = PIN_D45;
static const uint8_t D46 = PIN_D46;
static const uint8_t D47 = PIN_D47;
static const uint8_t D48 = PIN_D48;
static const uint8_t D49 = PIN_D49;
static const uint8_t D50 = PIN_D50;
static const uint8_t D51 = PIN_D51;
static const uint8_t D52 = PIN_D52;
static const uint8_t D53 = PIN_D53;
static const uint8_t D54 = PIN_D54;
static const uint8_t D55 = PIN_D55;
static const uint8_t D56 = PIN_D56;
static const uint8_t D57 = PIN_D57;
static const uint8_t D58 = PIN_D58;
static const uint8_t D59 = PIN_D59;
static const uint8_t D60 = PIN_D60;
static const uint8_t D61 = PIN_D61;
static const uint8_t D62 = PIN_D62;
static const uint8_t D63 = PIN_D63;
static const uint8_t D64 = PIN_D64;
static const uint8_t D65 = PIN_D65;
static const uint8_t D66 = PIN_D66;
static const uint8_t D67 = PIN_D67;
static const uint8_t D68 = PIN_D68;
static const uint8_t D69 = PIN_D69;

// PWM (GPT Timer)
#define digitalPinHasPWM(p) (IS_PIN_PWM(getPinCfgs(p, PIN_CFG_REQ_PWM)[0]))

// LED Pins
#define PIN_LED     (13u)  // Built-in LED, maps to RA4M1 pin 35
#define LED_BUILTIN PIN_LED
#define LED_TX      (21u)  // TX LED, maps to RA4M1 pin 37
#define LED_RX      (22u)  // RX LED, maps to RA4M1 pin 38

// RTC
#define RTC_HOWMANY 1

// UART
#define SERIAL_HOWMANY   4
#define UART1_TX_PIN     1   // Maps to RA4M1 pin 21 (TXD0)
#define UART1_RX_PIN     0   // Maps to RA4M1 pin 22 (RXD0)
#define UART2_TX_PIN     19  // Maps to RA4M1 pin 13 (TXD1)
#define UART2_RX_PIN     18  // Maps to RA4M1 pin 14 (RXD1)
#define UART3_TX_PIN     17  // Maps to RA4M1 pin 17 (TXD2)
#define UART3_RX_PIN     16  // Maps to RA4M1 pin 16 (RXD2)
#define UART4_TX_PIN     15  // Maps to RA4M1 pin 25 (TXD3)
#define UART4_RX_PIN     14  // Maps to RA4M1 pin 24 (RXD3)

// I2C (Wire)
#define WIRE_HOWMANY     1
#define WIRE_SDA_PIN     20  // Maps to RA4M1 pin 2 (SDA0)
#define WIRE_SCL_PIN     21  // Maps to RA4M1 pin 1 (SCL0)

static const uint8_t SDA = WIRE_SDA_PIN;
static const uint8_t SCL = WIRE_SCL_PIN;

// SPI
#define SPI_HOWMANY      1
#define PIN_SPI_MOSI     (51)  // Maps to RA4M1 pin 30 (MOSI alternative)
#define PIN_SPI_MISO     (50)  // Maps to RA4M1 pin 31 (MISO alternative)
#define PIN_SPI_SCK      (52)  // Maps to RA4M1 pin 32 (SCK alternative)
#define PIN_SPI_CS       (53)  // Maps to RA4M1 pin 33 (CS alternative)
#define FORCE_SPI_MODE  (MODE_SPI)

static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;
static const uint8_t CS   = PIN_SPI_CS;
static const uint8_t SS   = PIN_SPI_CS;

// GPT Timers
#define GTP32_HOWMANY     2
#define GTP16_HOWMANY     6
#define GPT_HOWMANY       8

// AGT Timers
#define AGT_HOWMANY       2

// CAN
#define CAN_HOWMANY       1

#define PIN_CAN0_TX       (4)   // Maps to RA4M1 pin 52 (CTX0)
#define PIN_CAN0_RX       (5)   // Maps to RA4M1 pin 53 (CRX0)
#define PIN_CAN0_STBY    (-1)

// External Interrupts
#define EXT_INTERRUPTS_HOWMANY 2

// In pins_arduino.h or equivalent
#define AVCC_MEASURE_PIN 55  // Adjusted to analog pin
#define AVCC_MULTIPLY_FACTOR 8.33

#define AR_INTERNAL_VOLTAGE 1.43f  // Matches RA4M1 spec

// USB
#define USB_VID           (0x2341)
#define USB_PID           (0x0069)
#define USB_NAME          "Mega Rev 4"

#define VUSB_LDO_ENABLE   1

// EEPROM
#define ARDUINO_FLASH_TYPE  LP_FLASH
#define FLASH_BASE_ADDRESS  0x40100000
#define FLASH_TOTAL_SIZE    0x2000
#define FLASH_BLOCK_SIZE    0x400

#ifdef __cplusplus
extern "C" {
#endif
void iic_slave_tei_isr(void);
void iic_slave_eri_isr(void);
#ifdef __cplusplus
}
#endif