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
#ifndef MMRC_OSAL_H__
#define MMRC_OSAL_H__

#include <linux/version.h>
#include <linux/types.h>
#include <linux/slab.h>
#include <linux/bitops.h>
#include <linux/random.h>
#include <linux/time.h>

#define BIT_COUNT(_x) (hweight_long(_x))

#ifndef MMRC_OSAL_ASSERT
#define MMRC_OSAL_ASSERT(_x) WARN_ON_ONCE(!(_x))
#endif

#ifndef MMRC_OSAL_PR_ERR
#define MMRC_OSAL_PR_ERR(...) pr_err(__VA_ARGS__)
#endif

void osal_mmrc_seed_random(void);

/**
 * Function to retrieve a random 32bit number between 0 and @c max.
 *
 * @param max Maximum value (inclusive)
 *
 * @returns A randomly generated integer (0 <= i <= max).
 */
u32 osal_mmrc_random_u32(u32 max);

#endif /* MMRC_OSAL_H__ */
