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

#ifndef _MORSE_OFFLOAD_H_
#define _MORSE_OFFLOAD_H_

#include "morse.h"
#include "command.h"

/**
 * Max size of filename for DHCP update script
 */
#define DHCPC_LEASE_UPDATE_SCRIPT_NAME_SIZE_MAX		(64)

/**
 * @brief Handle a lease update event from the in-chip DHCP client
 * This function calls the script defined by the mod_param `dhcpc_lease_update_script` to handle
 * updating the addresses. The default script is located at `/morse/scripts/dhcpc_update.sh`
 *
 * It is called with the following parameters:
 * <interface name> <ip> <netmask> <gateway> <dns server>
 * eg.
 * wlan0 192.168.1.2 255.255.255.0 192.168.1.1 192.168.1.1
 *
 * If the lease has expired or cleared, all IP addresses passed will be the null address (0.0.0.0)
 *
 * @param mors Morse structure
 * @param evt lease update event
 * @return int 0 on success else error number
 */
int morse_offload_dhcpc_set_address(struct morse *mors, struct morse_evt_dhcp_lease_update *evt);

#endif /* !_MORSE_OFFLOAD_H_ */
