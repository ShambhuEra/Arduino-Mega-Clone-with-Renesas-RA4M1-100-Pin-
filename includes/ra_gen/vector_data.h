/* generated vector header file - do not edit */
/* Configuration: Without External Crystal (HOCO at 48 MHz) */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
#ifdef __cplusplus
        extern "C" {
        #endif
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (36)  /* 32 original + 1 CAN + 4 SCI9 */
#endif
/* ISR prototypes */
void iic_master_rxi_isr(void);
void iic_master_txi_isr(void);
void iic_master_tei_isr(void);
void iic_master_eri_isr(void);
void spi_rxi_isr(void);
void spi_txi_isr(void);
void spi_tei_isr(void);
void spi_eri_isr(void);
void r_icu_isr(void);
void usbfs_interrupt_handler(void);
void usbfs_resume_handler(void);
void usbfs_d0fifo_handler(void);
void usbfs_d1fifo_handler(void);
void rtc_alarm_periodic_isr(void);
void rtc_carry_isr(void);
void agt_int_isr(void);
void sci_spi_rxi_isr(void);
void sci_spi_txi_isr(void);
void sci_spi_tei_isr(void);
void sci_spi_eri_isr(void);
void sci_i2c_rxi_isr(void);
void sci_i2c_txi_isr(void);
void sci_i2c_tei_isr(void);
void sci_uart_txi_isr(void);
void sci_uart_tei_isr(void);
void sci_uart_rxi_isr(void);
void sci_uart_eri_isr(void);
void iic_slave_rxi_isr(void);
void iic_slave_txi_isr(void);
void can_int_isr(void);      /* CAN interrupt using HOCO timing */
void sci9_rxi_isr(void);     /* UART4 for D18/D19 */
void sci9_txi_isr(void);
void sci9_tei_isr(void);
void sci9_eri_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_IIC1_RXI ((IRQn_Type) 0) /* IIC1 RXI (Receive data full) */
#define IIC1_RXI_IRQn          ((IRQn_Type) 0)
#define VECTOR_NUMBER_IIC1_TXI ((IRQn_Type) 1) /* IIC1 TXI (Transmit data empty) */
#define IIC1_TXI_IRQn          ((IRQn_Type) 1)
#define VECTOR_NUMBER_IIC1_TEI ((IRQn_Type) 2) /* IIC1 TEI (Transmit end) */
#define IIC1_TEI_IRQn          ((IRQn_Type) 2)
#define VECTOR_NUMBER_IIC1_ERI ((IRQn_Type) 3) /* IIC1 ERI (Transfer error) */
#define IIC1_ERI_IRQn          ((IRQn_Type) 3)
#define VECTOR_NUMBER_SPI1_RXI ((IRQn_Type) 4) /* SPI1 RXI (Receive buffer full) */
#define SPI1_RXI_IRQn          ((IRQn_Type) 4)
#define VECTOR_NUMBER_SPI1_TXI ((IRQn_Type) 5) /* SPI1 TXI (Transmit buffer empty) */
#define SPI1_TXI_IRQn          ((IRQn_Type) 5)
#define VECTOR_NUMBER_SPI1_TEI ((IRQn_Type) 6) /* SPI1 TEI (Transmission complete event) */
#define SPI1_TEI_IRQn          ((IRQn_Type) 6)
#define VECTOR_NUMBER_SPI1_ERI ((IRQn_Type) 7) /* SPI1 ERI (Error) */
#define SPI1_ERI_IRQn          ((IRQn_Type) 7)
#define VECTOR_NUMBER_ICU_IRQ0 ((IRQn_Type) 8) /* ICU IRQ0 (External pin interrupt 0) */
#define ICU_IRQ0_IRQn          ((IRQn_Type) 8)
#define VECTOR_NUMBER_ICU_IRQ1 ((IRQn_Type) 9) /* ICU IRQ1 (External pin interrupt 1) */
#define ICU_IRQ1_IRQn          ((IRQn_Type) 9)
#define VECTOR_NUMBER_USBFS_INT ((IRQn_Type) 10) /* USBFS INT (USBFS interrupt, HOCO-based) */
#define USBFS_INT_IRQn          ((IRQn_Type) 10)
#define VECTOR_NUMBER_USBFS_RESUME ((IRQn_Type) 11) /* USBFS RESUME (USBFS resume interrupt) */
#define USBFS_RESUME_IRQn          ((IRQn_Type) 11)
#define VECTOR_NUMBER_USBFS_FIFO_0 ((IRQn_Type) 12) /* USBFS FIFO 0 (DMA transfer request 0) */
#define USBFS_FIFO_0_IRQn          ((IRQn_Type) 12)
#define VECTOR_NUMBER_USBFS_FIFO_1 ((IRQn_Type) 13) /* USBFS FIFO 1 (DMA transfer request 1) */
#define USBFS_FIFO_1_IRQn          ((IRQn_Type) 13)
#define VECTOR_NUMBER_RTC_ALARM ((IRQn_Type) 14) /* RTC ALARM (Alarm interrupt) */
#define RTC_ALARM_IRQn          ((IRQn_Type) 14)
#define VECTOR_NUMBER_RTC_PERIOD ((IRQn_Type) 15) /* RTC PERIOD (Periodic interrupt) */
#define RTC_PERIOD_IRQn         ((IRQn_Type) 15)
#define VECTOR_NUMBER_RTC_CARRY ((IRQn_Type) 16) /* RTC CARRY (Carry interrupt) */
#define RTC_CARRY_IRQn          ((IRQn_Type) 16)
#define VECTOR_NUMBER_AGT0_INT  ((IRQn_Type) 17) /* AGT0 INT (AGT interrupt) */
#define AGT0_INT_IRQn           ((IRQn_Type) 17)
#define VECTOR_NUMBER_SCI0_RXI  ((IRQn_Type) 18) /* SCI0 RXI (Receive data full) - UART1 (D0/D1) */
#define SCI0_RXI_IRQn           ((IRQn_Type) 18)
#define VECTOR_NUMBER_SCI0_TXI  ((IRQn_Type) 19) /* SCI0 TXI (Transmit data empty) - UART1 */
#define SCI0_TXI_IRQn           ((IRQn_Type) 19)
#define VECTOR_NUMBER_SCI0_TEI  ((IRQn_Type) 20) /* SCI0 TEI (Transmit end) - UART1 */
#define SCI0_TEI_IRQn           ((IRQn_Type) 20)
#define VECTOR_NUMBER_SCI0_ERI  ((IRQn_Type) 21) /* SCI0 ERI (Receive error) - UART1 */
#define SCI0_ERI_IRQn           ((IRQn_Type) 21)
#define VECTOR_NUMBER_SCI1_RXI  ((IRQn_Type) 22) /* SCI1 RXI (Received data full) - UART2 (D14/D15) */
#define SCI1_RXI_IRQn           ((IRQn_Type) 22)
#define VECTOR_NUMBER_SCI1_TXI  ((IRQn_Type) 23) /* SCI1 TXI (Transmit data empty) - UART2 */
#define SCI1_TXI_IRQn           ((IRQn_Type) 23)
#define VECTOR_NUMBER_SCI1_TEI  ((IRQn_Type) 24) /* SCI1 TEI (Transmit end) - UART2 */
#define SCI1_TEI_IRQn           ((IRQn_Type) 24)
#define VECTOR_NUMBER_SCI1_ERI  ((IRQn_Type) 25) /* SCI1 ERI (Receive error) - UART2 */
#define SCI1_ERI_IRQn           ((IRQn_Type) 25)
#define VECTOR_NUMBER_SCI2_TXI  ((IRQn_Type) 26) /* SCI2 TXI (Transmit data empty) - UART3 (D16/D17) */
#define SCI2_TXI_IRQn           ((IRQn_Type) 26)
#define VECTOR_NUMBER_SCI2_TEI  ((IRQn_Type) 27) /* SCI2 TEI (Transmit end) - UART3 */
#define SCI2_TEI_IRQn           ((IRQn_Type) 27)
#define VECTOR_NUMBER_SCI2_RXI  ((IRQn_Type) 28) /* SCI2 RXI (Received data full) - UART3 */
#define SCI2_RXI_IRQn           ((IRQn_Type) 28)
#define VECTOR_NUMBER_SCI2_ERI  ((IRQn_Type) 29) /* SCI2 ERI (Receive error) - UART3 */
#define SCI2_ERI_IRQn           ((IRQn_Type) 29)
#define VECTOR_NUMBER_IIC0_RXI  ((IRQn_Type) 30) /* IIC0 RXI (Receive data full) - I2C (D20/D21) */
#define IIC0_RXI_IRQn           ((IRQn_Type) 30)
#define VECTOR_NUMBER_IIC0_TXI  ((IRQn_Type) 31) /* IIC0 TXI (Transmit data empty) - I2C */
#define IIC0_TXI_IRQn           ((IRQn_Type) 31)
#define VECTOR_NUMBER_CAN0_INT  ((IRQn_Type) 32) /* CAN0 INT (CAN interrupt, D4/D5) */
#define CAN0_INT_IRQn           ((IRQn_Type) 32)
#define VECTOR_NUMBER_SCI9_RXI  ((IRQn_Type) 33) /* SCI9 RXI (Receive data full) - UART4 (D18/D19) */
#define SCI9_RXI_IRQn           ((IRQn_Type) 33)
#define VECTOR_NUMBER_SCI9_TXI  ((IRQn_Type) 34) /* SCI9 TXI (Transmit data empty) - UART4 */
#define SCI9_TXI_IRQn           ((IRQn_Type) 34)
#define VECTOR_NUMBER_SCI9_TEI  ((IRQn_Type) 35) /* SCI9 TEI (Transmit end) - UART4 */
#define SCI9_TEI_IRQn           ((IRQn_Type) 35)
#define VECTOR_NUMBER_SCI9_ERI  ((IRQn_Type) 36) /* SCI9 ERI (Receive error) - UART4 */
#define SCI9_ERI_IRQn           ((IRQn_Type) 36)

#ifdef __cplusplus
        }
        #endif
#endif /* VECTOR_DATA_H */