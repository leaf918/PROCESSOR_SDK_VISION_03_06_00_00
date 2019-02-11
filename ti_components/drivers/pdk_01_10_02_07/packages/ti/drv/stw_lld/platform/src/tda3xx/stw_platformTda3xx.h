/*
 *  Copyright (c) Texas Instruments Incorporated 2014-2016
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
 */

/**
 *  \file stw_platformTda3xx.h
 *
 *  \brief Interface file to the TDA3XX platform specific functions.
 *
 */

#ifndef STW_PLATFORM_TDA3XX_H_
#define STW_PLATFORM_TDA3XX_H_

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */

#ifdef __cplusplus
extern "C" {
#endif

/* ========================================================================== */
/*                           Macros & Typedefs                                */
/* ========================================================================== */

/* None */

/* ========================================================================== */
/*                         Structure Declarations                             */
/* ========================================================================== */
/* None */

/* ========================================================================== */
/*                          Function Declarations                             */
/* ========================================================================== */

/* Get the CPU revision */
platformCpuRev_t PLATFORMTda3xxGetCpuRev(void);
int32_t PLATFORMTda3xxSetPinmuxRegs(uint32_t baseAddrOffset, uint32_t ioPinCfg);
int32_t PLATFORMTda3xxUnLockRegion(platformMmrRegion_t region);
int32_t PLATFORMTda3xxLockRegion(platformMmrRegion_t region);
int32_t PLATFORMTda3xxInit(const platformInitParams_t *initParams);
int32_t PLATFORMTda3xxDeInit(void);
int32_t PLATFORMTda3xxSetPinMux(const platformInitParams_t *initParams);
int32_t PLATFORMTda3xxSetIrqXBar(const platformInitParams_t *initParams);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef STW_PLATFORM_TDA3XX_H_ */

/* @} */