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

#include <linux/etherdevice.h>
#include <linux/slab.h>
#include <linux/jiffies.h>
#include <linux/crc32.h>
#include <net/mac80211.h>
#include <linux/rtnetlink.h>
#include <asm/div64.h>

#include "command.h"
#include "morse.h"
#include "mac.h"
#include "utils.h"
#include "wiphy.h"
#include "debug.h"


struct morse *morse_wiphy_to_morse(struct wiphy *wiphy)
{
	struct ieee80211_hw *hw;


	/* In softmac mode, mac80211 has installed struct ieee80211_hw as the priv structure
	 * in wiphy, ours is inside that.
	 */
	hw = wiphy_to_ieee80211_hw(wiphy);
	return hw->priv;
}

