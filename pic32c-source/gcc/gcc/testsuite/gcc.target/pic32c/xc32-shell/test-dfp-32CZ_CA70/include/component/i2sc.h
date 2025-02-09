/**
 * \brief Component description for PIC32CZ/CA70 I2SC
 *
 * Copyright (c) 2017 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description version 2017-07-14T18:00:00Z */
#ifndef _PIC32CZ_CA70_I2SC_COMPONENT_H_
#define _PIC32CZ_CA70_I2SC_COMPONENT_H_

/** \addtogroup PIC32CZ_CA70_I2SC Inter-IC Sound Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR I2SC */
/* ========================================================================== */

/* -------- I2SC_CR : (I2SC Offset: 0x00) (/W 32) Control Register -------- */

typedef union
{
  struct
  {
    uint32_t RXEN:1;                    /**< bit:      0  Receiver Enable                               */
    uint32_t RXDIS:1;                   /**< bit:      1  Receiver Disable                              */
    uint32_t CKEN:1;                    /**< bit:      2  Clocks Enable                                 */
    uint32_t CKDIS:1;                   /**< bit:      3  Clocks Disable                                */
    uint32_t TXEN:1;                    /**< bit:      4  Transmitter Enable                            */
    uint32_t TXDIS:1;                   /**< bit:      5  Transmitter Disable                           */
    uint32_t :1;                        /**< bit:      6  Reserved                                      */
    uint32_t SWRST:1;                   /**< bit:      7  Software Reset                                */
    uint32_t :24;                       /**< bit:  8..31  Reserved                                      */
  };
  uint32_t w;
} __I2SC_CR_bits_t;

#define I2SC_CR_RXEN_Pos                      (0)                                            /**< (I2SC_CR) Receiver Enable Position */
#define I2SC_CR_RXEN_Msk                      (0x1U << I2SC_CR_RXEN_Pos)                     /**< (I2SC_CR) Receiver Enable Mask */
#define I2SC_CR_RXDIS_Pos                     (1)                                            /**< (I2SC_CR) Receiver Disable Position */
#define I2SC_CR_RXDIS_Msk                     (0x1U << I2SC_CR_RXDIS_Pos)                    /**< (I2SC_CR) Receiver Disable Mask */
#define I2SC_CR_CKEN_Pos                      (2)                                            /**< (I2SC_CR) Clocks Enable Position */
#define I2SC_CR_CKEN_Msk                      (0x1U << I2SC_CR_CKEN_Pos)                     /**< (I2SC_CR) Clocks Enable Mask */
#define I2SC_CR_CKDIS_Pos                     (3)                                            /**< (I2SC_CR) Clocks Disable Position */
#define I2SC_CR_CKDIS_Msk                     (0x1U << I2SC_CR_CKDIS_Pos)                    /**< (I2SC_CR) Clocks Disable Mask */
#define I2SC_CR_TXEN_Pos                      (4)                                            /**< (I2SC_CR) Transmitter Enable Position */
#define I2SC_CR_TXEN_Msk                      (0x1U << I2SC_CR_TXEN_Pos)                     /**< (I2SC_CR) Transmitter Enable Mask */
#define I2SC_CR_TXDIS_Pos                     (5)                                            /**< (I2SC_CR) Transmitter Disable Position */
#define I2SC_CR_TXDIS_Msk                     (0x1U << I2SC_CR_TXDIS_Pos)                    /**< (I2SC_CR) Transmitter Disable Mask */
#define I2SC_CR_SWRST_Pos                     (7)                                            /**< (I2SC_CR) Software Reset Position */
#define I2SC_CR_SWRST_Msk                     (0x1U << I2SC_CR_SWRST_Pos)                    /**< (I2SC_CR) Software Reset Mask */
#define I2SC_CR_Msk                           (0x000000BFUL)                                 /**< (I2SC_CR) Register Mask  */

/* -------- I2SC_MR : (I2SC Offset: 0x04) (R/W 32) Mode Register -------- */

typedef union
{
  struct
  {
    uint32_t MODE:1;                    /**< bit:      0  Inter-IC Sound Controller Mode                */
    uint32_t :1;                        /**< bit:      1  Reserved                                      */
    uint32_t DATALENGTH:3;              /**< bit:   2..4  Data Word Length                              */
    uint32_t :1;                        /**< bit:      5  Reserved                                      */
    uint32_t FORMAT:2;                  /**< bit:   6..7  Data Format                                   */
    uint32_t RXMONO:1;                  /**< bit:      8  Receive Mono                                  */
    uint32_t RXDMA:1;                   /**< bit:      9  Single or Multiple DMA Controller Channels for Receiver */
    uint32_t RXLOOP:1;                  /**< bit:     10  Loopback Test Mode                            */
    uint32_t :1;                        /**< bit:     11  Reserved                                      */
    uint32_t TXMONO:1;                  /**< bit:     12  Transmit Mono                                 */
    uint32_t TXDMA:1;                   /**< bit:     13  Single or Multiple DMA Controller Channels for Transmitter */
    uint32_t TXSAME:1;                  /**< bit:     14  Transmit Data when Underrun                   */
    uint32_t :1;                        /**< bit:     15  Reserved                                      */
    uint32_t IMCKDIV:6;                 /**< bit: 16..21  Selected Clock to I2SC Master Clock Ratio     */
    uint32_t :2;                        /**< bit: 22..23  Reserved                                      */
    uint32_t IMCKFS:6;                  /**< bit: 24..29  Master Clock to fs Ratio                      */
    uint32_t IMCKMODE:1;                /**< bit:     30  Master Clock Mode                             */
    uint32_t IWS:1;                     /**< bit:     31  I2SC_WS Slot Width                            */
  };
  uint32_t w;
} __I2SC_MR_bits_t;

