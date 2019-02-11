/*
* hw_hdmi_wp.h
*
* Register-level header file for HDMI_WP
*
* Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
*
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*    Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/
#ifndef HW_HDMI_WP_H_
#define HW_HDMI_WP_H_

#ifdef __cplusplus
extern "C"
{
#endif


/****************************************************************************************************
* Register Definitions
****************************************************************************************************/
#define HDMI_WP_REVISION                                        (0x0U)
#define HDMI_WP_SYSCONFIG                                       (0x10U)
#define HDMI_WP_IRQ_EOI                                         (0x20U)
#define HDMI_WP_IRQSTATUS_RAW                                   (0x24U)
#define HDMI_WP_IRQSTATUS                                       (0x28U)
#define HDMI_WP_IRQENABLE_SET                                   (0x2cU)
#define HDMI_WP_IRQENABLE_CLR                                   (0x30U)
#define HDMI_WP_IRQWAKEEN                                       (0x34U)
#define HDMI_WP_PWR_CTRL                                        (0x40U)
#define HDMI_WP_DEBOUNCE                                        (0x44U)
#define HDMI_WP_VIDEO_CFG                                       (0x50U)
#define HDMI_WP_VIDEO_SIZE                                      (0x60U)
#define HDMI_WP_VIDEO_TIMING_H                                  (0x68U)
#define HDMI_WP_VIDEO_TIMING_V                                  (0x6cU)
#define HDMI_WP_CLK                                             (0x70U)
#define HDMI_WP_AUDIO_CFG                                       (0x80U)
#define HDMI_WP_AUDIO_CFG2                                      (0x84U)
#define HDMI_WP_AUDIO_CTRL                                      (0x88U)
#define HDMI_WP_AUDIO_DATA                                      (0x8cU)
#define HDMI_WP_DEBUG_CFG                                       (0x90U)
#define HDMI_WP_DEBUG_DATA                                      (0x94U)


/****************************************************************************************************
* Field Definition Macros
****************************************************************************************************/

#define HDMI_WP_REVISION_MINOR_SHIFT                            (0U)
#define HDMI_WP_REVISION_MINOR_MASK                             (0x0000003fU)

#define HDMI_WP_REVISION_CUSTOM_SHIFT                           (6U)
#define HDMI_WP_REVISION_CUSTOM_MASK                            (0x000000c0U)

#define HDMI_WP_REVISION_MAJOR_SHIFT                            (8U)
#define HDMI_WP_REVISION_MAJOR_MASK                             (0x00000700U)

#define HDMI_WP_REVISION_RTL_SHIFT                              (11U)
#define HDMI_WP_REVISION_RTL_MASK                               (0x0000f800U)

#define HDMI_WP_REVISION_FUNC_SHIFT                             (16U)
#define HDMI_WP_REVISION_FUNC_MASK                              (0x0fff0000U)

#define HDMI_WP_REVISION_SCHEME_SHIFT                           (30U)
#define HDMI_WP_REVISION_SCHEME_MASK                            (0xc0000000U)

#define HDMI_WP_SYSCONFIG_SOFTRESET_SHIFT                       (0U)
#define HDMI_WP_SYSCONFIG_SOFTRESET_MASK                        (0x00000001U)

#define HDMI_WP_SYSCONFIG_IDLEMODE_SHIFT                        (2U)
#define HDMI_WP_SYSCONFIG_IDLEMODE_MASK                         (0x0000000cU)
#define HDMI_WP_SYSCONFIG_IDLEMODE_0X0                           (0U)
#define HDMI_WP_SYSCONFIG_IDLEMODE_0X1                           (1U)
#define HDMI_WP_SYSCONFIG_IDLEMODE_0X2                           (2U)
#define HDMI_WP_SYSCONFIG_IDLEMODE_0X3                           (3U)

#define HDMI_WP_IRQ_EOI_LINE_NUMBER_SHIFT                       (0U)
#define HDMI_WP_IRQ_EOI_LINE_NUMBER_MASK                        (0x00000001U)
#define HDMI_WP_IRQ_EOI_LINE_NUMBER_EOI0                         (0U)
#define HDMI_WP_IRQ_EOI_LINE_NUMBER_READ0                        (0U)

#define HDMI_WP_IRQSTATUS_RAW_PLL_LOCK_INTR_SHIFT               (29U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_LOCK_INTR_MASK                (0x20000000U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_LOCK_INTR_NOACTION             (0U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_LOCK_INTR_SET_EVENT            (1U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_LOCK_INTR_NONE                 (0U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_LOCK_INTR_PENDING              (1U)

#define HDMI_WP_IRQSTATUS_RAW_PLL_UNLOCK_INTR_SHIFT             (30U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_UNLOCK_INTR_MASK              (0x40000000U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_UNLOCK_INTR_NOACTION           (0U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_UNLOCK_INTR_SET_EVENT          (1U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_UNLOCK_INTR_NONE               (0U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_UNLOCK_INTR_PENDING            (1U)

#define HDMI_WP_IRQSTATUS_RAW_PLL_RECAL_INTR_SHIFT              (31U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_RECAL_INTR_MASK               (0x80000000U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_RECAL_INTR_NOACTION            (0U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_RECAL_INTR_SET_EVENT           (1U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_RECAL_INTR_NONE                (0U)
#define HDMI_WP_IRQSTATUS_RAW_PLL_RECAL_INTR_PENDING             (1U)

