#ifndef _MORSE_HW_TRACE_H_
#define _MORSE_HW_TRACE_H_

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

#include "morse.h"

struct hw_trace {
	int pin;
	bool used;
};

extern struct hw_trace *hwt_tx_in;
extern struct hw_trace *hwt_tx_out;
extern struct hw_trace *hwt_pages;
extern struct hw_trace *hwt_page_return;

struct hw_trace *morse_hw_trace_register(void);

void morse_hw_trace_unregister(struct hw_trace *hwt);

void morse_hw_trace_set(struct hw_trace *hwt);

void morse_hw_trace_clear(struct hw_trace *hwt);

int morse_hw_trace_init(void);
void morse_hw_trace_deinit(void);

#endif /* !_MORSE_HW_TRACE_H_ */
