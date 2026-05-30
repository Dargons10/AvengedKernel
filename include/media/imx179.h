/*
 * include/media/imx179.h - Sony IMX179 sensor platform data
 *
 * Copyright (c) 2026, Dargons10
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 */

#ifndef __IMX179_H__
#define __IMX179_H__

#include <linux/videodev2.h>

#define IMX179_DRIVER_NAME "imx179"
#define IMX179_I2C_ADDR    0x10
#define IMX179_CHIP_ID     0x0179

/* Default resolution */
#define IMX179_DEFAULT_WIDTH  3264
#define IMX179_DEFAULT_HEIGHT 2448

/* Pixel formats supported */
#define IMX179_DEFAULT_FMT    MEDIA_BUS_FMT_SRGGB10_1X10

/* Clock frequency */
#define IMX179_MCLK_FREQ      24000000

/* Frame rates */
#define IMX179_DEFAULT_FPS    30

struct imx179_platform_data {
    int reset_gpio;
    int pwdn_gpio;
    int af_gpio;

    const char *vana_reg;  /* 2.7V analog */
    const char *vdig_reg;  /* 1.8V digital */
    const char *vif_reg;   /* 1.2V interface */

    int csi_port;
    int num_lanes;

    unsigned long mclk_freq;
};

#endif /* __IMX179_H__ */
