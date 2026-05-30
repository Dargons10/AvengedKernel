/*
 * include/media/ad5823.h - AD5823 VCM driver platform data
 *
 * Copyright (c) 2026, Dargons10
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 */

#ifndef __AD5823_H__
#define __AD5823_H__

#define AD5823_DRIVER_NAME "ad5823"
#define AD5823_I2C_ADDR    0x0c

/* Focus range */
#define AD5823_MIN_FOCUS   0
#define AD5823_MAX_FOCUS   1023
#define AD5823_STEP_FOCUS  1

struct ad5823_platform_data {
    int enable_gpio;
    const char *vdd_reg;
};

#endif /* __AD5823_H__ */
