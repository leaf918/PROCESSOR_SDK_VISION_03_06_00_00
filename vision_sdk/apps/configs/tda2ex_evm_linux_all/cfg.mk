#
# This file defines the modules included in $(MAKECONFIG) config
#
# Modules are split into,
# - Use-cases specified in uc_cfg.mk
# - Other system config/feature, specified in this file
#
# Any specific overrides are also specified in this file
# Example, for TDA3x SoC EVE2/3/4 are not present and hence force marked as <blank>, i.e disabled
#

#
# Additional config options
#

#
# CPUs to included in build
#
# IPU1 (core 0 & 1 are) not supported when IPU_PRIMARY_CORE=ipu2
PROC_IPU1_0_INCLUDE=no
PROC_IPU1_1_INCLUDE=no
PROC_IPU2_INCLUDE=yes
PROC_A15_0_INCLUDE=yes
PROC_DSP1_INCLUDE=yes


VSDK_BOARD_TYPE=TDA2EX_EVM

# Supported values: DDR_MEM_1024M
DDR_MEM=DDR_MEM_1024M

# Supported values: ipu1_0 ipu1_1 ipu2 a15_0 none
NDK_PROC_TO_USE=none

#
# Used to control building of algorithm source.
# By default algorithm source not included in Vision SDK
#
BUILD_ALGORITHMS=no

#
# Applies profile to all cores
#
# Supported profiles: release debug
#PROFILE=debug
PROFILE ?= release

PROFILE_ipu1_0 ?= $(PROFILE)
PROFILE_ipu1_1 ?= $(PROFILE)
PROFILE_ipu2 ?= $(PROFILE)
PROFILE_c66xdsp_1 ?= $(PROFILE)
PROFILE_a15_0 ?= $(PROFILE)

#
# For TDA2xx & TDA2Ex - vision SDK can run on either IPU1 or IPU2 subsystem
# For TDA3xx - We have only IPU1 and hence IPU1 is the only option
# Select IPU primary core from the available IPU1 & IPU2 subsytems
#
# Supported values: ipu1_0 ipu2
IPU_PRIMARY_CORE=ipu2
IPU_SECONDARY_CORE=ipu1_0

#
# Set A15_TARGET_OS
# A15 can run Linux or Bios
#
#                 A15_TARGET_OS support
#   Platform        BIOS        Linux
#
#   TDA2XX_EVM      yes         yes
#   TDA3XX_EVM      yes         no
#   TDA2EX_EVM      yes         yes
#
# Supported values: Bios Linux
A15_TARGET_OS=Linux

# Both IVAHD_INCLUDE & IPUMM_INCLUDE should not be set to "yes"
# Only one should be enabled to avoid IVA-HD resource conflict
IPUMM_INCLUDE=no
IVAHD_INCLUDE=yes
VPE_INCLUDE=yes
DSS_INCLUDE=yes
CAL_INCLUDE=yes

AVB_INCLUDE=no

#
# Enable below macro to enable OPENVX into Vision SDK
#
OPENVX_INCLUDE=no

CIO_REDIRECT=yes

#
# Enable below macro to enable DCAN integration into Vision SDK.
#
DCAN_INCLUDE=no

CPU_IDLE_ENABLED=yes

#
# Enable below macro to view the bandwidth used by different IPs in the device
# as a graphical plot on the display screen.
#
DATA_VIS_INCLUDE=no

HS_DEVICE=no

#Enable/Disable early use-cases (yes/no)
EARLY_USECASE_ENABLE=no

#OPENVX doesn't work with early-boot late-attach. Disable if EARLY_USECASE=yes
ifeq ($(EARLY_USECASE_ENABLE),yes)
OPENVX_INCLUDE=no
endif

DEFAULT_UBOOT_CONFIG  := dra7xx_evm_vision_config
DEFAULT_KERNEL_CONFIG := ti_sdk_dra7x_release_defconfig
# For TDA2Ex
DEFAULT_DTB := dra72-evm-infoadas.dtb dra72-evm-infoadas-lcd-lg.dtb
CMEM_INCLUDE=yes
include $($(MAKEAPPNAME)_PATH)/configs/$(MAKECONFIG)/uc_cfg.mk