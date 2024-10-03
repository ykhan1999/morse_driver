/*
 * Copyright 2023 Morse Micro
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

#include "morse.h"
#include "command.h"

#define MORSE_OCS_AID		(AID_LIMIT + 1)	/* Use an unused AID */

int morse_ocs_cmd_post_process(struct morse_vif *mors_vif, const struct morse_resp_ocs *resp,
			       const struct morse_cmd_ocs *cmd);
int morse_evt_ocs_done(struct morse_vif *mors_vif, struct morse_event *event);
