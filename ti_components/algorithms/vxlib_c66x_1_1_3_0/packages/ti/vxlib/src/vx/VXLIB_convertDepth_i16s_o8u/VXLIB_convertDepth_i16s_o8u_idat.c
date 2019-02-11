/*******************************************************************************
**+--------------------------------------------------------------------------+**
**|                            ****                                          |**
**|                            ****                                          |**
**|                            ******o***                                    |**
**|                      ********_///_****                                   |**
**|                      ***** /_//_/ ****                                   |**
**|                       ** ** (__/ ****                                    |**
**|                           *********                                      |**
**|                            ****                                          |**
**|                            ***                                           |**
**|                                                                          |**
**|         Copyright (c) 2016 - 2017 Texas Instruments Incorporated         |**
**|                                                                          |**
**|              All rights reserved not granted herein.                     |**
**|                                                                          |**
**|                         Limited License.                                 |**
**|                                                                          |**
**|  Texas Instruments Incorporated grants a world-wide, royalty-free,       |**
**|  non-exclusive license under copyrights and patents it now or            |**
**|  hereafter owns or controls to make, have made, use, import, offer to    |**
**|  sell and sell ("Utilize") this software subject to the terms herein.    |**
**|  With respect to the foregoing patent license, such license is granted   |**
**|  solely to the extent that any such patent is necessary to Utilize the   |**
**|  software alone.  The patent license shall not apply to any              |**
**|  combinations which include this software, other than combinations       |**
**|  with devices manufactured by or for TI ("TI Devices").  No hardware     |**
**|  patent is licensed hereunder.                                           |**
**|                                                                          |**
**|  Redistributions must preserve existing copyright notices and            |**
**|  reproduce this license (including the above copyright notice and the    |**
**|  disclaimer and (if applicable) source code license limitations below)   |**
**|  in the documentation and/or other materials provided with the           |**
**|  distribution                                                            |**
**|                                                                          |**
**|  Redistribution and use in binary form, without modification, are        |**
**|  permitted provided that the following conditions are met:               |**
**|                                                                          |**
**|    *  No reverse engineering, decompilation, or disassembly of this      |**
**|  software is permitted with respect to any software provided in binary   |**
**|  form.                                                                   |**
**|                                                                          |**
**|    *  any redistribution and use are licensed by TI for use only with    |**
**|  TI Devices.                                                             |**
**|                                                                          |**
**|    *  Nothing shall obligate TI to provide you with source code for      |**
**|  the software licensed and provided to you in object code.               |**
**|                                                                          |**
**|  If software source code is provided to you, modification and            |**
**|  redistribution of the source code are permitted provided that the       |**
**|  following conditions are met:                                           |**
**|                                                                          |**
**|    *  any redistribution and use of the source code, including any       |**
**|  resulting derivative works, are licensed by TI for use only with TI     |**
**|  Devices.                                                                |**
**|                                                                          |**
**|    *  any redistribution and use of any object code compiled from the    |**
**|  source code and any resulting derivative works, are licensed by TI      |**
**|  for use only with TI Devices.                                           |**
**|                                                                          |**
**|  Neither the name of Texas Instruments Incorporated nor the names of     |**
**|  its suppliers may be used to endorse or promote products derived from   |**
**|  this software without specific prior written permission.                |**
**|                                                                          |**
**|  DISCLAIMER.                                                             |**
**|                                                                          |**
**|  THIS SOFTWARE IS PROVIDED BY TI AND TI'S LICENSORS "AS IS" AND ANY      |**
**|  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE       |**
**|  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR      |**
**|  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL TI AND TI'S LICENSORS BE      |**
**|  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR     |**
**|  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF    |**
**|  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR         |**
**|  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,   |**
**|  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE    |**
**|  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,       |**
**|  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                      |**
**+--------------------------------------------------------------------------+**
 *******************************************************************************/
#include "../../common/TI_memory.h"
#include "../../common/VXLIB_types.h"
#include "VXLIB_convertDepth_i16s_o8u_idat.h"


static int16_t    staticRefInput[]=
{
     4,  8, 12, 16, 20, 24, 28, 32,
    36, 40, 44, 48, 52, 56, 60, 64
};

static uint8_t    staticRefOut[]=
{
     2,  4,  6,  8, 10, 12, 14, 16,
    18, 20, 22, 24, 26, 28, 30, 32
};

static int16_t    staticRefInput1[]=
{
     0,  -1, 32767, -32768, 4095, 4096, 16, 15,
    36,  40, 32751,   -256,   52,   56, 60, 64
};