#define I2SC_MR_MODE_Pos                      (0)                                            /**< (I2SC_MR) Inter-IC Sound Controller Mode Position */
#define I2SC_MR_MODE_Msk                      (0x1U << I2SC_MR_MODE_Pos)                     /**< (I2SC_MR) Inter-IC Sound Controller Mode Mask */
#define   I2SC_MR_MODE_SLAVE_Val              (0x0U)                                         /**< (I2SC_MR) I2SC_CK and I2SC_WS pin inputs used as bit clock and word select/frame synchronization.  */
#define   I2SC_MR_MODE_MASTER_Val             (0x1U)                                         /**< (I2SC_MR) Bit clock and word select/frame synchronization generated by I2SC from MCK and output to I2SC_CK and I2SC_WS pins. Peripheral clock or GCLK is output as master clock on I2SC_MCK if I2SC_MR.IMCKMODE is set.  */
#define I2SC_MR_MODE_SLAVE                    (I2SC_MR_MODE_SLAVE_Val << I2SC_MR_MODE_Pos)   /**< (I2SC_MR) I2SC_CK and I2SC_WS pin inputs used as bit clock and word select/frame synchronization. Position  */
#define I2SC_MR_MODE_MASTER                   (I2SC_MR_MODE_MASTER_Val << I2SC_MR_MODE_Pos)  /**< (I2SC_MR) Bit clock and word select/frame synchronization generated by I2SC from MCK and output to I2SC_CK and I2SC_WS pins. Peripheral clock or GCLK is output as master clock on I2SC_MCK if I2SC_MR.IMCKMODE is set. Position  */
#define I2SC_MR_DATALENGTH_Pos                (2)                                            /**< (I2SC_MR) Data Word Length Position */
#define I2SC_MR_DATALENGTH_Msk                (0x7U << I2SC_MR_DATALENGTH_Pos)               /**< (I2SC_MR) Data Word Length Mask */
#define I2SC_MR_DATALENGTH(value)             (I2SC_MR_DATALENGTH_Msk & ((value) << I2SC_MR_DATALENGTH_Pos))
#define   I2SC_MR_DATALENGTH_32_BITS_Val      (0x0U)                                         /**< (I2SC_MR) Data length is set to 32 bits  */
#define   I2SC_MR_DATALENGTH_24_BITS_Val      (0x1U)                                         /**< (I2SC_MR) Data length is set to 24 bits  */
#define   I2SC_MR_DATALENGTH_20_BITS_Val      (0x2U)                                         /**< (I2SC_MR) Data length is set to 20 bits  */
#define   I2SC_MR_DATALENGTH_18_BITS_Val      (0x3U)                                         /**< (I2SC_MR) Data length is set to 18 bits  */
#define   I2SC_MR_DATALENGTH_16_BITS_Val      (0x4U)                                         /**< (I2SC_MR) Data length is set to 16 bits  */
#define   I2SC_MR_DATALENGTH_16_BITS_COMPACT_Val (0x5U)                                         /**< (I2SC_MR) Data length is set to 16-bit compact stereo. Left sample in bits 15:0 and right sample in bits 31:16 of same word.  */
#define   I2SC_MR_DATALENGTH_8_BITS_Val       (0x6U)                                         /**< (I2SC_MR) Data length is set to 8 bits  */
#define   I2SC_MR_DATALENGTH_8_BITS_COMPACT_Val (0x7U)                                         /**< (I2SC_MR) Data length is set to 8-bit compact stereo. Left sample in bits 7:0 and right sample in bits 15:8 of the same word.  */
#define I2SC_MR_DATALENGTH_32_BITS            (I2SC_MR_DATALENGTH_32_BITS_Val << I2SC_MR_DATALENGTH_Pos)  /**< (I2SC_MR) Data length is set to 32 bits Position  */
#define I2SC_MR_DATALENGTH_24_BITS            (I2SC_MR_DATALENGTH_24_BITS_Val << I2SC_MR_DATALENGTH_Pos)  /**< (I2SC_MR) Data length is set to 24 bits Position  */
#define I2SC_MR_DATALENGTH_20_BITS            (I2SC_MR_DATALENGTH_20_BITS_Val << I2SC_MR_DATALENGTH_Pos)  /**< (I2SC_MR) Data length is set to 20 bits Position  */
#define I2SC_MR_DATALENGTH_18_BITS            (I2SC_MR_DATALENGTH_18_BITS_Val << I2SC_MR_DATALENGTH_Pos)  /**< (I2SC_MR) Data length is set to 18 bits Position  */
#define I2SC_MR_DATALENGTH_16_BITS            (I2SC_MR_DATALENGTH_16_BITS_Val << I2SC_MR_DATALENGTH_Pos)  /**< (I2SC_MR) Data length is set to 16 bits Position  */
#define I2SC_MR_DATALENGTH_16_BITS_COMPACT    (I2SC_MR_DATALENGTH_16_BITS_COMPACT_Val << I2SC_MR_DATALENGTH_Pos)  /**< (I2SC_MR) Data length is set to 16-bit compact stereo. Left sample in bits 15:0 and right sample in bits 31:16 of same word. Position  */
#define I2SC_MR_DATALENGTH_8_BITS             (I2SC_MR_DATALENGTH_8_BITS_Val << I2SC_MR_DATALENGTH_Pos)  /**< (I2SC_MR) Data length is set to 8 bits Position  */
#define I2SC_MR_DATALENGTH_8_BITS_COMPACT     (I2SC_MR_DATALENGTH_8_BITS_COMPACT_Val << I2SC_MR_DATALENGTH_Pos)  /**< (I2SC_MR) Data length is set to 8-bit compact stereo. Left sample in bits 7:0 and right sample in bits 15:8 of the same word. Position  */
#define I2SC_MR_FORMAT_Pos                    (6)                                            /**< (I2SC_MR) Data Format Position */
#define I2SC_MR_FORMAT_Msk                    (0x3U << I2SC_MR_FORMAT_Pos)                   /**< (I2SC_MR) Data Format Mask */
#define I2SC_MR_FORMAT(value)                 (I2SC_MR_FORMAT_Msk & ((value) << I2SC_MR_FORMAT_Pos))
#define   I2SC_MR_FORMAT_I2S_Val              (0x0U)                                         /**< (I2SC_MR) I2S format, stereo with I2SC_WS low for left channel, and MSB of sample starting one I2SC_CK period after I2SC_WS edge  */
#define   I2SC_MR_FORMAT_LJ_Val               (0x1U)                                         /**< (I2SC_MR) Left-justified format, stereo with I2SC_WS high for left channel, and MSB of sample starting on I2SC_WS edge  */
#define I2SC_MR_FORMAT_I2S                    (I2SC_MR_FORMAT_I2S_Val << I2SC_MR_FORMAT_Pos)  /**< (I2SC_MR) I2S format, stereo with I2SC_WS low for left channel, and MSB of sample starting one I2SC_CK period after I2SC_WS edge Position  */
#define I2SC_MR_FORMAT_LJ                     (I2SC_MR_FORMAT_LJ_Val << I2SC_MR_FORMAT_Pos)  /**< (I2SC_MR) Left-justified format, stereo with I2SC_WS high for left channel, and MSB of sample starting on I2SC_WS edge Position  */
#define I2SC_MR_RXMONO_Pos                    (8)                                            /**< (I2SC_MR) Receive Mono Position */
#define I2SC_MR_RXMONO_Msk                    (0x1U << I2SC_MR_RXMONO_Pos)                   /**< (I2SC_MR) Receive Mono Mask */
#define I2SC_MR_RXDMA_Pos                     (9)                                            /**< (I2SC_MR) Single or Multiple DMA Controller Channels for Receiver Position */
#define I2SC_MR_RXDMA_Msk                     (0x1U << I2SC_MR_RXDMA_Pos)                    /**< (I2SC_MR) Single or Multiple DMA Controller Channels for Receiver Mask */
#define I2SC_MR_RXLOOP_Pos                    (10)                                           /**< (I2SC_MR) Loopback Test Mode Position */
#define I2SC_MR_RXLOOP_Msk                    (0x1U << I2SC_MR_RXLOOP_Pos)                   /**< (I2SC_MR) Loopback Test Mode Mask */
#define I2SC_MR_TXMONO_Pos                    (12)                                           /**< (I2SC_MR) Transmit Mono Position */
#define I2SC_MR_TXMONO_Msk                    (0x1U << I2SC_MR_TXMONO_Pos)                   /**< (I2SC_MR) Transmit Mono Mask */
#define I2SC_MR_TXDMA_Pos                     (13)                                           /**< (I2SC_MR) Single or Multiple DMA Controller Channels for Transmitter Position */
#define I2SC_MR_TXDMA_Msk                     (0x1U << I2SC_MR_TXDMA_Pos)                    /**< (I2SC_MR) Single or Multiple DMA Controller Channels for Transmitter Mask */
#define I2SC_MR_TXSAME_Pos                    (14)                                           /**< (I2SC_MR) Transmit Data when Underrun Position */
#define I2SC_MR_TXSAME_Msk                    (0x1U << I2SC_MR_TXSAME_Pos)                   /**< (I2SC_MR) Transmit Data when Underrun Mask */
#define I2SC_MR_IMCKDIV_Pos                   (16)                                           /**< (I2SC_MR) Selected Clock to I2SC Master Clock Ratio Position */
#define I2SC_MR_IMCKDIV_Msk                   (0x3FU << I2SC_MR_IMCKDIV_Pos)                 /**< (I2SC_MR) Selected Clock to I2SC Master Clock Ratio Mask */
#define I2SC_MR_IMCKDIV(value)                (I2SC_MR_IMCKDIV_Msk & ((value) << I2SC_MR_IMCKDIV_Pos))
#define I2SC_MR_IMCKFS_Pos                    (24)                                           /**< (I2SC_MR) Master Clock to fs Ratio Position */
#define I2SC_MR_IMCKFS_Msk                    (0x3FU << I2SC_MR_IMCKFS_Pos)                  /**< (I2SC_MR) Master Clock to fs Ratio Mask */
#define I2SC_MR_IMCKFS(value)                 (I2SC_MR_IMCKFS_Msk & ((value) << I2SC_MR_IMCKFS_Pos))
#define   I2SC_MR_IMCKFS_M2SF32_Val           (0x0U)                                         /**< (I2SC_MR) Sample frequency ratio set to 32  */
#define   I2SC_MR_IMCKFS_M2SF64_Val           (0x1U)                                         /**< (I2SC_MR) Sample frequency ratio set to 64  */
#define   I2SC_MR_IMCKFS_M2SF96_Val           (0x2U)                                         /**< (I2SC_MR) Sample frequency ratio set to 96  */
#define   I2SC_MR_IMCKFS_M2SF128_Val          (0x3U)                                         /**< (I2SC_MR) Sample frequency ratio set to 128  */
#define   I2SC_MR_IMCKFS_M2SF192_Val          (0x5U)                                         /**< (I2SC_MR) Sample frequency ratio set to 192  */
#define   I2SC_MR_IMCKFS_M2SF256_Val          (0x7U)                                         /**< (I2SC_MR) Sample frequency ratio set to 256  */
#define   I2SC_MR_IMCKFS_M2SF384_Val          (0xBU)                                         /**< (I2SC_MR) Sample frequency ratio set to 384  */
#define   I2SC_MR_IMCKFS_M2SF512_Val          (0xFU)                                         /**< (I2SC_MR) Sample frequency ratio set to 512  */
#define   I2SC_MR_IMCKFS_M2SF768_Val          (0x17U)                                        /**< (I2SC_MR) Sample frequency ratio set to 768  */
#define   I2SC_MR_IMCKFS_M2SF1024_Val         (0x1FU)                                        /**< (I2SC_MR) Sample frequency ratio set to 1024  */
#define   I2SC_MR_IMCKFS_M2SF1536_Val         (0x2FU)                                        /**< (I2SC_MR) Sample frequency ratio set to 1536  */
#define   I2SC_MR_IMCKFS_M2SF2048_Val         (0x3FU)                                        /**< (I2SC_MR) Sample frequency ratio set to 2048  */
#define I2SC_MR_IMCKFS_M2SF32                 (I2SC_MR_IMCKFS_M2SF32_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 32 Position  */
#define I2SC_MR_IMCKFS_M2SF64                 (I2SC_MR_IMCKFS_M2SF64_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 64 Position  */
#define I2SC_MR_IMCKFS_M2SF96                 (I2SC_MR_IMCKFS_M2SF96_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 96 Position  */
#define I2SC_MR_IMCKFS_M2SF128                (I2SC_MR_IMCKFS_M2SF128_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 128 Position  */
#define I2SC_MR_IMCKFS_M2SF192                (I2SC_MR_IMCKFS_M2SF192_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 192 Position  */
#define I2SC_MR_IMCKFS_M2SF256                (I2SC_MR_IMCKFS_M2SF256_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 256 Position  */
#define I2SC_MR_IMCKFS_M2SF384                (I2SC_MR_IMCKFS_M2SF384_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 384 Position  */
#define I2SC_MR_IMCKFS_M2SF512                (I2SC_MR_IMCKFS_M2SF512_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 512 Position  */
#define I2SC_MR_IMCKFS_M2SF768                (I2SC_MR_IMCKFS_M2SF768_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 768 Position  */
#define I2SC_MR_IMCKFS_M2SF1024               (I2SC_MR_IMCKFS_M2SF1024_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 1024 Position  */
#define I2SC_MR_IMCKFS_M2SF1536               (I2SC_MR_IMCKFS_M2SF1536_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 1536 Position  */
#define I2SC_MR_IMCKFS_M2SF2048               (I2SC_MR_IMCKFS_M2SF2048_Val << I2SC_MR_IMCKFS_Pos)  /**< (I2SC_MR) Sample frequency ratio set to 2048 Position  */
#define I2SC_MR_IMCKMODE_Pos                  (30)                                           /**< (I2SC_MR) Master Clock Mode Position */
#define I2SC_MR_IMCKMODE_Msk                  (0x1U << I2SC_MR_IMCKMODE_Pos)                 /**< (I2SC_MR) Master Clock Mode Mask */
#define I2SC_MR_IWS_Pos                       (31)                                           /**< (I2SC_MR) I2SC_WS Slot Width Position */
#define I2SC_MR_IWS_Msk                       (0x1U << I2SC_MR_IWS_Pos)                      /**< (I2SC_MR) I2SC_WS Slot Width Mask */
#define I2SC_MR_Msk                           (0xFF3F77DDUL)                                 /**< (I2SC_MR) Register Mask  */

