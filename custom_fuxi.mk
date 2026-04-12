#
# Copyright (C) 2024 The PixelOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit common AOSP configurations
$(call inherit-product, build/make/target/product/full_base_telephony.mk)
$(call inherit-product, build/make/target/product/core_64_bit.mk)

# Inherit device-specific configurations
$(call inherit-product, device/xiaomi/fuxi/device.mk)

# Inherit PixelOS configurations
$(call inherit-product, vendor/custom/config/common_full_phone.mk)

PRODUCT_DEVICE := fuxi
PRODUCT_NAME := custom_fuxi
PRODUCT_BRAND := Xiaomi
PRODUCT_MODEL := 2211133G
PRODUCT_MANUFACTURER := Xiaomi

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
PRODUCT_MODEL_FOR_ATTESTATION := 2211133G
PRODUCT_BRAND_FOR_ATTESTATION := Xiaomi
PRODUCT_NAME_FOR_ATTESTATION := fuxi_global
PRODUCT_DEVICE_FOR_ATTESTATION := fuxi
PRODUCT_MANUFACTURER_FOR_ATTESTATION := Xiaomi

BUILD_FINGERPRINT := Xiaomi/fuxi_global/fuxi:16/BP2A.250605.031.A3/OS3.0.303.0.WMCMIXM:user/release-keys
PRODUCT_BUILD_PROP_OVERRIDES += \
    BuildDesc="missi-user 16 BP2A.250605.031.A3 OS3.0.303.0.WMCMIXM release-keys" \
    BuildFingerprint=Xiaomi/fuxi_global/fuxi:16/BP2A.250605.031.A3/OS3.0.303.0.WMCMIXM:user/release-keys \
    DeviceName=fuxi \
    DeviceProduct=fuxi_global