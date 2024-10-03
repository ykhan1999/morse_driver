#ifndef _MORSE_PAGER_IF_HW_H_
#define _MORSE_PAGER_IF_HW_H_

/*
 * Copyright 2017-2022 Morse Micro
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
 *
 */
#include "pager_if.h"

/* This is the interface to the hardware backed version of the pager
 * that is present on some morse chips. There may be multiple instances
 * of the hardware per chip.
 *
 * This implementation does not require locking as the pager hardware
 * guarantees atomic operation.
 */

struct morse_pager_hw_table {
	u32 addr;		/* location of the pager table */
	u32 count;		/* Number of entries in the table */
};

struct morse_pager_hw_entry {
	u8 flags;		/* Indicate direction of pager */
	u8 padding;
	u16 page_size;		/* Page size in bytes */
	u32 pop_addr;		/* Pager hardware instance pop address */
	u32 push_addr;		/* Pager hardware instance push address */
} __packed;

int morse_pager_hw_read_table(struct morse *mors, struct morse_pager_hw_table *tbl_ptr);

/* HW interface specific fields */
int morse_pager_hw_init(struct morse *mors, struct morse_pager *pager, u32 put_addr, u32 pop_addr);
void morse_pager_hw_finish(struct morse *mors, struct morse_pager *pager);

/* Implementing interface from hw.h */
int morse_pager_hw_pagesets_init(struct morse *mors);
void morse_pager_hw_pagesets_flush_tx_data(struct morse *mors);
void morse_pager_hw_pagesets_finish(struct morse *mors);

#endif /* !_MORSE_PAGER_IF_HW_H_ */