/* -------- I2SC_SR : (I2SC Offset: 0x08) (R/ 32) Status Register -------- */

typedef union
{
  struct
  {
    uint32_t RXEN:1;                    /**< bit:      0  Receiver Enabled                              */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Ready                                 */
    uint32_t RXOR:1;                    /**< bit:      2  Receive Overrun                               */
    uint32_t :1;                        /**< bit:      3  Reserved                                      */
    uint32_t TXEN:1;                    /**< bit:      4  Transmitter Enabled                           */
    uint32_t TXRDY:1;                   /**< bit:      5  Transmit Ready                                */
    uint32_t TXUR:1;                    /**< bit:      6  Transmit Underrun                             */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t RXORCH:2;                  /**< bit:   8..9  Receive Overrun Channel                       */
    uint32_t :10;                       /**< bit: 10..19  Reserved                                      */
    uint32_t TXURCH:2;                  /**< bit: 20..21  Transmit Underrun Channel                     */
    uint32_t :10;                       /**< bit: 22..31  Reserved                                      */
  };
  uint32_t w;
} __I2SC_SR_bits_t;

#define I2SC_SR_RXEN_Pos                      (0)                                            /**< (I2SC_SR) Receiver Enabled Position */
#define I2SC_SR_RXEN_Msk                      (0x1U << I2SC_SR_RXEN_Pos)                     /**< (I2SC_SR) Receiver Enabled Mask */
#define I2SC_SR_RXRDY_Pos                     (1)                                            /**< (I2SC_SR) Receive Ready Position */
#define I2SC_SR_RXRDY_Msk                     (0x1U << I2SC_SR_RXRDY_Pos)                    /**< (I2SC_SR) Receive Ready Mask */
#define I2SC_SR_RXOR_Pos                      (2)                                            /**< (I2SC_SR) Receive Overrun Position */
#define I2SC_SR_RXOR_Msk                      (0x1U << I2SC_SR_RXOR_Pos)                     /**< (I2SC_SR) Receive Overrun Mask */
#define I2SC_SR_TXEN_Pos                      (4)                                            /**< (I2SC_SR) Transmitter Enabled Position */
#define I2SC_SR_TXEN_Msk                      (0x1U << I2SC_SR_TXEN_Pos)                     /**< (I2SC_SR) Transmitter Enabled Mask */
#define I2SC_SR_TXRDY_Pos                     (5)                                            /**< (I2SC_SR) Transmit Ready Position */
#define I2SC_SR_TXRDY_Msk                     (0x1U << I2SC_SR_TXRDY_Pos)                    /**< (I2SC_SR) Transmit Ready Mask */
#define I2SC_SR_TXUR_Pos                      (6)                                            /**< (I2SC_SR) Transmit Underrun Position */
#define I2SC_SR_TXUR_Msk                      (0x1U << I2SC_SR_TXUR_Pos)                     /**< (I2SC_SR) Transmit Underrun Mask */
#define I2SC_SR_RXORCH_Pos                    (8)                                            /**< (I2SC_SR) Receive Overrun Channel Position */
#define I2SC_SR_RXORCH_Msk                    (0x3U << I2SC_SR_RXORCH_Pos)                   /**< (I2SC_SR) Receive Overrun Channel Mask */
#define I2SC_SR_RXORCH(value)                 (I2SC_SR_RXORCH_Msk & ((value) << I2SC_SR_RXORCH_Pos))
#define I2SC_SR_TXURCH_Pos                    (20)                                           /**< (I2SC_SR) Transmit Underrun Channel Position */
#define I2SC_SR_TXURCH_Msk                    (0x3U << I2SC_SR_TXURCH_Pos)                   /**< (I2SC_SR) Transmit Underrun Channel Mask */
#define I2SC_SR_TXURCH(value)                 (I2SC_SR_TXURCH_Msk & ((value) << I2SC_SR_TXURCH_Pos))
#define I2SC_SR_Msk                           (0x00300377UL)                                 /**< (I2SC_SR) Register Mask  */

