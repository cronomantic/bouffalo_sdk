#ifndef _BFLB_DMA_H
#define _BFLB_DMA_H

#include "bflb_core.h"

/** @defgroup DMA_DIRECTION dma transfer direction definition
  * @{
  */
#define DMA_MEMORY_TO_MEMORY 0
#define DMA_MEMORY_TO_PERIPH 1
#define DMA_PERIPH_TO_MEMORY 2
#define DMA_PERIPH_TO_PERIPH 3
/**
  * @}
  */

/** @defgroup DMA_ADDR_INCREMENT dma source and destination address increment definition
  * @{
  */
#define DMA_ADDR_INCREMENT_DISABLE 0
#define DMA_ADDR_INCREMENT_ENABLE  1
/**
  * @}
  */

/** @defgroup DMA_DATA_WIDTH dma data width definition
  * @{
  */
#define DMA_DATA_WIDTH_8BIT  0
#define DMA_DATA_WIDTH_16BIT 1
#define DMA_DATA_WIDTH_32BIT 2
/**
  * @}
  */

/** @defgroup DMA_BURST_COUNT dma burst increment count definition
  * @{
  */
#define DMA_BURST_INCR1  0
#define DMA_BURST_INCR4  1
#define DMA_BURST_INCR8  2
#define DMA_BURST_INCR16 3
/**
  * @}
  */

#if defined(BL702)
/** @defgroup DMA_PERIPHERAL_REGBASE dma peripheral data register address definition
  * @{
  */
#define DMA_ADDR_UART0_TDR (0x4000A000 + 0x88)
#define DMA_ADDR_UART0_RDR (0x4000A000 + 0x8C)
#define DMA_ADDR_UART1_TDR (0x4000A100 + 0x88)
#define DMA_ADDR_UART1_RDR (0x4000A100 + 0x8C)
#define DMA_ADDR_I2C0_TDR  (0x4000A300 + 0x88)
#define DMA_ADDR_I2C0_RDR  (0x4000A300 + 0x8C)
#define DMA_ADDR_SPI0_TDR  (0x4000A200 + 0x88)
#define DMA_ADDR_SPI0_RDR  (0x4000A200 + 0x8C)
#define DMA_ADDR_I2S_TDR   (0x4000AA00 + 0x88)
#define DMA_ADDR_I2S_RDR   (0x4000AA00 + 0x8C)
#define DMA_ADDR_ADC_RDR   (0x40002000 + 0x04)
#define DMA_ADDR_DAC_TDR   (0x40002000 + 0X48)
/**
  * @}
  */

/** @defgroup DMA_PERIPHERAL_REQUEST dma peripheral request definition
  * @{
  */
#define DMA_REQUEST_NONE     0x00000000
#define DMA_REQUEST_UART0_RX 0x00000000
#define DMA_REQUEST_UART0_TX 0x00000001
#define DMA_REQUEST_UART1_RX 0x00000002
#define DMA_REQUEST_UART1_TX 0x00000003
#define DMA_REQUEST_I2C0_RX  0x00000006
#define DMA_REQUEST_I2C0_TX  0x00000007
#define DMA_REQUEST_SPI0_RX  0x0000000A
#define DMA_REQUEST_SPI0_TX  0x0000000B
#define DMA_REQUEST_I2S_RX   0x00000014
#define DMA_REQUEST_I2S_TX   0x00000015
#define DMA_REQUEST_ADC      0x00000016
#define DMA_REQUEST_DAC      0x00000017
/**
  * @}
  */

#elif defined(BL616)
/** @defgroup DMA_PERIPHERAL_REGBASE dma peripheral data register address definition
  * @{
  */
#define DMA_ADDR_UART0_TDR   (0x2000A000 + 0x88)
#define DMA_ADDR_UART0_RDR   (0x2000A000 + 0x8C)
#define DMA_ADDR_UART1_TDR   (0x2000A100 + 0x88)
#define DMA_ADDR_UART1_RDR   (0x2000A100 + 0x8C)
#define DMA_ADDR_I2C0_TDR    (0x2000A300 + 0x88)
#define DMA_ADDR_I2C0_RDR    (0x2000A300 + 0x8C)
#define DMA_ADDR_SPI0_TDR    (0x2000A200 + 0x88)
#define DMA_ADDR_SPI0_RDR    (0x2000A200 + 0x8C)
#define DMA_ADDR_I2S_TDR     (0x2000AB00 + 0x88)
#define DMA_ADDR_I2S_RDR     (0x2000AB00 + 0x8C)
#define DMA_ADDR_ADC_RDR     (0x20002000 + 0x04)
#define DMA_ADDR_DAC_TDR     (0x20002000 + 0x48)
/**
  * @}
  */

