/*
 * Copyright 2024-2024 Morse Micro
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "reg_rules.h"

static struct morse_regdomain mors_au_regdom = {
	.n_reg_rules = 6,
	.alpha2 = "AU",
	.reg_rules = {
		/* S1G Actual Frequencies */
		MORSE_REG_RULE(915, 916, 1, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		MORSE_REG_RULE(916, 920, 4, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		MORSE_REG_RULE(920, 928, 8, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),

		/* S1G->11ac Mapped Frequencies */
		/* 27 => 112 */
		MORSE_REG_RULE(5550, 5570, 20, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 29 -> 35 => 116 -> 128 */
		MORSE_REG_RULE(5570, 5650, 80, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 37 -> 51 => 149 -> 177 */
		MORSE_REG_RULE(5735, 5895, 160, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
	}
};

static struct morse_regdomain mors_cn_regdom = {
	.n_reg_rules = 0,
	.alpha2 =  "CN",
	.reg_rules = {
		/* S1G Actual Frequencies */

		/* S1G->11ac Mapped Frequencies */
	},
};

static struct morse_regdomain mors_eu_regdom = {
	.n_reg_rules = 3,
	.alpha2 = "EU",
	.reg_rules = {
		/* S1G Actual Frequencies */
		MORSE_REG_RULE(863, 868, 1, 0, 16, AUTO_BW, 1000, 280, false, 0, 0, 0),

		/* S1G->11ac Mapped Frequencies */
		/* 1 -> 3 => 132 -> 136 */
		MORSE_REG_RULE(5650, 5690, 20, 0, 16, AUTO_BW, 1000, 280, false, 0, 0, 0),
		/* 5 -> 9 => 36 -> 44 */
		MORSE_REG_RULE(5170, 5230, 20, 0, 16, AUTO_BW, 1000, 280, false, 0, 0, 0),
	},
};

static struct morse_regdomain mors_in_regdom = {
	.n_reg_rules = 2,
	.alpha2 = "IN",
	.reg_rules = {
		/* S1G Actual Frequencies */
		MORSE_REG_RULE(865, 868, 1, 0, 16, AUTO_BW, 1000, 280, false, 0, 0, 0),
		/* S1G->11ac Mapped Frequencies */
		/* 5 -> 9 => 36 -> 44 */
		MORSE_REG_RULE(5170, 5230, 20, 0, 16, AUTO_BW, 1000, 280, false, 0, 0, 0),
	},
};

static struct morse_regdomain mors_jp_regdom = {
	.n_reg_rules = 3,
	.alpha2 =  "JP",
	.reg_rules = {
		/* S1G Actual Frequencies */
		/* 9 -> 21 */
		MORSE_REG_RULE(921, 928, 1, 0, 16, AUTO_BW, 1000, 1000, true, 2000, 50000, 2000),
		/* S1G->11ac Mapped Frequencies */
		/* 13->21 => 36, 40, 44, 48, 52, 56, 60, 64 */
		MORSE_REG_RULE(5170, 5330, 80, 0, 16, AUTO_BW, 1000, 1000, true, 2000, 50000, 2000),
		/* 9 => 108 */
		MORSE_REG_RULE(5530, 5550, 20, 0, 16, AUTO_BW, 1000, 1000, true, 2000, 50000, 2000),
	},
};

static struct morse_regdomain mors_kr_regdom = {
	.n_reg_rules = 7,
	.alpha2 =  "KR",
	.reg_rules = {
		/* S1G Actual Frequencies */
		MORSE_REG_RULE_KHZ(917500, 921500, 2000, 0, 4, AUTO_BW, 10000, 10000,
				   false, 0, 0, 0),
		MORSE_REG_RULE_KHZ(921500, 923500, 2000, 0, 10, AUTO_BW, 10000, 10000,
				   false, 0, 0, 0),
		MORSE_REG_RULE_KHZ(919500, 923500, 4000, 0, 4, AUTO_BW, 10000, 10000,
				   false, 0, 0, 0),
		/* S1G->11ac Mapped Frequencies */
		/* 1, 2, 3 => 132, 134, 136 */
		MORSE_REG_RULE(5650, 5690, 40, 0, 5, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 5, 6, 7 => 36, 38, 40 */
		MORSE_REG_RULE(5170, 5210, 40, 0, 5, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 9, 10, 11 => 44, 46, 48 */
		MORSE_REG_RULE(5210, 5250, 40, 0, 10, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 8 => 42 */
		MORSE_REG_RULE(5170, 5250, 80, 0, 5, AUTO_BW, 10000, 10000, false, 0, 0, 0),
	},
};

static struct morse_regdomain mors_nz_regdom = {
	.n_reg_rules = 6,
	.alpha2 =  "NZ",
	.reg_rules = {
		/* S1G Actual Frequencies */
		MORSE_REG_RULE(915, 916, 1, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		MORSE_REG_RULE(916, 920, 4, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		MORSE_REG_RULE(920, 928, 8, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),

		/* S1G->11ac Mapped Frequencies */
		/* 27 => 112 */
		MORSE_REG_RULE(5550, 5570, 20, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 29 -> 35 => 116 -> 128 */
		MORSE_REG_RULE(5570, 5650, 80, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 37 -> 51 => 149 -> 177 */
		MORSE_REG_RULE(5735, 5895, 160, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
	},
};

static struct morse_regdomain mors_sg_regdom = {
	.n_reg_rules = 6,
	.alpha2 =  "SG",
	.reg_rules = {
		/* S1G Actual Frequencies */
		MORSE_REG_RULE(866, 869, 2, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		MORSE_REG_RULE(920, 925, 4, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* S1G->11ac Mapped Frequencies */
		/* 7 => 40 */
		MORSE_REG_RULE(5190, 5210, 20, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 9 -> 11 => 44 -> 48 */
		MORSE_REG_RULE(5210, 5250, 40, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 37 -> 43 => 149 -> 161 */
		MORSE_REG_RULE(5735, 5815, 80, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 45 => 165 */
		MORSE_REG_RULE(5815, 5835, 20, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
	},
};

static struct morse_regdomain mors_us_regdom = {
	.n_reg_rules = 7,
	.alpha2 =  "US",
	.reg_rules = {
		/* S1G Actual Frequencies */
		MORSE_REG_RULE(902, 904, 2, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		MORSE_REG_RULE(904, 920, 16, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		MORSE_REG_RULE(920, 928, 8, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),

		/* S1G->11ac Mapped Frequencies */
		/* 1 -> 3 => 132 -> 136 */
		MORSE_REG_RULE(5650, 5690, 40, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 5 -> 19 => 36 -> 64 */
		MORSE_REG_RULE(5170, 5330, 160, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 21 -> 35 => 100 -> 128 */
		MORSE_REG_RULE(5490, 5650, 160, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
		/* 37 -> 51 => 149 -> 177 */
		MORSE_REG_RULE(5735, 5895, 160, 0, 30, AUTO_BW, 10000, 10000, false, 0, 0, 0),
	},
};

/* our reg db will now be an array of defined regdomains */
static struct morse_regdomain *mors_regions[] = {
	&mors_au_regdom,
	&mors_cn_regdom,
	&mors_eu_regdom,
	&mors_in_regdom,
	&mors_jp_regdom,
	&mors_kr_regdom,
	&mors_nz_regdom,
	&mors_sg_regdom,
	&mors_us_regdom,
};

const struct morse_regdomain *morse_reg_alpha_lookup(const char *alpha)
{
	int i;

	if (!alpha)
		return NULL;
	for (i = 0; i < ARRAY_SIZE(mors_regions); i++)
		if (!strncmp(mors_regions[i]->alpha2, alpha, strlen(alpha)))
			return mors_regions[i];
	return NULL;
}
