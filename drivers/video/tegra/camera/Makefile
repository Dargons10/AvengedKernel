GCOV_PROFILE := y
EXTRA_CFLAGS += -Idrivers/video/tegra/host

# Use stub when CONFIG_TEGRA_CAMERA is not set
obj-$(CONFIG_TEGRA_CAMERA) += camera.o
obj-$(CONFIG_TEGRA_CAMERA) += camera_power.o
obj-$(CONFIG_TEGRA_CAMERA) += camera_emc.o
obj-$(CONFIG_TEGRA_CAMERA) += camera_clk.o
obj-$(CONFIG_TEGRA_CAMERA) += camera_irq.o
obj-$(if $(CONFIG_TEGRA_CAMERA),,y) += camera_stub.o
