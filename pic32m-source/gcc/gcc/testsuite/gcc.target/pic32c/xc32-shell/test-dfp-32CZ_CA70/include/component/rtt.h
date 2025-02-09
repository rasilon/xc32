/**
 * \brief Component description for PIC32CZ/CA70 RTT
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
#ifndef _PIC32CZ_CA70_RTT_COMPONENT_H_
#define _PIC32CZ_CA70_RTT_COMPONENT_H_

/** \addtogroup PIC32CZ_CA70_RTT Real-time Timer
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR RTT */
/* ========================================================================== */

/* -------- RTT_MR : (RTT Offset: 0x00) (R/W 32) Mode Register -------- */

typedef union
{
  struct
  {
    uint32_t RTPRES:16;                 /**< bit:  0..15  Real-time Timer Prescaler Value               */
    uint32_t ALMIEN:1;                  /**< bit:     16  Alarm Interrupt Enable                        */
    uint32_t RTTINCIEN:1;               /**< bit:     17  Real-time Timer Increment Interrupt Enable    */
    uint32_t RTTRST:1;                  /**< bit:     18  Real-time Timer Restart                       */
    uint32_t :1;                        /**< bit:     19  Reserved                                      */
    uint32_t RTTDIS:1;                  /**< bit:     20  Real-time Timer Disable                       */
    uint32_t :3;                        /**< bit: 21..23  Reserved                                      */
    uint32_t RTC1HZ:1;                  /**< bit:     24  Real-Time Clock 1Hz Clock Selection           */
    uint32_t :7;                        /**< bit: 25..31  Reserved                                      */
  };
  uint32_t w;
} __RTT_MR_bits_t;

#define RTT_MR_RTPRES_Pos                     (0)                                            /**< (RTT_MR) Real-time Timer Prescaler Value Position */
#define RTT_MR_RTPRES_Msk                     (0xFFFFU << RTT_MR_RTPRES_Pos)                 /**< (RTT_MR) Real-time Timer Prescaler Value Mask */
#define RTT_MR_RTPRES(value)                  (RTT_MR_RTPRES_Msk & ((value) << RTT_MR_RTPRES_Pos))
#define RTT_MR_ALMIEN_Pos                     (16)                                           /**< (RTT_MR) Alarm Interrupt Enable Position */
#define RTT_MR_ALMIEN_Msk                     (0x1U << RTT_MR_ALMIEN_Pos)                    /**< (RTT_MR) Alarm Interrupt Enable Mask */
#define RTT_MR_RTTINCIEN_Pos                  (17)                                           /**< (RTT_MR) Real-time Timer Increment Interrupt Enable Position */
#define RTT_MR_RTTINCIEN_Msk                  (0x1U << RTT_MR_RTTINCIEN_Pos)                 /**< (RTT_MR) Real-time Timer Increment Interrupt Enable Mask */
#define RTT_MR_RTTRST_Pos                     (18)                                           /**< (RTT_MR) Real-time Timer Restart Position */
#define RTT_MR_RTTRST_Msk                     (0x1U << RTT_MR_RTTRST_Pos)                    /**< (RTT_MR) Real-time Timer Restart Mask */
#define RTT_MR_RTTDIS_Pos                     (20)                                           /**< (RTT_MR) Real-time Timer Disable Position */
#define RTT_MR_RTTDIS_Msk                     (0x1U << RTT_MR_RTTDIS_Pos)                    /**< (RTT_MR) Real-time Timer Disable Mask */
#define RTT_MR_RTC1HZ_Pos                     (24)                                           /**< (RTT_MR) Real-Time Clock 1Hz Clock Selection Position */
#define RTT_MR_RTC1HZ_Msk                     (0x1U << RTT_MR_RTC1HZ_Pos)                    /**< (RTT_MR) Real-Time Clock 1Hz Clock Selection Mask */
#define RTT_MR_Msk                            (0x0117FFFFUL)                                 /**< (RTT_MR) Register Mask  */

/* -------- RTT_AR : (RTT Offset: 0x04) (R/W 32) Alarm Register -------- */

