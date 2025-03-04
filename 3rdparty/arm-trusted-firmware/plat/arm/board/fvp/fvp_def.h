/*
 * Copyright (c) 2014-2015, ARM Limited and Contributors. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of ARM nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __FVP_DEF_H__
#define __FVP_DEF_H__

#include <arm_def.h>


#define FVP_MAX_CPUS_PER_CLUSTER	4

#define FVP_PRIMARY_CPU			0x0

/*******************************************************************************
 * FVP memory map related constants
 ******************************************************************************/

#define FLASH1_BASE			0x0c000000
#define FLASH1_SIZE			0x04000000

#define PSRAM_BASE			0x14000000
#define PSRAM_SIZE			0x04000000

#define VRAM_BASE			0x18000000
#define VRAM_SIZE			0x02000000

/* Aggregate of all devices in the first GB */
#define DEVICE0_BASE			0x20000000
#define DEVICE0_SIZE			0x0c200000

#define DEVICE1_BASE			0x2f000000
#define DEVICE1_SIZE			0x200000

#define NSRAM_BASE			0x2e000000
#define NSRAM_SIZE			0x10000

#define PCIE_EXP_BASE			0x40000000
#define TZRNG_BASE			0x7fe60000
#define TZNVCTR_BASE			0x7fe70000
#define TZROOTKEY_BASE			0x7fe80000

/* Constants to distinguish FVP type */
#define HBI_BASE_FVP			0x020
#define REV_BASE_FVP_V0			0x0

#define HBI_FOUNDATION_FVP		0x010
#define REV_FOUNDATION_FVP_V2_0		0x0
#define REV_FOUNDATION_FVP_V2_1		0x1
#define REV_FOUNDATION_FVP_v9_1		0x2

#define BLD_GIC_VE_MMAP			0x0
#define BLD_GIC_A53A57_MMAP		0x1

#define ARCH_MODEL			0x1

/* FVP Power controller base address*/
#define PWRC_BASE			0x1c100000

/* FVP SP804 timer frequency is 35 MHz*/
#define SP804_TIMER_CLKMULT		35
#define SP804_TIMER_CLKDIV		1

/*******************************************************************************
 * GIC-400 & interrupt handling related constants
 ******************************************************************************/
/* VE compatible GIC memory map */
#define VE_GICD_BASE			0x2c001000
#define VE_GICC_BASE			0x2c002000
#define VE_GICH_BASE			0x2c004000
#define VE_GICV_BASE			0x2c006000

/* Base FVP compatible GIC memory map */
#define BASE_GICD_BASE			0x2f000000
#define BASE_GICR_BASE			0x2f100000
#define BASE_GICC_BASE			0x2c000000
#define BASE_GICH_BASE			0x2c010000
#define BASE_GICV_BASE			0x2c02f000

#define IRQ_TZ_WDOG			56


/*******************************************************************************
 * TrustZone address space controller related constants
 ******************************************************************************/

/* NSAIDs used by devices in TZC filter 0 on FVP */
#define FVP_NSAID_DEFAULT		0
#define FVP_NSAID_PCI			1
#define FVP_NSAID_VIRTIO		8  /* from FVP v5.6 onwards */
#define FVP_NSAID_AP			9  /* Application Processors */
#define FVP_NSAID_VIRTIO_OLD		15 /* until FVP v5.5 */

/* NSAIDs used by devices in TZC filter 2 on FVP */
#define FVP_NSAID_HDLCD0		2
#define FVP_NSAID_CLCD			7

/*******************************************************************************
 *  Shared Data
 ******************************************************************************/

/* Entrypoint mailboxes */
#define MBOX_BASE			ARM_SHARED_RAM_BASE
#define MBOX_SIZE			0x200


#endif /* __FVP_DEF_H__ */