#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_UNDERFLOW_INTR_SHIFT   (8U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_UNDERFLOW_INTR_MASK    (0x00000100U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_UNDERFLOW_INTR_NOACTION  (0U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_UNDERFLOW_INTR_SET_EVENT  (1U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_UNDERFLOW_INTR_NONE     (0U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_UNDERFLOW_INTR_PENDING  (1U)

#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_OVERFLOW_INTR_SHIFT    (9U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_OVERFLOW_INTR_MASK     (0x00000200U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_OVERFLOW_INTR_NOACTION  (0U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_OVERFLOW_INTR_SET_EVENT  (1U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_OVERFLOW_INTR_NONE      (0U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_OVERFLOW_INTR_PENDING   (1U)

#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_SAMPLE_REQ_INTR_SHIFT  (10U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_SAMPLE_REQ_INTR_MASK   (0x00000400U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_SAMPLE_REQ_INTR_NOACTION  (0U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_SAMPLE_REQ_INTR_SET_EVENT  (1U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_SAMPLE_REQ_INTR_NONE    (0U)
#define HDMI_WP_IRQSTATUS_RAW_AUDIO_FIFO_SAMPLE_REQ_INTR_PENDING  (1U)

#define HDMI_WP_IRQSTATUS_RAW_PHY_LINE5VSHORT_ASSERTED_INTR_SHIFT  (24U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINE5VSHORT_ASSERTED_INTR_MASK  (0x01000000U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINE5VSHORT_ASSERTED_INTR_NOACTION  (0U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINE5VSHORT_ASSERTED_INTR_SET_EVENT  (1U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINE5VSHORT_ASSERTED_INTR_NONE  (0U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINE5VSHORT_ASSERTED_INTR_PENDING  (1U)

#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_CONNECT_INTR_SHIFT       (25U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_CONNECT_INTR_MASK        (0x02000000U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_CONNECT_INTR_NOACTION     (0U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_CONNECT_INTR_SET_EVENT    (1U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_CONNECT_INTR_NONE         (0U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_CONNECT_INTR_PENDING      (1U)

#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_DISCONNECT_INTR_SHIFT    (26U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_DISCONNECT_INTR_MASK     (0x04000000U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_DISCONNECT_INTR_NOACTION  (0U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_DISCONNECT_INTR_SET_EVENT  (1U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_DISCONNECT_INTR_NONE      (0U)
#define HDMI_WP_IRQSTATUS_RAW_PHY_LINK_DISCONNECT_INTR_PENDING   (1U)

#define HDMI_WP_IRQSTATUS_RAW_VIDEO_VSYNC_INTR_SHIFT            (16U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_VSYNC_INTR_MASK             (0x00010000U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_VSYNC_INTR_NOACTION          (0U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_VSYNC_INTR_SET_EVENT         (1U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_VSYNC_INTR_NONE              (0U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_VSYNC_INTR_PENDING           (1U)

#define HDMI_WP_IRQSTATUS_RAW_VIDEO_END_FRAME_INTR_SHIFT        (17U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_END_FRAME_INTR_MASK         (0x00020000U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_END_FRAME_INTR_NOACTION      (0U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_END_FRAME_INTR_SET_EVENT     (1U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_END_FRAME_INTR_NONE          (0U)
#define HDMI_WP_IRQSTATUS_RAW_VIDEO_END_FRAME_INTR_PENDING       (1U)

#define HDMI_WP_IRQSTATUS_RAW_OCP_TIME_OUT_INTR_SHIFT           (4U)
#define HDMI_WP_IRQSTATUS_RAW_OCP_TIME_OUT_INTR_MASK            (0x00000010U)
#define HDMI_WP_IRQSTATUS_RAW_OCP_TIME_OUT_INTR_NOACTION         (0U)
#define HDMI_WP_IRQSTATUS_RAW_OCP_TIME_OUT_INTR_SET_EVENT        (1U)
#define HDMI_WP_IRQSTATUS_RAW_OCP_TIME_OUT_INTR_NONE             (0U)
#define HDMI_WP_IRQSTATUS_RAW_OCP_TIME_OUT_INTR_PENDING          (1U)

#define HDMI_WP_IRQSTATUS_RAW_CORE_INTR_SHIFT                   (0U)
#define HDMI_WP_IRQSTATUS_RAW_CORE_INTR_MASK                    (0x00000001U)
#define HDMI_WP_IRQSTATUS_RAW_CORE_INTR_NOACTION                 (0U)
#define HDMI_WP_IRQSTATUS_RAW_CORE_INTR_SET_EVENT                (1U)
#define HDMI_WP_IRQSTATUS_RAW_CORE_INTR_NONE                     (0U)
#define HDMI_WP_IRQSTATUS_RAW_CORE_INTR_PENDING                  (1U)

#define HDMI_WP_IRQSTATUS_PLL_LOCK_INTR_SHIFT                   (29U)
#define HDMI_WP_IRQSTATUS_PLL_LOCK_INTR_MASK                    (0x20000000U)
#define HDMI_WP_IRQSTATUS_PLL_LOCK_INTR_NOACTION                 (0U)
#define HDMI_WP_IRQSTATUS_PLL_LOCK_INTR_CLEAR                    (1U)
#define HDMI_WP_IRQSTATUS_PLL_LOCK_INTR_NONE                     (0U)
#define HDMI_WP_IRQSTATUS_PLL_LOCK_INTR_PENDING                  (1U)

