#ifndef _MORSE_OF_H_
#define _MORSE_OF_H_

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

#include "hw.h"

/**
 * morse_of_probe - reads of pins in compatible device tree.
 * @dev: device struct containing the of_node
 * @cfg: morse_hw_config struct to be updated from of_node
 * @match_table: match table containing the compatibility strings
 */
void morse_of_probe(struct device *dev, struct morse_hw_cfg *cfg,
		    const struct of_device_id *match_table);

#endif /* !_MORSE_OF_H_ */
