/*
 * Copyright 2022-2023 Morse Micro
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

#pragma once

/* Bitmap utilities */
#define BMGET(_v, _f)     (((_v) & (_f)) >> __builtin_ctz(_f))
#define BMSET(_v, _f)     (((_v) << __builtin_ctz(_f)) & (_f))

#define ROUND_BYTES_TO_WORD(_nbytes) (((_nbytes) + 3) & ~((typeof(_nbytes))0x03))

/* Returns number of bytes needed to word align */
#define BYTES_NEEDED_TO_WORD_ALIGN(bytes) ((bytes) & 0x3 ? (4 - ((bytes) & 0x3)) : 0)

/* Rounds down to the nearest word boundary */
#define ROUND_DOWN_TO_WORD(bytes) (BYTES_NEEDED_TO_WORD_ALIGN(bytes) ? \
					bytes - (4 - BYTES_NEEDED_TO_WORD_ALIGN(bytes)) : bytes)