#define HDMI_WP_IRQSTATUS_PLL_UNLOCK_INTR_SHIFT                 (30U)
#define HDMI_WP_IRQSTATUS_PLL_UNLOCK_INTR_MASK                  (0x40000000U)
#define HDMI_WP_IRQSTATUS_PLL_UNLOCK_INTR_NOACTION               (0U)
#define HDMI_WP_IRQSTATUS_PLL_UNLOCK_INTR_CLEAR                  (1U)
#define HDMI_WP_IRQSTATUS_PLL_UNLOCK_INTR_NONE                   (0U)
#define HDMI_WP_IRQSTATUS_PLL_UNLOCK_INTR_PENDING                (1U)

#define HDMI_WP_IRQSTATUS_PLL_RECAL_INTR_SHIFT                  (31U)
#define HDMI_WP_IRQSTATUS_PLL_RECAL_INTR_MASK                   (0x80000000U)
#define HDMI_WP_IRQSTATUS_PLL_RECAL_INTR_NOACTION                (0U)
#define HDMI_WP_IRQSTATUS_PLL_RECAL_INTR_CLEAR                   (1U)
#define HDMI_WP_IRQSTATUS_PLL_RECAL_INTR_NONE                    (0U)
#define HDMI_WP_IRQSTATUS_PLL_RECAL_INTR_PENDING                 (1U)

#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_UNDERFLOW_INTR_SHIFT       (8U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_UNDERFLOW_INTR_MASK        (0x00000100U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_UNDERFLOW_INTR_NOACTION     (0U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_UNDERFLOW_INTR_CLEAR        (1U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_UNDERFLOW_INTR_NONE         (0U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_UNDERFLOW_INTR_PENDING      (1U)

#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_OVERFLOW_INTR_SHIFT        (9U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_OVERFLOW_INTR_MASK         (0x00000200U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_OVERFLOW_INTR_NOACTION      (0U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_OVERFLOW_INTR_CLEAR         (1U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_OVERFLOW_INTR_NONE          (0U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_OVERFLOW_INTR_PENDING       (1U)

#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_SAMPLE_REQ_INTR_SHIFT      (10U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_SAMPLE_REQ_INTR_MASK       (0x00000400U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_SAMPLE_REQ_INTR_NOACTION    (0U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_SAMPLE_REQ_INTR_CLEAR       (1U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_SAMPLE_REQ_INTR_NONE        (0U)
#define HDMI_WP_IRQSTATUS_AUDIO_FIFO_SAMPLE_REQ_INTR_PENDING     (1U)

#define HDMI_WP_IRQSTATUS_PHY_LINE5VSHORT_ASSERTED_INTR_SHIFT   (24U)
#define HDMI_WP_IRQSTATUS_PHY_LINE5VSHORT_ASSERTED_INTR_MASK    (0x01000000U)
#define HDMI_WP_IRQSTATUS_PHY_LINE5VSHORT_ASSERTED_INTR_NOACTION  (0U)
#define HDMI_WP_IRQSTATUS_PHY_LINE5VSHORT_ASSERTED_INTR_CLEAR    (1U)
#define HDMI_WP_IRQSTATUS_PHY_LINE5VSHORT_ASSERTED_INTR_NONE     (0U)
#define HDMI_WP_IRQSTATUS_PHY_LINE5VSHORT_ASSERTED_INTR_PENDING  (1U)

#define HDMI_WP_IRQSTATUS_PHY_LINK_CONNECT_INTR_SHIFT           (25U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_CONNECT_INTR_MASK            (0x02000000U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_CONNECT_INTR_NOACTION         (0U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_CONNECT_INTR_CLEAR            (1U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_CONNECT_INTR_NONE             (0U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_CONNECT_INTR_PENDING          (1U)

#define HDMI_WP_IRQSTATUS_PHY_LINK_DISCONNECT_INTR_SHIFT        (26U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_DISCONNECT_INTR_MASK         (0x04000000U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_DISCONNECT_INTR_NOACTION      (0U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_DISCONNECT_INTR_CLEAR         (1U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_DISCONNECT_INTR_NONE          (0U)
#define HDMI_WP_IRQSTATUS_PHY_LINK_DISCONNECT_INTR_PENDING       (1U)

#define HDMI_WP_IRQSTATUS_VIDEO_VSYNC_INTR_SHIFT                (16U)
#define HDMI_WP_IRQSTATUS_VIDEO_VSYNC_INTR_MASK                 (0x00010000U)
#define HDMI_WP_IRQSTATUS_VIDEO_VSYNC_INTR_NOACTION              (0U)
#define HDMI_WP_IRQSTATUS_VIDEO_VSYNC_INTR_CLEAR                 (1U)
#define HDMI_WP_IRQSTATUS_VIDEO_VSYNC_INTR_NONE                  (0U)
#define HDMI_WP_IRQSTATUS_VIDEO_VSYNC_INTR_PENDING               (1U)

