/*
 * drivers/video/tegra/camera/camera_stub.c
 *
 * Stub functions for tegra_camera when CONFIG_TEGRA_CAMERA is not set.
 * This allows VIDEO_TEGRA to function without full camera hardware support.
 *
 * Copyright (c) 2026. Licensed under GPL v2.
 */
#include <linux/export.h>
#include <linux/platform_device.h>
#include <linux/kernel.h>

/* Dummy structure pointer - just needs to be non-NULL */
static int dummy_camera;

struct tegra_camera *tegra_camera_register(struct platform_device *ndev)
{
	pr_info("tegra_camera: stub mode (no HW initialization)\n");
	return (struct tegra_camera *)&dummy_camera;
}
EXPORT_SYMBOL(tegra_camera_register);

int tegra_camera_unregister(struct tegra_camera *camera)
{
	return 0;
}
EXPORT_SYMBOL(tegra_camera_unregister);

int tegra_camera_suspend(struct tegra_camera *camera)
{
	return 0;
}
EXPORT_SYMBOL(tegra_camera_suspend);

int tegra_camera_resume(struct tegra_camera *camera)
{
	return 0;
}
EXPORT_SYMBOL(tegra_camera_resume);