/** @defgroup DMA_PERIPHERAL_REQUEST dma peripheral request definition
  * @{
  */
#define DMA_REQUEST_NONE     0x00000000
#define DMA_REQUEST_UART0_RX 0x00000000
#define DMA_REQUEST_UART0_TX 0x00000001
#define DMA_REQUEST_UART1_RX 0x00000002
#define DMA_REQUEST_UART1_TX 0x00000003
#define DMA_REQUEST_I2C0_RX  0x00000006
#define DMA_REQUEST_I2C0_TX  0x00000007
#define DMA_REQUEST_SPI0_RX  0x0000000A
#define DMA_REQUEST_SPI0_TX  0x0000000B
#define DMA_REQUEST_AUDIO_TX 0x0000000D
#define DMA_REQUEST_I2S_RX   0x00000010
#define DMA_REQUEST_I2S_TX   0x00000011
#define DMA_REQUEST_ADC      0x00000016
#define DMA_REQUEST_DAC      0x00000017
/**
  * @}
  */

#elif defined(BL808) || defined(BL606P)
/** @defgroup DMA_PERIPHERAL_REGBASE dma peripheral data register address definition
  * @{
  */
#define DMA_ADDR_UART0_TDR   (0x2000A000 + 0x88)
#define DMA_ADDR_UART0_RDR   (0x2000A000 + 0x8C)
#define DMA_ADDR_UART1_TDR   (0x2000A100 + 0x88)
#define DMA_ADDR_UART1_RDR   (0x2000A100 + 0x8C)
#define DMA_ADDR_UART2_TDR   (0x2000AA00 + 0x88)
#define DMA_ADDR_UART2_RDR   (0x2000AA00 + 0x8C)
#define DMA_ADDR_UART3_TDR   (0x30002000 + 0x88)
#define DMA_ADDR_UART3_RDR   (0x30002000 + 0x8C)
#define DMA_ADDR_I2C0_TDR    (0x2000A300 + 0x88)
#define DMA_ADDR_I2C0_RDR    (0x2000A300 + 0x8C)
#define DMA_ADDR_I2C1_TDR    (0x2000A900 + 0x88)
#define DMA_ADDR_I2C1_RDR    (0x2000A900 + 0x8C)
#define DMA_ADDR_I2C2_TDR    (0x30003000 + 0x88)
#define DMA_ADDR_I2C2_RDR    (0x30003000 + 0x8C)
#define DMA_ADDR_I2C3_TDR    (0x30004000 + 0x88)
#define DMA_ADDR_I2C3_RDR    (0x30004000 + 0x8C)
#define DMA_ADDR_SPI0_TDR    (0x2000A200 + 0x88)
#define DMA_ADDR_SPI0_RDR    (0x2000A200 + 0x8C)
#define DMA_ADDR_SPI1_TDR    (0x30008000 + 0x88)
#define DMA_ADDR_SPI1_RDR    (0x30008000 + 0x8C)
#define DMA_ADDR_I2S_TDR     (0x2000AB00 + 0x88)
#define DMA_ADDR_I2S_RDR     (0x2000AB00 + 0x8C)
#define DMA_ADDR_ADC_RDR     (0x20002000 + 0x04)
#define DMA_ADDR_DAC_TDR     (0x20002000 + 0x48)
/**
  * @}
  */

/** @defgroup DMA_PERIPHERAL_REQUEST dma peripheral request definition
  * @{
  */
#define DMA_REQUEST_NONE     0x00000000
#define DMA_REQUEST_UART0_RX 0x00000000
#define DMA_REQUEST_UART0_TX 0x00000001
#define DMA_REQUEST_UART1_RX 0x00000002
#define DMA_REQUEST_UART1_TX 0x00000003
#define DMA_REQUEST_UART2_RX 0x00000004
#define DMA_REQUEST_UART2_TX 0x00000005
#define DMA_REQUEST_I2C0_RX  0x00000006
#define DMA_REQUEST_I2C0_TX  0x00000007
#define DMA_REQUEST_IR_TX    0x00000008
#define DMA_REQUEST_SPI0_RX  0x0000000A
#define DMA_REQUEST_SPI0_TX  0x0000000B
#define DMA_REQUEST_AUDIO_RX 0x0000000C
#define DMA_REQUEST_AUDIO_TX 0x0000000D
#define DMA_REQUEST_I2C1_RX  0x0000000E
#define DMA_REQUEST_I2C1_TX  0x0000000F
#define DMA_REQUEST_I2S_RX   0x00000010
#define DMA_REQUEST_I2S_TX   0x00000011
#define DMA_REQUEST_ADC      0x00000016
#define DMA_REQUEST_DAC      0x00000017