#define HDMI_WP_IRQSTATUS_VIDEO_FRAME_DONE_INTR_SHIFT           (17U)
#define HDMI_WP_IRQSTATUS_VIDEO_FRAME_DONE_INTR_MASK            (0x00020000U)
#define HDMI_WP_IRQSTATUS_VIDEO_FRAME_DONE_INTR_NOACTION         (0U)
#define HDMI_WP_IRQSTATUS_VIDEO_FRAME_DONE_INTR_CLEAR            (1U)
#define HDMI_WP_IRQSTATUS_VIDEO_FRAME_DONE_INTR_NONE             (0U)
#define HDMI_WP_IRQSTATUS_VIDEO_FRAME_DONE_INTR_PENDING          (1U)

#define HDMI_WP_IRQSTATUS_OCP_TIME_OUT_INTR_SHIFT               (4U)
#define HDMI_WP_IRQSTATUS_OCP_TIME_OUT_INTR_MASK                (0x00000010U)
#define HDMI_WP_IRQSTATUS_OCP_TIME_OUT_INTR_NOACTION             (0U)
#define HDMI_WP_IRQSTATUS_OCP_TIME_OUT_INTR_CLEAR                (1U)
#define HDMI_WP_IRQSTATUS_OCP_TIME_OUT_INTR_NONE                 (0U)
#define HDMI_WP_IRQSTATUS_OCP_TIME_OUT_INTR_PENDING              (1U)

#define HDMI_WP_IRQSTATUS_CORE_INTR_SHIFT                       (0U)
#define HDMI_WP_IRQSTATUS_CORE_INTR_MASK                        (0x00000001U)
#define HDMI_WP_IRQSTATUS_CORE_INTR_NOACTION                     (0U)
#define HDMI_WP_IRQSTATUS_CORE_INTR_CLEAR                        (1U)
#define HDMI_WP_IRQSTATUS_CORE_INTR_NONE                         (0U)
#define HDMI_WP_IRQSTATUS_CORE_INTR_PENDING                      (1U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_UNDERFLOW_INTR_SHIFT  (8U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_UNDERFLOW_INTR_MASK  (0x00000100U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_UNDERFLOW_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_UNDERFLOW_INTR   (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_UNDERFLOW_INTR_ENABLED  (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_UNDERFLOW_INTR_DISABLED  (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_LOCK_INTR_SHIFT        (29U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_LOCK_INTR_MASK         (0x20000000U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_LOCK_INTR_NOACTION      (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_LOCK_INTR               (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_LOCK_INTR_ENABLED       (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_LOCK_INTR_DISABLED      (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_UNLOCK_INTR_SHIFT      (30U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_UNLOCK_INTR_MASK       (0x40000000U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_UNLOCK_INTR_NOACTION    (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_UNLOCK_INTR             (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_UNLOCK_INTR_ENABLED     (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_UNLOCK_INTR_DISABLED    (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_RECAL_INTR_SHIFT       (31U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_RECAL_INTR_MASK        (0x80000000U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_RECAL_INTR_NOACTION     (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_RECAL_INTR              (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_RECAL_INTR_ENABLED      (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PLL_RECAL_INTR_DISABLED     (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_OVERFLOW_INTR_SHIFT  (9U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_OVERFLOW_INTR_MASK  (0x00000200U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_OVERFLOW_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_OVERFLOW_INTR    (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_OVERFLOW_INTR_ENABLED  (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_OVERFLOW_INTR_DISABLED  (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_SAMPLE_REQ_INTR_SHIFT  (10U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_SAMPLE_REQ_INTR_MASK  (0x00000400U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_SAMPLE_REQ_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_SAMPLE_REQ_INTR  (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_SAMPLE_REQ_INTR_ENABLED  (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_AUDIO_FIFO_SAMPLE_REQ_INTR_DISABLED  (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINE5VSHORT_ASSERTED_INTR_SHIFT  (24U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINE5VSHORT_ASSERTED_INTR_MASK  (0x01000000U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINE5VSHORT_ASSERTED_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINE5VSHORT_ASSERTED_INTR  (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINE5VSHORT_ASSERTED_INTR_ENABLED  (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINE5VSHORT_ASSERTED_INTR_DISABLED  (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_CONNECT_INTR_SHIFT  (25U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_CONNECT_INTR_MASK  (0x02000000U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_CONNECT_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_CONNECT_INTR       (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_CONNECT_INTR_ENABLED  (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_CONNECT_INTR_DISABLED  (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_DISCONNECT_INTR_SHIFT  (26U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_DISCONNECT_INTR_MASK  (0x04000000U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_DISCONNECT_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_DISCONNECT_INTR    (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_DISCONNECT_INTR_ENABLED  (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_PHY_LINK_DISCONNECT_INTR_DISABLED  (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_VSYNC_INTR_SHIFT     (16U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_VSYNC_INTR_MASK      (0x00010000U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_VSYNC_INTR_NOACTION   (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_VSYNC_INTR            (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_VSYNC_INTR_ENABLED    (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_VSYNC_INTR_DISABLED   (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_FRAME_DONE_INTR_SHIFT  (17U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_FRAME_DONE_INTR_MASK  (0x00020000U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_FRAME_DONE_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_FRAME_DONE_INTR       (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_FRAME_DONE_INTR_ENABLED  (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_VIDEO_FRAME_DONE_INTR_DISABLED  (0U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_OCP_TIME_OUT_INTR_SHIFT    (4U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_OCP_TIME_OUT_INTR_MASK     (0x00000010U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_OCP_TIME_OUT_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_OCP_TIME_OUT_INTR           (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_OCP_TIME_OUT_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_OCP_TIME_OUT_INTR_ENABLED   (1U)

