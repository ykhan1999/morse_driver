#ifndef _MORSE_WIPHY_H_
#define _MORSE_WIPHY_H_

/*
 * Copyright 2017-2023 Morse Micro
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
#include <net/mac80211.h>

/**
 * morse_wiphy_to_morse -  Look up &struct mors inside &struct wiphy
 *
 * Return: pointer to &struct mors
 */
struct morse *morse_wiphy_to_morse(struct wiphy *wiphy);


#endif /* !_MORSE_WIPHY_H_ */
