SUMMARY = "NXP Wi-Fi SDK for module 88w8801/8987/8997/9098 and IW416/612"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://${WORKDIR}/git/LICENSE;md5=ab04ac0f249af12befccb94447c08b77"

# For Kernel 5.4 and later
SRCBRANCH = "lf-6.6.36_2.1.0"
MRVL_SRC ?= "git://github.com/nxp-imx/mwifiex.git;protocol=https"
SRC_URI = "${MRVL_SRC};branch=${SRCBRANCH}"
SRCREV = "e5c9a169d7b7a441a20d2cf10a9752e249b71cff"

S = "${WORKDIR}/git"

EXTRA_OEMAKE = "KERNELDIR=${STAGING_KERNEL_BUILDDIR}"

RDEPENDS:${PN} = "wireless-tools"