#define HDMI_WP_IRQENABLE_SET_ENABLE_CORE_INTR_SHIFT            (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_CORE_INTR_MASK             (0x00000001U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_CORE_INTR_NOACTION          (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_CORE_INTR                   (1U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_CORE_INTR_DISABLED          (0U)
#define HDMI_WP_IRQENABLE_SET_ENABLE_CORE_INTR_ENABLED           (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_LOCK_INTR_SHIFT  (29U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_LOCK_INTR_MASK   (0x20000000U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_LOCK_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_LOCK_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_LOCK_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_LOCK_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_UNLOCK_INTR_SHIFT  (30U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_UNLOCK_INTR_MASK  (0x40000000U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_UNLOCK_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_UNLOCK_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_UNLOCK_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_UNLOCK_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_RECAL_INTR_SHIFT  (31U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_RECAL_INTR_MASK  (0x80000000U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_RECAL_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_RECAL_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_RECAL_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PLL_RECAL_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_UNDERFLOW_INTR_SHIFT  (8U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_UNDERFLOW_INTR_MASK  (0x00000100U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_UNDERFLOW_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_UNDERFLOW_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_UNDERFLOW_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_UNDERFLOW_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_OVERFLOW_INTR_SHIFT  (9U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_OVERFLOW_INTR_MASK  (0x00000200U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_OVERFLOW_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_OVERFLOW_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_OVERFLOW_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_OVERFLOW_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_SAMPLE_REQ_INTR_SHIFT  (10U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_SAMPLE_REQ_INTR_MASK  (0x00000400U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_SAMPLE_REQ_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_SAMPLE_REQ_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_SAMPLE_REQ_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_AUDIO_FIFO_SAMPLE_REQ_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINE5VSHORT_ASSERTED_INTR_SHIFT  (24U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINE5VSHORT_ASSERTED_INTR_MASK  (0x01000000U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINE5VSHORT_ASSERTED_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINE5VSHORT_ASSERTED_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINE5VSHORT_ASSERTED_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINE5VSHORT_ASSERTED_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_CONNECT_INTR_SHIFT  (25U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_CONNECT_INTR_MASK  (0x02000000U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_CONNECT_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_CONNECT_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_CONNECT_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_CONNECT_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_DISCONNECT_INTR_SHIFT  (26U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_DISCONNECT_INTR_MASK  (0x04000000U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_DISCONNECT_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_DISCONNECT_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_DISCONNECT_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_PHY_LINK_DISCONNECT_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_VSYNC_INTR_SHIFT  (16U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_VSYNC_INTR_MASK  (0x00010000U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_VSYNC_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_VSYNC_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_VSYNC_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_VSYNC_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_FRAME_DONE_INTR_SHIFT  (17U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_FRAME_DONE_INTR_MASK  (0x00020000U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_FRAME_DONE_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_FRAME_DONE_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_FRAME_DONE_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_VIDEO_FRAME_DONE_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_OCP_TIME_OUT_INTR_SHIFT  (4U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_OCP_TIME_OUT_INTR_MASK  (0x00000010U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_OCP_TIME_OUT_INTR_NOACTION  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_OCP_TIME_OUT_INTR_DISABLE  (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_OCP_TIME_OUT_INTR_DISABLED  (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_OCP_TIME_OUT_INTR_ENABLED  (1U)

#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_CORE_INTR_SHIFT      (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_CORE_INTR_MASK       (0x00000001U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_CORE_INTR_NOACTION    (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_CORE_INTR_DISABLE     (1U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_CORE_INTR_DISABLED    (0U)
#define HDMI_WP_IRQENABLE_CLR_ENABLE_CLEAR_CORE_INTR_ENABLED     (1U)

#define HDMI_WP_IRQWAKEEN_WAKE_UP_PHY_LINK_CONNECT_INTR_SHIFT   (25U)
#define HDMI_WP_IRQWAKEEN_WAKE_UP_PHY_LINK_CONNECT_INTR_MASK    (0x02000000U)
#define HDMI_WP_IRQWAKEEN_WAKE_UP_PHY_LINK_CONNECT_INTR_DISABLE  (0U)
#define HDMI_WP_IRQWAKEEN_WAKE_UP_PHY_LINK_CONNECT_INTR_ENABLE   (1U)

#define HDMI_WP_IRQWAKEEN_WAKE_UP_PHY_LINK_DISCONNECT_INTR_SHIFT  (26U)
#define HDMI_WP_IRQWAKEEN_WAKE_UP_PHY_LINK_DISCONNECT_INTR_MASK  (0x04000000U)
#define HDMI_WP_IRQWAKEEN_WAKE_UP_PHY_LINK_DISCONNECT_INTR_DISABLE  (0U)
#define HDMI_WP_IRQWAKEEN_WAKE_UP_PHY_LINK_DISCONNECT_INTR_ENABLE  (1U)

