/*
 * Copyright 2023 Morse Micro
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see
 * <https://www.gnu.org/licenses/>.
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