/* -------- I2SC_SCR : (I2SC Offset: 0x0c) (/W 32) Status Clear Register -------- */

typedef union
{
  struct
  {
    uint32_t :2;                        /**< bit:   0..1  Reserved                                      */
    uint32_t RXOR:1;                    /**< bit:      2  Receive Overrun Status Clear                  */
    uint32_t :3;                        /**< bit:   3..5  Reserved                                      */
    uint32_t TXUR:1;                    /**< bit:      6  Transmit Underrun Status Clear                */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t RXORCH:2;                  /**< bit:   8..9  Receive Overrun Per Channel Status Clear      */
    uint32_t :10;                       /**< bit: 10..19  Reserved                                      */
    uint32_t TXURCH:2;                  /**< bit: 20..21  Transmit Underrun Per Channel Status Clear    */
    uint32_t :10;                       /**< bit: 22..31  Reserved                                      */
  };
  uint32_t w;
} __I2SC_SCR_bits_t;

#define I2SC_SCR_RXOR_Pos                     (2)                                            /**< (I2SC_SCR) Receive Overrun Status Clear Position */
#define I2SC_SCR_RXOR_Msk                     (0x1U << I2SC_SCR_RXOR_Pos)                    /**< (I2SC_SCR) Receive Overrun Status Clear Mask */
#define I2SC_SCR_TXUR_Pos                     (6)                                            /**< (I2SC_SCR) Transmit Underrun Status Clear Position */
#define I2SC_SCR_TXUR_Msk                     (0x1U << I2SC_SCR_TXUR_Pos)                    /**< (I2SC_SCR) Transmit Underrun Status Clear Mask */
#define I2SC_SCR_RXORCH_Pos                   (8)                                            /**< (I2SC_SCR) Receive Overrun Per Channel Status Clear Position */
#define I2SC_SCR_RXORCH_Msk                   (0x3U << I2SC_SCR_RXORCH_Pos)                  /**< (I2SC_SCR) Receive Overrun Per Channel Status Clear Mask */
#define I2SC_SCR_RXORCH(value)                (I2SC_SCR_RXORCH_Msk & ((value) << I2SC_SCR_RXORCH_Pos))
#define I2SC_SCR_TXURCH_Pos                   (20)                                           /**< (I2SC_SCR) Transmit Underrun Per Channel Status Clear Position */
#define I2SC_SCR_TXURCH_Msk                   (0x3U << I2SC_SCR_TXURCH_Pos)                  /**< (I2SC_SCR) Transmit Underrun Per Channel Status Clear Mask */
#define I2SC_SCR_TXURCH(value)                (I2SC_SCR_TXURCH_Msk & ((value) << I2SC_SCR_TXURCH_Pos))
#define I2SC_SCR_Msk                          (0x00300344UL)                                 /**< (I2SC_SCR) Register Mask  */