#define HDMI_WP_IRQWAKEEN_WAKE_UP_CORE_INTR_SHIFT               (0U)
#define HDMI_WP_IRQWAKEEN_WAKE_UP_CORE_INTR_MASK                (0x00000001U)
#define HDMI_WP_IRQWAKEEN_WAKE_UP_CORE_INTR_DISABLE              (0U)
#define HDMI_WP_IRQWAKEEN_WAKE_UP_CORE_INTR_ENABLE               (1U)

#define HDMI_WP_PWR_CTRL_PLL_CMD_SHIFT                          (2U)
#define HDMI_WP_PWR_CTRL_PLL_CMD_MASK                           (0x0000000cU)
#define HDMI_WP_PWR_CTRL_PLL_CMD_STATE_OFF                       (0U)
#define HDMI_WP_PWR_CTRL_PLL_CMD_STATE_ON_HSCLK                  (1U)
#define HDMI_WP_PWR_CTRL_PLL_CMD_STATE_ON_ALL                    (2U)
#define HDMI_WP_PWR_CTRL_PLL_CMD_STATE_ON_DIV                    (3U)

#define HDMI_WP_PWR_CTRL_PLL_STATUS_SHIFT                       (0U)
#define HDMI_WP_PWR_CTRL_PLL_STATUS_MASK                        (0x00000003U)
#define HDMI_WP_PWR_CTRL_PLL_STATUS_STATE_ON_ALL                 (2U)
#define HDMI_WP_PWR_CTRL_PLL_STATUS_STATE_OFF                    (0U)
#define HDMI_WP_PWR_CTRL_PLL_STATUS_STATE_ON_HSCLK               (1U)
#define HDMI_WP_PWR_CTRL_PLL_STATUS_STATE_ON_DIV                 (3U)

#define HDMI_WP_PWR_CTRL_PHY_STATUS_SHIFT                       (4U)
#define HDMI_WP_PWR_CTRL_PHY_STATUS_MASK                        (0x00000030U)
#define HDMI_WP_PWR_CTRL_PHY_STATUS_STATE_OFF                    (0U)
#define HDMI_WP_PWR_CTRL_PHY_STATUS_STATE_ON                     (1U)
#define HDMI_WP_PWR_CTRL_PHY_STATUS_STATE_ULP                    (2U)

#define HDMI_WP_PWR_CTRL_PHY_CMD_SHIFT                          (6U)
#define HDMI_WP_PWR_CTRL_PHY_CMD_MASK                           (0x000000c0U)
#define HDMI_WP_PWR_CTRL_PHY_CMD_STATE_OFF                       (0U)
#define HDMI_WP_PWR_CTRL_PHY_CMD_STATE_ON                        (1U)
#define HDMI_WP_PWR_CTRL_PHY_CMD_STATE_TXON                      (2U)

#define HDMI_WP_DEBOUNCE_LINE5VSHORT_SHIFT                      (0U)
#define HDMI_WP_DEBOUNCE_LINE5VSHORT_MASK                       (0x0000003fU)

#define HDMI_WP_DEBOUNCE_RXDET_SHIFT                            (8U)
#define HDMI_WP_DEBOUNCE_RXDET_MASK                             (0x0003ff00U)

#define HDMI_WP_VIDEO_CFG_MODE_SHIFT                            (0U)
#define HDMI_WP_VIDEO_CFG_MODE_MASK                             (0x00000003U)
#define HDMI_WP_VIDEO_CFG_MODE_SLAVEMODE                         (0U)
#define HDMI_WP_VIDEO_CFG_MODE_MASTERMODE                        (1U)
#define HDMI_WP_VIDEO_CFG_MODE_MASTERMODE_DEEP_10                (2U)
#define HDMI_WP_VIDEO_CFG_MODE_MASTERMODE_DEEP_12                (3U)

#define HDMI_WP_VIDEO_CFG_PROGRESSIVE_INTERLACE_SHIFT           (3U)
#define HDMI_WP_VIDEO_CFG_PROGRESSIVE_INTERLACE_MASK            (0x00000008U)

#define HDMI_WP_VIDEO_CFG_ENABLE_SHIFT                          (31U)
#define HDMI_WP_VIDEO_CFG_ENABLE_MASK                           (0x80000000U)
#define HDMI_WP_VIDEO_CFG_ENABLE_NEWENUM1                        (0U)
#define HDMI_WP_VIDEO_CFG_ENABLE_NEWENUM2                        (1U)

#define HDMI_WP_VIDEO_CFG_HSYNC_POL_SHIFT                       (6U)
#define HDMI_WP_VIDEO_CFG_HSYNC_POL_MASK                        (0x00000040U)
#define HDMI_WP_VIDEO_CFG_HSYNC_POL_POLLOW                       (0U)
#define HDMI_WP_VIDEO_CFG_HSYNC_POL_POLHIGH                      (1U)

#define HDMI_WP_VIDEO_CFG_VSYNC_POL_SHIFT                       (7U)
#define HDMI_WP_VIDEO_CFG_VSYNC_POL_MASK                        (0x00000080U)
#define HDMI_WP_VIDEO_CFG_VSYNC_POL_POLLOW                       (0U)
#define HDMI_WP_VIDEO_CFG_VSYNC_POL_POLHIGH                      (1U)

