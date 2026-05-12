GCOV_PROFILE := y
EXTRA_CFLAGS += -Idrivers/video/tegra/host

obj-y += camera.o
obj-$(CONFIG_TEGRA_CAMERA) += camera_power.o
obj-$(CONFIG_TEGRA_CAMERA) += camera_emc.o
obj-$(CONFIG_TEGRA_CAMERA) += camera_clk.o
obj-$(CONFIG_TEGRA_CAMERA) += camera_irq.o
obj-y += camera_stub.o
