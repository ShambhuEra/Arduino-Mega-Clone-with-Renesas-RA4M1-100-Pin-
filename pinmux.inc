// pinmux.inc for Custom RA4M1-based Arduino Mega 2560 Clone

// Port P0 (pins 1-11)
const uint16_t P000[] = {  // Pin 1, D21 (SCL)
    PIN_SCL | CHANNEL_0,
    LAST_ITEM_GUARD
};

const uint16_t P001[] = {  // Pin 2, D20 (SDA)
    PIN_SDA | CHANNEL_0,
    LAST_ITEM_GUARD
};

const uint16_t P002[] = {  // Pin 3
    PIN_ANALOG | CHANNEL_2,
    PIN_INTERRUPT | CHANNEL_2,
    LAST_ITEM_GUARD
};

const uint16_t P003[] = {  // Pin 4
    PIN_ANALOG | CHANNEL_3,
    LAST_ITEM_GUARD
};

const uint16_t P004[] = {  // Pin 5
    PIN_ANALOG | CHANNEL_4,
    PIN_INTERRUPT | CHANNEL_3,
    LAST_ITEM_GUARD
};

const uint16_t P010[] = {  // Pin 6
    PIN_ANALOG | CHANNEL_5,
    LAST_ITEM_GUARD
};

const uint16_t P011[] = {  // Pin 7
    PIN_ANALOG | CHANNEL_6,
    PIN_INTERRUPT | CHANNEL_15,
    LAST_ITEM_GUARD
};

const uint16_t P012[] = {  // Pin 8
    PIN_ANALOG | CHANNEL_7,
    LAST_ITEM_GUARD
};

const uint16_t P013[] = {  // Pin 9
    PIN_ANALOG | CHANNEL_8,
    LAST_ITEM_GUARD
};

const uint16_t P014[] = {  // Pin 10
    PIN_ANALOG | CHANNEL_9,
    LAST_ITEM_GUARD
};

const uint16_t P015[] = {  // Pin 11
    PIN_ANALOG | CHANNEL_10,
    PIN_INTERRUPT | CHANNEL_7,
    LAST_ITEM_GUARD
};