/* -------- I2SC_SSR : (I2SC Offset: 0x10) (/W 32) Status Set Register -------- */

typedef union
{
  struct
  {
    uint32_t :2;                        /**< bit:   0..1  Reserved                                      */
    uint32_t RXOR:1;                    /**< bit:      2  Receive Overrun Status Set                    */
    uint32_t :3;                        /**< bit:   3..5  Reserved                                      */
    uint32_t TXUR:1;                    /**< bit:      6  Transmit Underrun Status Set                  */
    uint32_t :1;                        /**< bit:      7  Reserved                                      */
    uint32_t RXORCH:2;                  /**< bit:   8..9  Receive Overrun Per Channel Status Set        */
    uint32_t :10;                       /**< bit: 10..19  Reserved                                      */
    uint32_t TXURCH:2;                  /**< bit: 20..21  Transmit Underrun Per Channel Status Set      */
    uint32_t :10;                       /**< bit: 22..31  Reserved                                      */
  };
  uint32_t w;
} __I2SC_SSR_bits_t;

#define I2SC_SSR_RXOR_Pos                     (2)                                            /**< (I2SC_SSR) Receive Overrun Status Set Position */
#define I2SC_SSR_RXOR_Msk                     (0x1U << I2SC_SSR_RXOR_Pos)                    /**< (I2SC_SSR) Receive Overrun Status Set Mask */
#define I2SC_SSR_TXUR_Pos                     (6)                                            /**< (I2SC_SSR) Transmit Underrun Status Set Position */
#define I2SC_SSR_TXUR_Msk                     (0x1U << I2SC_SSR_TXUR_Pos)                    /**< (I2SC_SSR) Transmit Underrun Status Set Mask */
#define I2SC_SSR_RXORCH_Pos                   (8)                                            /**< (I2SC_SSR) Receive Overrun Per Channel Status Set Position */
#define I2SC_SSR_RXORCH_Msk                   (0x3U << I2SC_SSR_RXORCH_Pos)                  /**< (I2SC_SSR) Receive Overrun Per Channel Status Set Mask */
#define I2SC_SSR_RXORCH(value)                (I2SC_SSR_RXORCH_Msk & ((value) << I2SC_SSR_RXORCH_Pos))
#define I2SC_SSR_TXURCH_Pos                   (20)                                           /**< (I2SC_SSR) Transmit Underrun Per Channel Status Set Position */
#define I2SC_SSR_TXURCH_Msk                   (0x3U << I2SC_SSR_TXURCH_Pos)                  /**< (I2SC_SSR) Transmit Underrun Per Channel Status Set Mask */
#define I2SC_SSR_TXURCH(value)                (I2SC_SSR_TXURCH_Msk & ((value) << I2SC_SSR_TXURCH_Pos))
#define I2SC_SSR_Msk                          (0x00300344UL)                                 /**< (I2SC_SSR) Register Mask  */

