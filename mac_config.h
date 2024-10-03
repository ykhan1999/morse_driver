#ifndef _MORSE_MAC_CFG_H_
#define _MORSE_MAC_CFG_H_

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

/*
 * Enable/Disabe various WiFi Config options
 * To enable a configuration, replace the #undef with #define
 *
 * Note: As the config code is not finalized, enabling some of the configs may
 * break the code. So use with care.
 */

#undef MORSE_MAC_CONFIG_HT_CAP
#undef MORSE_MAC_CONFIG_IEEE80211_HW
#undef MORSE_MAC_CONFIG_WIPHY
#undef MORSE_MAC_CONFIX_RX_STATUS_SIG

#endif /* !_MORSE_MAC_CFG_H_ */