// Shift by 4, saturated
static uint8_t    staticRefOut1_sat[]=
{
     0,   0,  255,  0, 255, 255, 1, 0,
     2,   2,  255,  0,   3,   3, 3, 4
};

// Shift by 4, wrap
static uint8_t    staticRefOut1_wrap[]=
{
     0, 255,  255,   0, 255,  0, 1, 0,
     2,   2,  254, 240,   3,  3, 3, 4
};



static convertDepth_i16s_o8u_testParams_t    testParams[]=
{
    /********************************************
        {
           testPattern,
           *staticIn, staticOut
           width, height, stride_8, stride_16, shift, policy
        },
    *********************************************/
    {
        STATIC,
        staticRefInput, staticRefOut,
        8, 2, 8, 16, 1, VXLIB_CONVERT_POLICY_SATURATE
    },
    {
        STATIC,
        staticRefInput1, staticRefOut1_sat,
        8, 2, 8, 16, 4, VXLIB_CONVERT_POLICY_SATURATE
    },
    {
        STATIC,
        staticRefInput1, staticRefOut1_wrap,
        8, 2, 8, 16, 4, VXLIB_CONVERT_POLICY_WRAP
    },
    {
        RANDOM,
        NULL, NULL,
        32, 16, 32, 64, 1, VXLIB_CONVERT_POLICY_SATURATE
    },
    {
        RANDOM,
        NULL, NULL,
        640, 480, 640, 1280, 3, VXLIB_CONVERT_POLICY_SATURATE
    },
    {
        RANDOM,
        NULL, NULL,
        32, 16, 100, 200, 2, VXLIB_CONVERT_POLICY_SATURATE
    },
    {
        RANDOM,
        NULL, NULL,
        320, 240, 322, 640, 2, VXLIB_CONVERT_POLICY_SATURATE
    },
    { // Exercises branch where width%8 != 0, width == stride
        RANDOM,
        NULL, NULL,
        17, 2, 17, 34, 2, VXLIB_CONVERT_POLICY_SATURATE
    },
    { // Exercises branch where width%8 != 0, width != stride
        RANDOM,
        NULL, NULL,
        17, 2, 19, 38, 2, VXLIB_CONVERT_POLICY_SATURATE
    },
    { // Exercises branch where width%8 != 0, width != stride, less than nearest multiple of 8
        RANDOM,
        NULL, NULL,
        15, 2, 19, 38, 1, VXLIB_CONVERT_POLICY_SATURATE
    },
    {
        RANDOM,
        NULL, NULL,
        64, 48, 64, 128, 2, VXLIB_CONVERT_POLICY_WRAP
    },
    {
        RANDOM,
        NULL, NULL,
        240, 320, 240, 480, 1, VXLIB_CONVERT_POLICY_WRAP
    },
    {
        RANDOM,
        NULL, NULL,
        64, 48, 100, 200, 1, VXLIB_CONVERT_POLICY_WRAP
    },
    {
        RANDOM,
        NULL, NULL,
        240, 320, 241, 482, 1, VXLIB_CONVERT_POLICY_WRAP
    },
    {
        RANDOM,
        NULL, NULL,
        640, 480, 642, 1284, 0, VXLIB_CONVERT_POLICY_WRAP
    },
    { // Exercises branch where width%8 != 0, width == stride
        RANDOM,
        NULL, NULL,
        17, 2, 17, 34, 2, VXLIB_CONVERT_POLICY_WRAP
    },
    { // Exercises branch where width%8 != 0, width != stride
        RANDOM,
        NULL, NULL,
        17, 2, 19, 38, 2, VXLIB_CONVERT_POLICY_WRAP
    },
    { // Exercises branch where width%8 != 0, width != stride, less than nearest multiple of 8
        RANDOM,
        NULL, NULL,
        15, 2, 19, 38, 1, VXLIB_CONVERT_POLICY_WRAP
    },
};

/*
 *  Sends the test parameter structure and number of tests
 */
void convertDepth_i16s_o8u_getTestParams(convertDepth_i16s_o8u_testParams_t * *params, int32_t *numTests)
{
    *params = testParams;
    *numTests = sizeof(testParams) / sizeof(convertDepth_i16s_o8u_testParams_t);
}

/* ======================================================================== */
/*                       End of file                                        */
/* ------------------------------------------------------------------------ */
/*            Copyright (c) 2016 Texas Instruments, Incorporated.           */
/*                           All Rights Reserved.                           */
/* ======================================================================== */