/* -------- I2SC_IER : (I2SC Offset: 0x14) (/W 32) Interrupt Enable Register -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t RXRDY:1;                   /**< bit:      1  Receiver Ready Interrupt Enable               */
    uint32_t RXOR:1;                    /**< bit:      2  Receiver Overrun Interrupt Enable             */
    uint32_t :2;                        /**< bit:   3..4  Reserved                                      */
    uint32_t TXRDY:1;                   /**< bit:      5  Transmit Ready Interrupt Enable               */
    uint32_t TXUR:1;                    /**< bit:      6  Transmit Underflow Interrupt Enable           */
    uint32_t :25;                       /**< bit:  7..31  Reserved                                      */
  };
  uint32_t w;
} __I2SC_IER_bits_t;

#define I2SC_IER_RXRDY_Pos                    (1)                                            /**< (I2SC_IER) Receiver Ready Interrupt Enable Position */
#define I2SC_IER_RXRDY_Msk                    (0x1U << I2SC_IER_RXRDY_Pos)                   /**< (I2SC_IER) Receiver Ready Interrupt Enable Mask */
#define I2SC_IER_RXOR_Pos                     (2)                                            /**< (I2SC_IER) Receiver Overrun Interrupt Enable Position */
#define I2SC_IER_RXOR_Msk                     (0x1U << I2SC_IER_RXOR_Pos)                    /**< (I2SC_IER) Receiver Overrun Interrupt Enable Mask */
#define I2SC_IER_TXRDY_Pos                    (5)                                            /**< (I2SC_IER) Transmit Ready Interrupt Enable Position */
#define I2SC_IER_TXRDY_Msk                    (0x1U << I2SC_IER_TXRDY_Pos)                   /**< (I2SC_IER) Transmit Ready Interrupt Enable Mask */
#define I2SC_IER_TXUR_Pos                     (6)                                            /**< (I2SC_IER) Transmit Underflow Interrupt Enable Position */
#define I2SC_IER_TXUR_Msk                     (0x1U << I2SC_IER_TXUR_Pos)                    /**< (I2SC_IER) Transmit Underflow Interrupt Enable Mask */
#define I2SC_IER_Msk                          (0x00000066UL)                                 /**< (I2SC_IER) Register Mask  */