typedef union
{
  struct
  {
    uint32_t ALMV:32;                   /**< bit:  0..31  Alarm Value                                   */
  };
  uint32_t w;
} __RTT_AR_bits_t;

#define RTT_AR_ALMV_Pos                       (0)                                            /**< (RTT_AR) Alarm Value Position */
#define RTT_AR_ALMV_Msk                       (0xFFFFFFFFU << RTT_AR_ALMV_Pos)               /**< (RTT_AR) Alarm Value Mask */
#define RTT_AR_ALMV(value)                    (RTT_AR_ALMV_Msk & ((value) << RTT_AR_ALMV_Pos))
#define RTT_AR_Msk                            (0xFFFFFFFFUL)                                 /**< (RTT_AR) Register Mask  */

/* -------- RTT_VR : (RTT Offset: 0x08) (R/ 32) Value Register -------- */

typedef union
{
  struct
  {
    uint32_t CRTV:32;                   /**< bit:  0..31  Current Real-time Value                       */
  };
  uint32_t w;
} __RTT_VR_bits_t;

#define RTT_VR_CRTV_Pos                       (0)                                            /**< (RTT_VR) Current Real-time Value Position */
#define RTT_VR_CRTV_Msk                       (0xFFFFFFFFU << RTT_VR_CRTV_Pos)               /**< (RTT_VR) Current Real-time Value Mask */
#define RTT_VR_CRTV(value)                    (RTT_VR_CRTV_Msk & ((value) << RTT_VR_CRTV_Pos))
#define RTT_VR_Msk                            (0xFFFFFFFFUL)                                 /**< (RTT_VR) Register Mask  */

/* -------- RTT_SR : (RTT Offset: 0x0c) (R/ 32) Status Register -------- */

typedef union
{
  struct
  {
    uint32_t ALMS:1;                    /**< bit:      0  Real-time Alarm Status (cleared on read)      */
    uint32_t RTTINC:1;                  /**< bit:      1  Prescaler Roll-over Status (cleared on read)  */
    uint32_t :30;                       /**< bit:  2..31  Reserved                                      */
  };
  uint32_t w;
} __RTT_SR_bits_t;

#define RTT_SR_ALMS_Pos                       (0)                                            /**< (RTT_SR) Real-time Alarm Status (cleared on read) Position */
#define RTT_SR_ALMS_Msk                       (0x1U << RTT_SR_ALMS_Pos)                      /**< (RTT_SR) Real-time Alarm Status (cleared on read) Mask */
#define RTT_SR_RTTINC_Pos                     (1)                                            /**< (RTT_SR) Prescaler Roll-over Status (cleared on read) Position */
#define RTT_SR_RTTINC_Msk                     (0x1U << RTT_SR_RTTINC_Pos)                    /**< (RTT_SR) Prescaler Roll-over Status (cleared on read) Mask */
#define RTT_SR_Msk                            (0x00000003UL)                                 /**< (RTT_SR) Register Mask  */

/** \brief RTT register offsets definitions */
#define RTT_MR_OFFSET                (0x00)         /**< (RTT_MR) Mode Register Offset */
#define RTT_AR_OFFSET                (0x04)         /**< (RTT_AR) Alarm Register Offset */
#define RTT_VR_OFFSET                (0x08)         /**< (RTT_VR) Value Register Offset */
#define RTT_SR_OFFSET                (0x0C)         /**< (RTT_SR) Status Register Offset */

/** \brief RTT register API structure */
typedef struct
{
  __IO  __RTT_MR_bits_t                RTT_MR;        /**< Offset: 0x00 (R/W  32) Mode Register */
  __IO  __RTT_AR_bits_t                RTT_AR;        /**< Offset: 0x04 (R/W  32) Alarm Register */
  __I   __RTT_VR_bits_t                RTT_VR;        /**< Offset: 0x08 (R/   32) Value Register */
  __I   __RTT_SR_bits_t                RTT_SR;        /**< Offset: 0x0C (R/   32) Status Register */
} rtt_registers_t;
/** @}  end of Real-time Timer */

#endif /* _PIC32CZ_CA70_RTT_COMPONENT_H_ */