/* Only support dma2 */
#define DMA_REQUEST_UART3_RX 0x00000000
#define DMA_REQUEST_UART3_TX 0x00000001
#define DMA_REQUEST_SPI1_RX  0x00000002
#define DMA_REQUEST_SPI1_TX  0x00000003
#define DMA_REQUEST_I2C2_RX  0x00000006
#define DMA_REQUEST_I2C2_TX  0x00000007
#define DMA_REQUEST_I2C3_RX  0x00000008
#define DMA_REQUEST_I2C3_TX  0x00000009
/**
  * @}
  */

#elif defined(BL628)
/** @defgroup DMA_PERIPHERAL_REGBASE dma peripheral data register address definition
  * @{
  */
#define DMA_ADDR_UART0_TDR   (0x20010000 + 0x88)
#define DMA_ADDR_UART0_RDR   (0x20010000 + 0x8C)
#define DMA_ADDR_UART1_TDR   (0x20011000 + 0x88)
#define DMA_ADDR_UART1_RDR   (0x20011000 + 0x8C)
#define DMA_ADDR_UART2_TDR   (0x20012000 + 0x88)
#define DMA_ADDR_UART2_RDR   (0x20012000 + 0x8C)
#define DMA_ADDR_I2C0_TDR    (0x20014000 + 0x88)
#define DMA_ADDR_I2C0_RDR    (0x20014000 + 0x8C)
#define DMA_ADDR_I2C1_TDR    (0x20015000 + 0x88)
#define DMA_ADDR_I2C1_RDR    (0x20015000 + 0x8C)
#define DMA_ADDR_SPI0_TDR    (0x20018000 + 0x88)
#define DMA_ADDR_SPI0_RDR    (0x20018000 + 0x8C)
#define DMA_ADDR_I2S_TDR     (0x2001E000 + 0x88)
#define DMA_ADDR_I2S_RDR     (0x2001E000 + 0x8C)
#define DMA_ADDR_ADC_RDR     (0x20002000 + 0x04)
#define DMA_ADDR_DAC_TDR     (0x20002000 + 0x48)
/**
  * @}
  */

/** @defgroup DMA_PERIPHERAL_REQUEST dma peripheral request definition
  * @{
  */
#define DMA_REQUEST_NONE     0x00000000
#define DMA_REQUEST_UART0_RX 0x00000000
#define DMA_REQUEST_UART0_TX 0x00000001
#define DMA_REQUEST_UART1_RX 0x00000002
#define DMA_REQUEST_UART1_TX 0x00000003
#define DMA_REQUEST_UART2_RX 0x00000004
#define DMA_REQUEST_UART2_TX 0x00000005
#define DMA_REQUEST_I2C0_RX  0x00000006
#define DMA_REQUEST_I2C0_TX  0x00000007
#define DMA_REQUEST_I2C1_RX  0x00000008
#define DMA_REQUEST_I2C1_TX  0x00000009
#define DMA_REQUEST_SPI0_RX  0x0000000A
#define DMA_REQUEST_SPI0_TX  0x0000000B
#define DMA_REQUEST_I2S_RX   0x00000010
#define DMA_REQUEST_I2S_TX   0x00000011
#define DMA_REQUEST_ADC      0x00000016
#define DMA_REQUEST_DAC      0x00000017
/**
  * @}
  */

#endif

/** @defgroup DMA_CMD dma feature control cmd definition
  * @{
  */
#define DMA_CMD_SET_SRCADDR_INCREMENT (0x01)
#define DMA_CMD_SET_DSTADDR_INCREMENT (0x02)
/**
  * @}
  */