/* -------- I2SC_IDR : (I2SC Offset: 0x18) (/W 32) Interrupt Disable Register -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t RXRDY:1;                   /**< bit:      1  Receiver Ready Interrupt Disable              */
    uint32_t RXOR:1;                    /**< bit:      2  Receiver Overrun Interrupt Disable            */
    uint32_t :2;                        /**< bit:   3..4  Reserved                                      */
    uint32_t TXRDY:1;                   /**< bit:      5  Transmit Ready Interrupt Disable              */
    uint32_t TXUR:1;                    /**< bit:      6  Transmit Underflow Interrupt Disable          */
    uint32_t :25;                       /**< bit:  7..31  Reserved                                      */
  };
  uint32_t w;
} __I2SC_IDR_bits_t;

#define I2SC_IDR_RXRDY_Pos                    (1)                                            /**< (I2SC_IDR) Receiver Ready Interrupt Disable Position */
#define I2SC_IDR_RXRDY_Msk                    (0x1U << I2SC_IDR_RXRDY_Pos)                   /**< (I2SC_IDR) Receiver Ready Interrupt Disable Mask */
#define I2SC_IDR_RXOR_Pos                     (2)                                            /**< (I2SC_IDR) Receiver Overrun Interrupt Disable Position */
#define I2SC_IDR_RXOR_Msk                     (0x1U << I2SC_IDR_RXOR_Pos)                    /**< (I2SC_IDR) Receiver Overrun Interrupt Disable Mask */
#define I2SC_IDR_TXRDY_Pos                    (5)                                            /**< (I2SC_IDR) Transmit Ready Interrupt Disable Position */
#define I2SC_IDR_TXRDY_Msk                    (0x1U << I2SC_IDR_TXRDY_Pos)                   /**< (I2SC_IDR) Transmit Ready Interrupt Disable Mask */
#define I2SC_IDR_TXUR_Pos                     (6)                                            /**< (I2SC_IDR) Transmit Underflow Interrupt Disable Position */
#define I2SC_IDR_TXUR_Msk                     (0x1U << I2SC_IDR_TXUR_Pos)                    /**< (I2SC_IDR) Transmit Underflow Interrupt Disable Mask */
#define I2SC_IDR_Msk                          (0x00000066UL)                                 /**< (I2SC_IDR) Register Mask  */

/* -------- I2SC_IMR : (I2SC Offset: 0x1c) (R/ 32) Interrupt Mask Register -------- */

typedef union
{
  struct
  {
    uint32_t :1;                        /**< bit:      0  Reserved                                      */
    uint32_t RXRDY:1;                   /**< bit:      1  Receiver Ready Interrupt Disable              */
    uint32_t RXOR:1;                    /**< bit:      2  Receiver Overrun Interrupt Disable            */
    uint32_t :2;                        /**< bit:   3..4  Reserved                                      */
    uint32_t TXRDY:1;                   /**< bit:      5  Transmit Ready Interrupt Disable              */
    uint32_t TXUR:1;                    /**< bit:      6  Transmit Underflow Interrupt Disable          */
    uint32_t :25;                       /**< bit:  7..31  Reserved                                      */
  };
  uint32_t w;
} __I2SC_IMR_bits_t;

