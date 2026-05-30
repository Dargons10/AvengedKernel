/*
 * include/media/ov5693.h - OmniVision OV5693 sensor platform data
 *
 * Copyright (c) 2026, Dargons10
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 */

#ifndef __OV5693_H__
#define __OV5693_H__

#include <linux/videodev2.h>

#define OV5693_DRIVER_NAME "ov5693"
#define OV5693_I2C_ADDR    0x36
#define OV5693_CHIP_ID     0x5693

/* Default resolution */
#define OV5693_DEFAULT_WIDTH  2592
#define OV5693_DEFAULT_HEIGHT 1944

/* Pixel formats supported */
#define OV5693_DEFAULT_FMT    MEDIA_BUS_FMT_SBGGR10_1X10

/* Clock frequency */
#define OV5693_MCLK_FREQ      24000000

/* Frame rates */
#define OV5693_DEFAULT_FPS    30

struct ov5693_platform_data {
    int reset_gpio;
    int pwdn_gpio;

    const char *avdd_reg;  /* 2.7V analog */
    const char *dovdd_reg; /* 1.8V digital IO */
    const char *dvdd_reg;  /* 1.2V digital */

    int csi_port;
    int num_lanes;

    unsigned long mclk_freq;
};

#endif /* __OV5693_H__ */
