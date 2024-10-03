#ifndef _MORSE_UACCESS_H_
#define _MORSE_UACCESS_H_

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
#include <linux/cdev.h>

#define UACCESS_IOC_MAGIC	'k'
#define UACCESS_IOC_MAXNR	1
#define UACCESS_IOC_SET_ADDRESS	_IO(UACCESS_IOC_MAGIC, 1)

struct uaccess {
	struct class *drv_class;
};

struct uaccess_device {
	struct cdev cdev;
	struct device *device;
	struct uaccess *uaccess;
	struct morse *mors;
};

struct uaccess *uaccess_alloc(void);
int uaccess_init(struct uaccess *uaccess);
void uaccess_cleanup(struct uaccess *uaccess);

int uaccess_device_register(struct morse *mors, struct uaccess *uaccess, struct device *parent);
void uaccess_device_unregister(struct morse *mors);

#endif /* !_MORSE_UACCESS_H_ */
