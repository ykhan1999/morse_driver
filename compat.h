/*
 * Copyright 2023 Morse Micro
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

/*
 * This header file is used to hide elements that must be used but would cause
 * the checkpatch utility to complain.
 */

#pragma once

/* Checkpatch does not like Camel Case */
#define morse_elf_ehdr Elf32_Ehdr
#define morse_elf_shdr Elf32_Shdr
#define morse_elf_phdr Elf32_Phdr


/* Checkpatch does not like used of the keyword 'fallthrough' */

/**
 * Define fallthrough explicitly for kernels that don't have compiler_attributes.h.
 */
#if KERNEL_VERSION(5, 4, 0) > LINUX_VERSION_CODE
#ifndef fallthrough
#if __has_attribute(__fallthrough__)
#define fallthrough	__attribute__((__fallthrough__))
#else
#define fallthrough	do {} while (0)	/* fallthrough */
#endif
#endif
#endif

#if !defined(struct_size)
/* Older kernels dont support this. Just add a simple def for it */
#define struct_size(p, member, count)					\
	(sizeof(*(p)) + (sizeof(*(p)->member) * count))
#endif

#if !defined(EM_RISCV)
#define EM_RISCV 243
#endif