// Port P1 (pins 13-25)
const uint16_t P100[] = {  // Pin 13, D19 (UART4 TX)
    SCI_CHANNEL | PIN_TX_MOSI_SDA | CHANNEL_9 | SCI_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P101[] = {  // Pin 14, D18 (UART4 RX)
    SCI_CHANNEL | PIN_RX_MISO_SCL | CHANNEL_9 | SCI_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P102[] = {  // Pin 16, D16 (UART3 RX)
    SCI_CHANNEL | PIN_RX_MISO_SCL | CHANNEL_2 | SCI_EVEN_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P103[] = {  // Pin 17, D17 (UART3 TX)
    SCI_CHANNEL | PIN_TX_MOSI_SDA | CHANNEL_2 | SCI_EVEN_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P104[] = {  // Pin 21, D1 (UART1 TX)
    SCI_CHANNEL | PIN_TX_MOSI_SDA | CHANNEL_0 | SCI_EVEN_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P105[] = {  // Pin 22, D0 (UART1 RX)
    SCI_CHANNEL | PIN_RX_MISO_SCL | CHANNEL_0 | SCI_EVEN_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P106[] = {  // Pin 24, D14 (UART2 TX)
    SCI_CHANNEL | PIN_TX_MOSI_SDA | CHANNEL_1 | SCI_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P107[] = {  // Pin 25, D15 (UART2 RX)
    SCI_CHANNEL | PIN_RX_MISO_SCL | CHANNEL_1 | SCI_ODD_CFG,
    LAST_ITEM_GUARD
};

// Port P2 (pins 26-37)
const uint16_t P200[] = {  // Pin 26, D2 (PWM)
    PIN_PWM | CHANNEL_0 | PWM_CHANNEL_A | GPT_ODD_CFG,
    PIN_INTERRUPT | CHANNEL_0,
    LAST_ITEM_GUARD
};

const uint16_t P201[] = {  // Pin 27, D3 (PWM)
    PIN_PWM | CHANNEL_0 | PWM_CHANNEL_B | GPT_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P202[] = {  // Pin 28, D6 (PWM)
    PIN_PWM | CHANNEL_1 | PWM_CHANNEL_A | GPT_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P203[] = {  // Pin 29, D7 (PWM)
    PIN_PWM | CHANNEL_1 | PWM_CHANNEL_B | GPT_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P204[] = {  // Pin 30, D8 (PWM)
    PIN_PWM | CHANNEL_2 | PWM_CHANNEL_A | GPT_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P205[] = {  // Pin 31, D9 (PWM)
    PIN_PWM | CHANNEL_2 | PWM_CHANNEL_B | GPT_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P206[] = {  // Pin 32, D10 (PWM, SPI CS)
    PIN_PWM | CHANNEL_3 | PWM_CHANNEL_A | GPT_ODD_CFG,
    PIN_INTERRUPT | CHANNEL_2,
    LAST_ITEM_GUARD
};

const uint16_t P207[] = {  // Pin 33
    LAST_ITEM_GUARD
};

const uint16_t P208[] = {  // Pin 34
    LAST_ITEM_GUARD
};

const uint16_t P209[] = {  // Pin 35
    LAST_ITEM_GUARD
};

const uint16_t P210[] = {  // Pin 36, D22
    LAST_ITEM_GUARD
};

const uint16_t P211[] = {  // Pin 37, D23
    LAST_ITEM_GUARD
};

// Port P3 (pins 38-51)
const uint16_t P300[] = {  // Pin 38, D24
    LAST_ITEM_GUARD
};

const uint16_t P301[] = {  // Pin 39, D25
    LAST_ITEM_GUARD
};

const uint16_t P302[] = {  // Pin 40, D26
    LAST_ITEM_GUARD
};

const uint16_t P303[] = {  // Pin 41, D27
    LAST_ITEM_GUARD
};

const uint16_t P304[] = {  // Pin 42, D28
    LAST_ITEM_GUARD
};

const uint16_t P305[] = {  // Pin 43, D29
    LAST_ITEM_GUARD
};

const uint16_t P306[] = {  // Pin 44, D30
    LAST_ITEM_GUARD
};

const uint16_t P307[] = {  // Pin 45, D31
    LAST_ITEM_GUARD
};

const uint16_t P308[] = {  // Pin 46, D32
    LAST_ITEM_GUARD
};

const uint16_t P309[] = {  // Pin 47, D33
    LAST_ITEM_GUARD
};

const uint16_t P310[] = {  // Pin 48, D34
    LAST_ITEM_GUARD
};

const uint16_t P311[] = {  // Pin 49, D35
    LAST_ITEM_GUARD
};

const uint16_t P312[] = {  // Pin 50, D36
    LAST_ITEM_GUARD
};

const uint16_t P313[] = {  // Pin 51, D37
    LAST_ITEM_GUARD
};

// Port P4 (pins 52-65)
const uint16_t P400[] = {  // Pin 52, D4 (PWM, CAN TX)
    PIN_PWM | CHANNEL_3 | PWM_CHANNEL_B | GPT_ODD_CFG,
    PIN_CAN_TX | CHANNEL_0,
    LAST_ITEM_GUARD
};

const uint16_t P401[] = {  // Pin 53, D5 (PWM, CAN RX)
    PIN_PWM | CHANNEL_4 | PWM_CHANNEL_A | GPT_ODD_CFG,
    PIN_CAN_RX | CHANNEL_0,
    LAST_ITEM_GUARD
};

const uint16_t P402[] = {  // Pin 54, D38
    LAST_ITEM_GUARD
};

const uint16_t P403[] = {  // Pin 55, D39 (not PWM, reserved for Mega compatibility)
    LAST_ITEM_GUARD
};

const uint16_t P404[] = {  // Pin 56, D40
    LAST_ITEM_GUARD
};

const uint16_t P405[] = {  // Pin 57, D41
    LAST_ITEM_GUARD
};

const uint16_t P406[] = {  // Pin 58, D42
    LAST_ITEM_GUARD
};

const uint16_t P407[] = {  // Pin 59, D43
    LAST_ITEM_GUARD
};

const uint16_t P408[] = {  // Pin 60, D44 (PWM)
    PIN_PWM | CHANNEL_6 | PWM_CHANNEL_A | GPT_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P409[] = {  // Pin 61, D45 (PWM)
    PIN_PWM | CHANNEL_6 | PWM_CHANNEL_B | GPT_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P410[] = {  // Pin 62, D46 (PWM)
    PIN_PWM | CHANNEL_7 | PWM_CHANNEL_A | GPT_ODD_CFG,
    LAST_ITEM_GUARD
};

const uint16_t P411[] = {  // Pin 63, D47
    LAST_ITEM_GUARD
};

const uint16_t P412[] = {  // Pin 64, D48
    LAST_ITEM_GUARD
};

const uint16_t P413[] = {  // Pin 65, D49
    LAST_ITEM_GUARD
};

// Port P5 (pins 68-71)
const uint16_t P500[] = {  // Pin 68, D12 (PWM, SPI MISO)
    PIN_PWM | CHANNEL_4 | PWM_CHANNEL_B | GPT_ODD_CFG,
    PIN_MISO | CHANNEL_0,
    LAST_ITEM_GUARD
};

const uint16_t P501[] = {  // Pin 69, D11 (PWM, SPI MOSI)
    PIN_PWM | CHANNEL_5 | PWM_CHANNEL_A | GPT_ODD_CFG,
    PIN_MOSI | CHANNEL_0,
    LAST_ITEM_GUARD
};

const uint16_t P502[] = {  // Pin 70, D13 (PWM, SPI SCK)
    PIN_PWM | CHANNEL_5 | PWM_CHANNEL_B | GPT_ODD_CFG,
    PIN_SCK | CHANNEL_0,
    LAST_ITEM_GUARD
};

const uint16_t P503[] = {  // Pin 71, D10 (SPI CS, not PWM here to avoid conflict)
    PIN_INTERRUPT | CHANNEL_2,
    LAST_ITEM_GUARD
};

// Port P6 (pins 76)
const uint16_t P600[] = {  // Pin 76, A15
    PIN_ANALOG | CHANNEL_16,
    LAST_ITEM_GUARD
};

// Port P9 (pins 84-100)
const uint16_t P900[] = {  // Pin 84, A10
    PIN_ANALOG | CHANNEL_10,
    LAST_ITEM_GUARD
};

const uint16_t P901[] = {  // Pin 85, A9 (DAC)
    PIN_ANALOG | CHANNEL_9,
    LAST_ITEM_GUARD
};

const uint16_t P902[] = {  // Pin 86, A8
    PIN_ANALOG | CHANNEL_8,
    LAST_ITEM_GUARD
};

const uint16_t P903[] = {  // Pin 87, A7
    PIN_ANALOG | CHANNEL_7,
    LAST_ITEM_GUARD
};

const uint16_t P904[] = {  // Pin 90, A6
    PIN_ANALOG | CHANNEL_6,
    LAST_ITEM_GUARD
};

const uint16_t P905[] = {  // Pin 91, A5
    PIN_ANALOG | CHANNEL_5,
    LAST_ITEM_GUARD
};

const uint16_t P906[] = {  // Pin 92, A14
    PIN_ANALOG | CHANNEL_14,
    LAST_ITEM_GUARD
};

const uint16_t P907[] = {  // Pin 93, A13
    PIN_ANALOG | CHANNEL_13,
    LAST_ITEM_GUARD
};

const uint16_t P908[] = {  // Pin 94, A12
    PIN_ANALOG | CHANNEL_12,
    LAST_ITEM_GUARD
};

const uint16_t P909[] = {  // Pin 95, A11
    PIN_ANALOG | CHANNEL_11,
    LAST_ITEM_GUARD
};

const uint16_t P910[] = {  // Pin 96, A4
    PIN_ANALOG | CHANNEL_4,
    LAST_ITEM_GUARD
};

const uint16_t P911[] = {  // Pin 97, A3
    PIN_ANALOG | CHANNEL_3,
    LAST_ITEM_GUARD
};

const uint16_t P912[] = {  // Pin 98, A2
    PIN_ANALOG | CHANNEL_2,
    LAST_ITEM_GUARD
};

const uint16_t P913[] = {  // Pin 99, A1 (AVCC Measure)
    PIN_ANALOG | CHANNEL_1,
    LAST_ITEM_GUARD
};

const uint16_t P914[] = {  // Pin 100, A0
    PIN_ANALOG | CHANNEL_0,
    LAST_ITEM_GUARD
};