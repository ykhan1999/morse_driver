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
 * <https://www.gnu.org/licenses/>.
 *
 */

/* This initial value is for Minstrel, and there is another in rc.h for MMRC */
#define INIT_MAX_RATES_NUM	3

void morse_rc_sta_fill_tx_rates(struct morse *mors,
				struct morse_skb_tx_info *tx_info,
				struct sk_buff *skb,
				struct ieee80211_sta *sta, int tx_bw_mhz, bool rts_allowed);