union bflb_dma_lli_control_s {
    struct
    {
        uint32_t TransferSize : 12; /* [11: 0],        r/w,        0x0 */
        uint32_t SBSize       : 2;  /* [13:12],        r/w,        0x1 */
        uint32_t dst_min_mode : 1;  /* [   14],        r/w,        0x0 */
        uint32_t DBSize       : 2;  /* [16:15],        r/w,        0x1 */
        uint32_t dst_add_mode : 1;  /* [   17],        r/w,        0x0 */
        uint32_t SWidth       : 2;  /* [19:18],        r/w,        0x2 */
        uint32_t reserved_20  : 1;  /* [   20],       rsvd,        0x0 */
        uint32_t DWidth       : 2;  /* [22:21],        r/w,        0x2 */
        uint32_t fix_cnt      : 2;  /* [24:23],        r/w,        0x0 */
        uint32_t SLargerD     : 1;  /* [   25],        r/w,        0x0 */
        uint32_t SI           : 1;  /* [   26],        r/w,        0x1 */
        uint32_t DI           : 1;  /* [   27],        r/w,        0x1 */
        uint32_t Prot         : 3;  /* [30:28],        r/w,        0x0 */
        uint32_t I            : 1;  /* [   31],        r/w,        0x0 */
    } bits;
    uint32_t WORD;
};

/**
 * @brief DMA channel lli pool structure
 *
 * @param src_addr        DMA source address
 * @param dst_addr        DMA destination address
 * @param nextlli         DMA next lli address
 * @param control         DMA lli config
 */
struct bflb_dma_channel_lli_pool_s {
    uint32_t src_addr;
    uint32_t dst_addr;
    uint32_t nextlli;
    union bflb_dma_lli_control_s control;
};

/**
 * @brief DMA channel lli transfer structure
 *
 * @param src_addr        DMA source address
 * @param dst_addr        DMA destination address
 * @param nbytes          How many bytes should be transferred
 */
struct bflb_dma_channel_lli_transfer_s {
    uint32_t src_addr;
    uint32_t dst_addr;
    uint32_t nbytes;
};

/**
 * @brief DMA configuration structure
 *
 * @param direction        DMA transfer direction, use @ref DMA_DIRECTION
 * @param src_req          DMA source request, use @ref DMA_PERIPHERAL_REQUEST
 * @param dst_req          DMA destination request, use @ref DMA_PERIPHERAL_REQUEST
 * @param src_addr_inc     DMA source address increment, use @ref DMA_ADDR_INCREMENT
 * @param dst_addr_inc     DMA destination address increment, use @ref DMA_ADDR_INCREMENT
 * @param src_burst_count  DMA source burst count, use @ref DMA_BURST_COUNT
 * @param dst_burst_count  DMA destination burst count, use @ref DMA_BURST_COUNT
 * @param src_width        DMA source data width, use @ref DMA_DATA_WIDTH
 * @param dst_width        DMA destination data width, use @ref DMA_DATA_WIDTH
 */
struct bflb_dma_channel_config_s {
    uint8_t direction;
    uint32_t src_req;
    uint32_t dst_req;
    uint8_t src_addr_inc;
    uint8_t dst_addr_inc;
    uint8_t src_burst_count;
    uint8_t dst_burst_count;
    uint8_t src_width;
    uint8_t dst_width;
};

#ifdef __cplusplus
extern "C" {
#endif

void bflb_dma_channel_init(struct bflb_device_s *dev, const struct bflb_dma_channel_config_s *config);
void bflb_dma_channel_deinit(struct bflb_device_s *dev);
int bflb_dma_channel_start(struct bflb_device_s *dev);
int bflb_dma_channel_stop(struct bflb_device_s *dev);
bool bflb_dma_channel_isbusy(struct bflb_device_s *dev);
void bflb_dma_channel_irq_attach(struct bflb_device_s *dev, void (*callback)(void *arg), void *arg);
void bflb_dma_channel_irq_detach(struct bflb_device_s *dev);
int bflb_dma_channel_lli_reload(struct bflb_device_s *dev,
                                struct bflb_dma_channel_lli_pool_s *lli_pool, uint32_t max_lli_count,
                                struct bflb_dma_channel_lli_transfer_s *transfer, uint32_t count);

int bflb_dma_feature_control(struct bflb_device_s *dev, int cmd, size_t arg);

/* Not use */
void bflb_dma_channel_tcint_mask(struct bflb_device_s *dev, bool mask);
bool bflb_dma_channel_get_tcint_status(struct bflb_device_s *dev);
void bflb_dma_channel_tcint_clear(struct bflb_device_s *dev);

#ifdef __cplusplus
}
#endif

#endif