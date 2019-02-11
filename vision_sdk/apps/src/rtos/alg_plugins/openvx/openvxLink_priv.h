/******************************************************************************
Copyright (c) [2012 - 2017] Texas Instruments Incorporated

All rights reserved not granted herein.

Limited License.

 Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive
 license under copyrights and patents it now or hereafter owns or controls to
 make,  have made, use, import, offer to sell and sell ("Utilize") this software
 subject to the terms herein.  With respect to the foregoing patent license,
 such license is granted  solely to the extent that any such patent is necessary
 to Utilize the software alone.  The patent license shall not apply to any
 combinations which include this software, other than combinations with devices
 manufactured by or for TI ("TI Devices").  No hardware patent is licensed
 hereunder.

 Redistributions must preserve existing copyright notices and reproduce this
 license (including the above copyright notice and the disclaimer and
 (if applicable) source code license limitations below) in the documentation
 and/or other materials provided with the distribution

 Redistribution and use in binary form, without modification, are permitted
 provided that the following conditions are met:

 * No reverse engineering, decompilation, or disassembly of this software
   is permitted with respect to any software provided in binary form.

 * Any redistribution and use are licensed by TI for use only with TI Devices.

 * Nothing shall obligate TI to provide you with source code for the software
   licensed and provided to you in object code.

 If software source code is provided to you, modification and redistribution of
 the source code are permitted provided that the following conditions are met:

 * Any redistribution and use of the source code, including any resulting
   derivative works, are licensed by TI for use only with TI Devices.

 * Any redistribution and use of any object code compiled from the source code
   and any resulting derivative works, are licensed by TI for use only with TI
   Devices.

 Neither the name of Texas Instruments Incorporated nor the names of its
 suppliers may be used to endorse or promote products derived from this software
 without specific prior written permission.

 DISCLAIMER.

 THIS SOFTWARE IS PROVIDED BY TI AND TI�S LICENSORS "AS IS" AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL TI AND TI�S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************************/

/**
 *******************************************************************************
 *
 * \ingroup ALGORITHM_LINK_API
 * \defgroup ALGORITHM_LINK_IMPL Algorithm Link Implementation
 *
 * @{
 */

/**
 *******************************************************************************
 *
 * \file openvxhcLink_priv.h
 *
 * \brief  This link private header file has defined
 *         - Algorithm link instance/handle object
 *         - All the local data structures
 *         - Algorithm plug in function interfaces
 *
 * \version 0.0 (Feb 2017) : [BJ] First version
 *
 *******************************************************************************
 */

#ifndef _OPENCX_HC_LINK_PRIV_H_
#define _OPENCX_HC_LINK_PRIV_H_

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 *  Include files
 *******************************************************************************
 */
#include <include/link_api/system.h>
#include <include/link_api/algorithmLink.h>
#include <include/alglink_api/algorithmLink_openvx.h>
#include <include/link_api/algorithmLink_algPluginSupport.h>
#include <src/rtos/utils_common/include/utils_prf.h>
#include <src/rtos/utils_common/include/utils_link_stats_if.h>
#include <src/rtos/utils_common/include/utils_que.h>

#include <VX/vx.h>
#include <VX/vx_api.h>


/*******************************************************************************
 *  Defines
 *******************************************************************************
 */

/**
 *******************************************************************************
 *
 *   \brief Max number of video frames needed for OpenCV Canny algorithm
 *
 *   SUPPORTED in ALL platforms
 *
 *******************************************************************************
 */
#define OPENVX_LINK_MAX_FRAMES (10u)

/*******************************************************************************
 *  Data structures
 *******************************************************************************
 */

typedef struct
{
    vx_graph        graph;
    vx_image        img;
    vx_array        arr;
    vx_scalar       scStrengthThr;
    vx_scalar       scMinDist;
    vx_scalar       scSensitivity;
    vx_scalar       scNumCorners;
    vx_node         node;
} AlgorithmLink_GraphObj;


/**
 *******************************************************************************
 *
 *   \brief Structure containing OpenCV Canny algorithm link specific parameters
 *
 *          This structure holds any algorithm parameters specific to this link.
 *
 *******************************************************************************
*/
typedef  struct
{
    System_LinkOutQueParams         outQueParams;
    /**< Output queue information */
    System_LinkInQueParams          inQueParams;
    /**< Input queue information */
    System_LinkChInfo               inChInfo;
    /**< channel info of input */
    System_Buffer                   buffers[OPENVX_LINK_MAX_FRAMES];
    /**< System buffer data structure to exchange buffers between links */
    System_VideoFrameBuffer         videoFrames[OPENVX_LINK_MAX_FRAMES];
    /**< Payload for System buffers */
    AlgorithmLink_OutputQueueInfo   outputQInfo;
    /**< All the information about output Q */
    AlgorithmLink_InputQueueInfo    inputQInfo;
    /**< All the information about input Q */
    System_LinkStatistics           *linkStatsInfo;
    /**< Pointer to the Link statistics information,
         used to store below information
            1, min, max and average latency of the link
            2, min, max and average latency from source to this link
            3, links statistics like frames captured, dropped etc
        Pointer is assigned at the link create time from shared
        memory maintained by utils_link_stats layer */
    Bool                            isFirstFrameRecv;
    /**< Flag to indicate if first frame is received, this is used as trigger
     *   to start stats counting
     */

    /**< graph objects */
    AlgorithmLink_GraphObj          graph[OPENVX_LINK_MAX_FRAMES];
    /* Openvx Context object */
    vx_context                      context;
    /**< OpenVX Context */
    Utils_QueHandle                 graphQue;
    /**< Link graph queue */
    System_Buffer                  *graphQueMem[OPENVX_LINK_MAX_FRAMES];
    /**< Memory for full buff queue */


    /**< Link Create Params */
    AlgorithmLink_OpenVxCreateParams    createPrms;

    vx_imagepatch_addressing_t       vxImgAddr;
} AlgorithmLink_OpenVxObj;

/*******************************************************************************
 *  Algorithm Link Private Functions
 *******************************************************************************
 */
Int32 AlgorithmLink_openVxCreate(void * pObj, void * pCreateParams);
Int32 AlgorithmLink_openVxProcess(void * pObj);
Int32 AlgorithmLink_openVxControl(void * pObj, void * pControlParams);
Int32 AlgorithmLink_openVxStop(void * pObj);
Int32 AlgorithmLink_openVxDelete(void * pObj);
Int32 AlgorithmLink_openVxPrintStatistics(void *pObj,
                       AlgorithmLink_OpenVxObj *pOpenVxObj);

Int32 openvxCreate(AlgorithmLink_OpenVxObj *pObj);
Void openvxDelete(AlgorithmLink_OpenVxObj *pObj);
Void openvxProcess(AlgorithmLink_OpenVxObj *pObj,
    AlgorithmLink_GraphObj *pGraphObj, System_VideoFrameBuffer *pVidFrm);
Void drawCorners(AlgorithmLink_OpenVxObj *pObj,
    AlgorithmLink_GraphObj *pGrapbObj, System_VideoFrameBuffer *pVidFrm);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif

/*@}*/

/* Nothing beyond this point */