#define I2SC_IMR_RXRDY_Pos                    (1)                                            /**< (I2SC_IMR) Receiver Ready Interrupt Disable Position */
#define I2SC_IMR_RXRDY_Msk                    (0x1U << I2SC_IMR_RXRDY_Pos)                   /**< (I2SC_IMR) Receiver Ready Interrupt Disable Mask */
#define I2SC_IMR_RXOR_Pos                     (2)                                            /**< (I2SC_IMR) Receiver Overrun Interrupt Disable Position */
#define I2SC_IMR_RXOR_Msk                     (0x1U << I2SC_IMR_RXOR_Pos)                    /**< (I2SC_IMR) Receiver Overrun Interrupt Disable Mask */
#define I2SC_IMR_TXRDY_Pos                    (5)                                            /**< (I2SC_IMR) Transmit Ready Interrupt Disable Position */
#define I2SC_IMR_TXRDY_Msk                    (0x1U << I2SC_IMR_TXRDY_Pos)                   /**< (I2SC_IMR) Transmit Ready Interrupt Disable Mask */
#define I2SC_IMR_TXUR_Pos                     (6)                                            /**< (I2SC_IMR) Transmit Underflow Interrupt Disable Position */
#define I2SC_IMR_TXUR_Msk                     (0x1U << I2SC_IMR_TXUR_Pos)                    /**< (I2SC_IMR) Transmit Underflow Interrupt Disable Mask */
#define I2SC_IMR_Msk                          (0x00000066UL)                                 /**< (I2SC_IMR) Register Mask  */

/* -------- I2SC_RHR : (I2SC Offset: 0x20) (R/ 32) Receiver Holding Register -------- */

typedef union
{
  struct
  {
    uint32_t RHR:32;                    /**< bit:  0..31  Receiver Holding Register                     */
  };
  uint32_t w;
} __I2SC_RHR_bits_t;

#define I2SC_RHR_RHR_Pos                      (0)                                            /**< (I2SC_RHR) Receiver Holding Register Position */
#define I2SC_RHR_RHR_Msk                      (0xFFFFFFFFU << I2SC_RHR_RHR_Pos)              /**< (I2SC_RHR) Receiver Holding Register Mask */
#define I2SC_RHR_RHR(value)                   (I2SC_RHR_RHR_Msk & ((value) << I2SC_RHR_RHR_Pos))
#define I2SC_RHR_Msk                          (0xFFFFFFFFUL)                                 /**< (I2SC_RHR) Register Mask  */

/* -------- I2SC_THR : (I2SC Offset: 0x24) (/W 32) Transmitter Holding Register -------- */

typedef union
{
  struct
  {
    uint32_t THR:32;                    /**< bit:  0..31  Transmitter Holding Register                  */
  };
  uint32_t w;
} __I2SC_THR_bits_t;

#define I2SC_THR_THR_Pos                      (0)                                            /**< (I2SC_THR) Transmitter Holding Register Position */
#define I2SC_THR_THR_Msk                      (0xFFFFFFFFU << I2SC_THR_THR_Pos)              /**< (I2SC_THR) Transmitter Holding Register Mask */
#define I2SC_THR_THR(value)                   (I2SC_THR_THR_Msk & ((value) << I2SC_THR_THR_Pos))
#define I2SC_THR_Msk                          (0xFFFFFFFFUL)                                 /**< (I2SC_THR) Register Mask  */

/** \brief I2SC register offsets definitions */
#define I2SC_CR_OFFSET               (0x00)         /**< (I2SC_CR) Control Register Offset */
#define I2SC_MR_OFFSET               (0x04)         /**< (I2SC_MR) Mode Register Offset */
#define I2SC_SR_OFFSET               (0x08)         /**< (I2SC_SR) Status Register Offset */
#define I2SC_SCR_OFFSET              (0x0C)         /**< (I2SC_SCR) Status Clear Register Offset */
#define I2SC_SSR_OFFSET              (0x10)         /**< (I2SC_SSR) Status Set Register Offset */
#define I2SC_IER_OFFSET              (0x14)         /**< (I2SC_IER) Interrupt Enable Register Offset */
#define I2SC_IDR_OFFSET              (0x18)         /**< (I2SC_IDR) Interrupt Disable Register Offset */
#define I2SC_IMR_OFFSET              (0x1C)         /**< (I2SC_IMR) Interrupt Mask Register Offset */
#define I2SC_RHR_OFFSET              (0x20)         /**< (I2SC_RHR) Receiver Holding Register Offset */
#define I2SC_THR_OFFSET              (0x24)         /**< (I2SC_THR) Transmitter Holding Register Offset */

/** \brief I2SC register API structure */
typedef struct
{
  __O   __I2SC_CR_bits_t               I2SC_CR;       /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  __I2SC_MR_bits_t               I2SC_MR;       /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   __I2SC_SR_bits_t               I2SC_SR;       /**< Offset: 0x08 (R/   32) Status Register */
  __O   __I2SC_SCR_bits_t              I2SC_SCR;      /**< Offset: 0x0C ( /W  32) Status Clear Register */
  __O   __I2SC_SSR_bits_t              I2SC_SSR;      /**< Offset: 0x10 ( /W  32) Status Set Register */
  __O   __I2SC_IER_bits_t              I2SC_IER;      /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O   __I2SC_IDR_bits_t              I2SC_IDR;      /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __I   __I2SC_IMR_bits_t              I2SC_IMR;      /**< Offset: 0x1C (R/   32) Interrupt Mask Register */
  __I   __I2SC_RHR_bits_t              I2SC_RHR;      /**< Offset: 0x20 (R/   32) Receiver Holding Register */
  __O   __I2SC_THR_bits_t              I2SC_THR;      /**< Offset: 0x24 ( /W  32) Transmitter Holding Register */
} i2sc_registers_t;
/** @}  end of Inter-IC Sound Controller */

#endif /* _PIC32CZ_CA70_I2SC_COMPONENT_H_ */