#define HDMI_WP_VIDEO_CFG_FORCE_SLAVE_IF_SHIFT                  (2U)
#define HDMI_WP_VIDEO_CFG_FORCE_SLAVE_IF_MASK                   (0x00000004U)
#define HDMI_WP_VIDEO_CFG_FORCE_SLAVE_IF_DISABLE                 (0U)
#define HDMI_WP_VIDEO_CFG_FORCE_SLAVE_IF_ENABLE                  (1U)

#define HDMI_WP_VIDEO_CFG_PACKING_MODE_SHIFT                    (8U)
#define HDMI_WP_VIDEO_CFG_PACKING_MODE_MASK                     (0x00000700U)
#define HDMI_WP_VIDEO_CFG_PACKING_MODE_10BITS                    (0U)
#define HDMI_WP_VIDEO_CFG_PACKING_MODE_8BITS                     (1U)
#define HDMI_WP_VIDEO_CFG_PACKING_MODE_10BITSYUV422              (2U)
#define HDMI_WP_VIDEO_CFG_PACKING_MODE_NOPACK                    (7U)

#define HDMI_WP_VIDEO_CFG_TMDS_CLOCK_USED_SHIFT                 (16U)
#define HDMI_WP_VIDEO_CFG_TMDS_CLOCK_USED_MASK                  (0x00010000U)

#define HDMI_WP_VIDEO_CFG_SLAVE_CLOCK_USED_SHIFT                (17U)
#define HDMI_WP_VIDEO_CFG_SLAVE_CLOCK_USED_MASK                 (0x00020000U)

#define HDMI_WP_VIDEO_CFG_CORE_HSYNC_INV_SHIFT                  (4U)
#define HDMI_WP_VIDEO_CFG_CORE_HSYNC_INV_MASK                   (0x00000010U)
#define HDMI_WP_VIDEO_CFG_CORE_HSYNC_INV_NONINV                  (0U)
#define HDMI_WP_VIDEO_CFG_CORE_HSYNC_INV                         (1U)

#define HDMI_WP_VIDEO_CFG_CORE_VSYNC_INV_SHIFT                  (5U)
#define HDMI_WP_VIDEO_CFG_CORE_VSYNC_INV_MASK                   (0x00000020U)
#define HDMI_WP_VIDEO_CFG_CORE_VSYNC_INV_NONINV                  (0U)
#define HDMI_WP_VIDEO_CFG_CORE_VSYNC_INV                         (1U)

#define HDMI_WP_VIDEO_SIZE_LPP_SHIFT                            (16U)
#define HDMI_WP_VIDEO_SIZE_LPP_MASK                             (0xffff0000U)

#define HDMI_WP_VIDEO_SIZE_PPL_SHIFT                            (0U)
#define HDMI_WP_VIDEO_SIZE_PPL_MASK                             (0x0000ffffU)

#define HDMI_WP_VIDEO_TIMING_H_HBP_SHIFT                        (20U)
#define HDMI_WP_VIDEO_TIMING_H_HBP_MASK                         (0xfff00000U)

#define HDMI_WP_VIDEO_TIMING_H_HFP_SHIFT                        (8U)
#define HDMI_WP_VIDEO_TIMING_H_HFP_MASK                         (0x000fff00U)

#define HDMI_WP_VIDEO_TIMING_H_HSW_SHIFT                        (0U)
#define HDMI_WP_VIDEO_TIMING_H_HSW_MASK                         (0x000000ffU)

#define HDMI_WP_VIDEO_TIMING_V_VBP_SHIFT                        (20U)
#define HDMI_WP_VIDEO_TIMING_V_VBP_MASK                         (0xfff00000U)

#define HDMI_WP_VIDEO_TIMING_V_VFP_SHIFT                        (8U)
#define HDMI_WP_VIDEO_TIMING_V_VFP_MASK                         (0x000fff00U)

#define HDMI_WP_VIDEO_TIMING_V_VSW_SHIFT                        (0U)
#define HDMI_WP_VIDEO_TIMING_V_VSW_MASK                         (0x000000ffU)

#define HDMI_WP_CLK_SCP_PWR_DIV_SHIFT                           (8U)
#define HDMI_WP_CLK_SCP_PWR_DIV_MASK                            (0x00000700U)

#define HDMI_WP_CLK_OCP_TIME_OUT_DIS_SHIFT                      (16U)
#define HDMI_WP_CLK_OCP_TIME_OUT_DIS_MASK                       (0x00010000U)
#define HDMI_WP_CLK_OCP_TIME_OUT_DIS_TIMEOUT                     (0U)
#define HDMI_WP_CLK_OCP_TIME_OUT_DIS_NOTIMEOUT                   (1U)

#define HDMI_WP_CLK_SFR_DIV_SHIFT                               (24U)
#define HDMI_WP_CLK_SFR_DIV_MASK                                (0x0f000000U)

#define HDMI_WP_AUDIO_CFG_SAMPLE_SIZE_SHIFT                     (0U)
#define HDMI_WP_AUDIO_CFG_SAMPLE_SIZE_MASK                      (0x00000001U)
#define HDMI_WP_AUDIO_CFG_SAMPLE_SIZE_NEWENUM1                   (0U)
#define HDMI_WP_AUDIO_CFG_SAMPLE_SIZE_NEWENUM2                   (1U)

