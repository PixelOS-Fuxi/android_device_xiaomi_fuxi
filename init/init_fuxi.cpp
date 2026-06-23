/*
   Copyright (C) 2026 The PixelOS Project

   SPDX-License-Identifier: Apache-2.0
 */

#include <cstdlib>
#include <string.h>
#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_
#include <sys/_system_properties.h>
#include <android-base/properties.h>

#include "property_service.h"
#include "vendor_init.h"

using android::base::GetProperty;

void property_override(const char* prop, const char* value) {
    auto pi = (prop_info*)__system_property_find(prop);
    if (pi != nullptr)
        __system_property_update(pi, value, strlen(value));
    else
        __system_property_add(prop, strlen(prop), value, strlen(value));
}

void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) == 0 ||
        GetProperty("ro.bootmode", "") == "charger")
        return;

    // Brand / manufacturer — vendor/xiaomi/camera overrides to lowercase
    property_override("ro.product.brand", "Xiaomi");
    property_override("ro.product.manufacturer", "Xiaomi");

    // Xiaomi partition codename consistency
    property_override("ro.build.flavor", "missi-user");
    property_override("ro.build.product", "missi");

    // System (GSI / GKI)
    property_override("ro.product.system.brand", "Android");
    property_override("ro.product.system.device", "generic");
    property_override("ro.product.system.model", "mainline");
    property_override("ro.product.system.name", "mainline");

    // System_ext (Qualcomm BSP)
    property_override("ro.product.system_ext.device", "missi");
    property_override("ro.product.system_ext.manufacturer", "QUALCOMM");
    property_override("ro.product.system_ext.model", "missi");
    property_override("ro.product.system_ext.name", "missi");

    // Vendor
    property_override("ro.product.vendor.device", "mivendor");
    property_override("ro.product.vendor.model", "xiaomi for arm64");
    property_override("ro.product.vendor.name", "mivendor_sm8550_global");
    property_override("ro.vendor.build.version.sdk", "33");
}
