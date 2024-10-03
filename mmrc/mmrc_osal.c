/*
 * Copyright 2022 Morse Micro
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
 * <https://www.gnu.org/licenses/>..
 */

#include "mmrc_osal.h"

void osal_mmrc_seed_random(void)
{
#if KERNEL_VERSION(5, 19, 0) > LINUX_VERSION_CODE
	prandom_seed(jiffies);
#else
	/*
	 * calling prandom_seed is no longer required, and the functionality was
	 * removed in commit d4150779e60fb6c49be25572596b2cdfc5d46a09.
	 */
#endif
}

u32 osal_mmrc_random_u32(u32 max)
{
	return prandom_u32_max(max);
}