#define HDMI_WP_AUDIO_CFG_JUSTIFY_SHIFT                         (3U)
#define HDMI_WP_AUDIO_CFG_JUSTIFY_MASK                          (0x00000008U)
#define HDMI_WP_AUDIO_CFG_JUSTIFY_NEWENUM1                       (0U)
#define HDMI_WP_AUDIO_CFG_JUSTIFY_NEWENUM2                       (1U)

#define HDMI_WP_AUDIO_CFG_IEC_SHIFT                             (4U)
#define HDMI_WP_AUDIO_CFG_IEC_MASK                              (0x00000010U)
#define HDMI_WP_AUDIO_CFG_IEC_NEWENUM1                           (0U)
#define HDMI_WP_AUDIO_CFG_IEC_NEWENUM2                           (1U)

#define HDMI_WP_AUDIO_CFG_SAMPLE_NBR_SHIFT                      (1U)
#define HDMI_WP_AUDIO_CFG_SAMPLE_NBR_MASK                       (0x00000002U)
#define HDMI_WP_AUDIO_CFG_SAMPLE_NBR_NEWENUM1                    (0U)
#define HDMI_WP_AUDIO_CFG_SAMPLE_NBR_NEWENUM2                    (1U)

#define HDMI_WP_AUDIO_CFG_BLOCK_START_END_DISABLE_SHIFT         (5U)
#define HDMI_WP_AUDIO_CFG_BLOCK_START_END_DISABLE_MASK          (0x00000020U)

#define HDMI_WP_AUDIO_CFG_LEFT_BEFORE_SHIFT                     (2U)
#define HDMI_WP_AUDIO_CFG_LEFT_BEFORE_MASK                      (0x00000004U)
#define HDMI_WP_AUDIO_CFG_LEFT_BEFORE_NEWENUM1                   (0U)
#define HDMI_WP_AUDIO_CFG_LEFT_BEFORE_NEWENUM2                   (1U)

#define HDMI_WP_AUDIO_CFG2_BLOCK_SIZE_SHIFT                     (0U)
#define HDMI_WP_AUDIO_CFG2_BLOCK_SIZE_MASK                      (0x000000ffU)

#define HDMI_WP_AUDIO_CFG2_DMA_TRANSFER_SHIFT                   (8U)
#define HDMI_WP_AUDIO_CFG2_DMA_TRANSFER_MASK                    (0x0000ff00U)

#define HDMI_WP_AUDIO_CTRL_TRESHOLD_VALUE_SHIFT                 (0U)
#define HDMI_WP_AUDIO_CTRL_TRESHOLD_VALUE_MASK                  (0x000001ffU)

#define HDMI_WP_AUDIO_CTRL_DMA_OR_IRQ_SHIFT                     (9U)
#define HDMI_WP_AUDIO_CTRL_DMA_OR_IRQ_MASK                      (0x00000200U)

#define HDMI_WP_AUDIO_CTRL_WRAPPER_ENABLE_SHIFT                 (31U)
#define HDMI_WP_AUDIO_CTRL_WRAPPER_ENABLE_MASK                  (0x80000000U)
#define HDMI_WP_AUDIO_CTRL_WRAPPER_ENABLE_NEWENUM1               (0U)
#define HDMI_WP_AUDIO_CTRL_WRAPPER_ENABLE_NEWENUM2               (1U)

#define HDMI_WP_AUDIO_CTRL_NUMBER_OF_SAMPLE_SHIFT               (16U)
#define HDMI_WP_AUDIO_CTRL_NUMBER_OF_SAMPLE_MASK                (0x03ff0000U)

#define HDMI_WP_AUDIO_CTRL_CORE_REQ_ENABLE_SHIFT                (30U)
#define HDMI_WP_AUDIO_CTRL_CORE_REQ_ENABLE_MASK                 (0x40000000U)

#define HDMI_WP_AUDIO_DATA_FIFO_DAT_SHIFT                       (0U)
#define HDMI_WP_AUDIO_DATA_FIFO_DAT_MASK                        (0xffffffffU)

#define HDMI_WP_DEBUG_CFG_SHIFT                                 (0U)
#define HDMI_WP_DEBUG_CFG_MASK                                  (0x00000007U)
#define HDMI_WP_DEBUG_CFG_VIDEO                                  (1U)
#define HDMI_WP_DEBUG_CFG_AUDIO                                  (2U)
#define HDMI_WP_DEBUG_CFG_TMDS                                   (3U)
#define HDMI_WP_DEBUG_CFG_MISCELLANEOUS                          (4U)

#define HDMI_WP_DEBUG_DATA_SHIFT                                (0U)
#define HDMI_WP_DEBUG_DATA_MASK                                 (0xffffffffU)
#define HDMI_WP_DEBUG_DATA_VIDEOMODE                             (0U)
#define HDMI_WP_DEBUG_DATA_AUDIOMODE                             (1U)
#define HDMI_WP_DEBUG_DATA_TMDSMODE                              (2U)
#define HDMI_WP_DEBUG_DATA_MISCMODE                              (3U)

#ifdef __cplusplus
}
#endif

#endif /* HW_HDMI_WP_H_ */
