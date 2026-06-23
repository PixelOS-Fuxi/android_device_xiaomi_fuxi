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
using std::string;

void property_override(const char* prop, const char* value) {
    auto pi = (prop_info*)__system_property_find(prop);
    if (pi != nullptr)
        __system_property_update(pi, value, strlen(value));
    else
        __system_property_add(prop, strlen(prop), value, strlen(value));
}

void vendor_load_properties() {
    // Stock ROM property spoofing - sourced from OS3.0.303.0.WMCMIXM
    property_override("keyguard.no_require_sim", "true");
    property_override("ro.boot.hwdevice", "mivendor");
    property_override("ro.boot.hwname", "mivendor");
    property_override("ro.boot.product.hardware.sku", "mivendor");
    property_override("ro.bootimage.build.date", "Mon May 18 05:45:16 UTC 2026");
    property_override("ro.bootimage.build.date.utc", "1779083116");
    property_override("ro.bootimage.build.fingerprint", "Xiaomi/fuxi_global/fuxi:13/TKQ1.221114.001/OS3.0.303.0.WMCMIXM:user/release-keys");
    property_override("ro.bootimage.build.id", "TKQ1.221114.001");
    property_override("ro.bootimage.build.tags", "release-keys");
    property_override("ro.bootimage.build.type", "user");
    property_override("ro.bootimage.build.version.incremental", "OS3.0.303.0.WMCMIXM");
    property_override("ro.bootimage.build.version.release", "13");
    property_override("ro.bootimage.build.version.release_or_codename", "13");
    property_override("ro.bootimage.build.version.sdk", "33");
    property_override("ro.build.date", "Mon May 18 12:59:14 CST 2026");
    property_override("ro.build.date.utc", "1779080354");
    property_override("ro.build.description", "missi-user 16 BP2A.250605.031.A3 OS3.0.303.0.WMCMIXM release-keys");
    property_override("ro.build.display.id", "BP2A.250605.031.A3");
    property_override("ro.build.fingerprint", "Xiaomi/missi/missi:16/BP2A.250605.031.A3/OS3.0.303.0.WMCMIXM:user/release-keys");
    property_override("ro.build.flavor", "missi-user");
    property_override("ro.build.host", "pangu-build-component-system-600797-69z8c-kwjbd-cz835");
    property_override("ro.build.id", "BP2A.250605.031.A3");
    property_override("ro.build.product", "missi");
    property_override("ro.build.tags", "release-keys");
    property_override("ro.build.type", "user");
    property_override("ro.build.user", "builder");
    property_override("ro.build.version.incremental", "OS3.0.303.0.WMCMIXM");
    property_override("ro.build.version.release", "16");
    property_override("ro.build.version.release_or_codename", "16");
    property_override("ro.build.version.sdk", "36");
    property_override("ro.build.version.security_patch", "2026-05-01");
    property_override("ro.hardware.keystore_desede", "true");
    property_override("ro.incremental.enable", "yes");
    property_override("ro.odm_dlkm.build.date", "Mon May 18 05:45:19 UTC 2026");
    property_override("ro.odm_dlkm.build.date.utc", "1779083119");
    property_override("ro.odm_dlkm.build.fingerprint", "Xiaomi/mivendor_sm8550_global/mivendor:13/TKQ1.221114.001/OS3.0.303.0.WMCMIXM:user/release-keys");
    property_override("ro.odm_dlkm.build.id", "TKQ1.221114.001");
    property_override("ro.odm_dlkm.build.tags", "release-keys");
    property_override("ro.odm_dlkm.build.type", "user");
    property_override("ro.odm_dlkm.build.version.incremental", "OS3.0.303.0.WMCMIXM");
    property_override("ro.odm_dlkm.build.version.release", "13");
    property_override("ro.odm_dlkm.build.version.release_or_codename", "13");
    property_override("ro.odm_dlkm.build.version.sdk", "33");
    property_override("ro.product.bootimage.brand", "Xiaomi");
    property_override("ro.product.bootimage.device", "fuxi");
    property_override("ro.product.bootimage.manufacturer", "Xiaomi");
    property_override("ro.product.bootimage.model", "2211133G");
    property_override("ro.product.bootimage.name", "fuxi_global");
    property_override("ro.product.brand", "Xiaomi");
    property_override("ro.product.device", "mivendor");
    property_override("ro.product.hardware.sku", "mivendor");
    property_override("ro.product.manufacturer", "Xiaomi");
    property_override("ro.product.model", "xiaomi for arm64");
    property_override("ro.product.name", "mivendor_sm8550_global");
    property_override("ro.product.odm_dlkm.brand", "Xiaomi");
    property_override("ro.product.odm_dlkm.device", "mivendor");
    property_override("ro.product.odm_dlkm.manufacturer", "Xiaomi");
    property_override("ro.product.odm_dlkm.model", "xiaomi for arm64");
    property_override("ro.product.odm_dlkm.name", "mivendor_sm8550_global");
    property_override("ro.product.system.brand", "Android");
    property_override("ro.product.system.device", "generic");
    property_override("ro.product.system.manufacturer", "Xiaomi");
    property_override("ro.product.system.model", "mainline");
    property_override("ro.product.system.name", "mainline");
    property_override("ro.product.system_dlkm.brand", "Xiaomi");
    property_override("ro.product.system_dlkm.device", "fuxi");
    property_override("ro.product.system_dlkm.manufacturer", "Xiaomi");
    property_override("ro.product.system_dlkm.model", "2211133G");
    property_override("ro.product.system_dlkm.name", "fuxi_global");
    property_override("ro.product.system_ext.brand", "Xiaomi");
    property_override("ro.product.system_ext.device", "missi");
    property_override("ro.product.system_ext.manufacturer", "QUALCOMM");
    property_override("ro.product.system_ext.model", "missi");
    property_override("ro.product.system_ext.name", "missi");
    property_override("ro.product.vendor.brand", "Xiaomi");
    property_override("ro.product.vendor.device", "mivendor");
    property_override("ro.product.vendor.manufacturer", "Xiaomi");
    property_override("ro.product.vendor.model", "xiaomi for arm64");
    property_override("ro.product.vendor.name", "mivendor_sm8550_global");
    property_override("ro.product.vendor_dlkm.brand", "Xiaomi");
    property_override("ro.product.vendor_dlkm.device", "fuxi");
    property_override("ro.product.vendor_dlkm.manufacturer", "Xiaomi");
    property_override("ro.product.vendor_dlkm.model", "2211133G");
    property_override("ro.product.vendor_dlkm.name", "fuxi_global");
    property_override("ro.soc.manufacturer", "QTI");
    property_override("ro.support_one_handed_mode", "true");
    property_override("ro.system.build.date", "Mon May 18 12:59:14 CST 2026");
    property_override("ro.system.build.date.utc", "1779080354");
    property_override("ro.system.build.fingerprint", "Xiaomi/missi/missi:16/BP2A.250605.031.A3/OS3.0.303.0.WMCMIXM:user/release-keys");
    property_override("ro.system.build.id", "BP2A.250605.031.A3");
    property_override("ro.system.build.tags", "release-keys");
    property_override("ro.system.build.type", "user");
    property_override("ro.system.build.version.incremental", "OS3.0.303.0.WMCMIXM");
    property_override("ro.system.build.version.release", "16");
    property_override("ro.system.build.version.release_or_codename", "16");
    property_override("ro.system.build.version.sdk", "36");
    property_override("ro.system_dlkm.build.date", "Mon May 18 05:45:16 UTC 2026");
    property_override("ro.system_dlkm.build.date.utc", "1779083116");
    property_override("ro.system_dlkm.build.fingerprint", "Xiaomi/fuxi_global/fuxi:13/TKQ1.221114.001/OS3.0.303.0.WMCMIXM:user/release-keys");
    property_override("ro.system_dlkm.build.id", "TKQ1.221114.001");
    property_override("ro.system_dlkm.build.tags", "release-keys");
    property_override("ro.system_dlkm.build.type", "user");
    property_override("ro.system_dlkm.build.version.incremental", "OS3.0.303.0.WMCMIXM");
    property_override("ro.system_dlkm.build.version.release", "13");
    property_override("ro.system_dlkm.build.version.release_or_codename", "13");
    property_override("ro.system_dlkm.build.version.sdk", "33");
    property_override("ro.system_ext.build.date", "Mon May 18 12:59:14 CST 2026");
    property_override("ro.system_ext.build.date.utc", "1779080354");
    property_override("ro.system_ext.build.fingerprint", "Xiaomi/missi/missi:16/BP2A.250605.031.A3/OS3.0.303.0.WMCMIXM:user/release-keys");
    property_override("ro.system_ext.build.id", "BP2A.250605.031.A3");
    property_override("ro.system_ext.build.tags", "release-keys");
    property_override("ro.system_ext.build.type", "user");
    property_override("ro.system_ext.build.version.incremental", "OS3.0.303.0.WMCMIXM");
    property_override("ro.system_ext.build.version.release", "16");
    property_override("ro.system_ext.build.version.release_or_codename", "16");
    property_override("ro.system_ext.build.version.sdk", "36");
    property_override("ro.vendor.build.date", "Mon May 18 05:45:19 UTC 2026");
    property_override("ro.vendor.build.date.utc", "1779083119");
    property_override("ro.vendor.build.fingerprint", "Xiaomi/mivendor_sm8550_global/mivendor:13/TKQ1.221114.001/OS3.0.303.0.WMCMIXM:user/release-keys");
    property_override("ro.vendor.build.id", "TKQ1.221114.001");
    property_override("ro.vendor.build.security_patch", "2026-02-01");
    property_override("ro.vendor.build.tags", "release-keys");
    property_override("ro.vendor.build.type", "user");
    property_override("ro.vendor.build.version.incremental", "OS3.0.303.0.WMCMIXM");
    property_override("ro.vendor.build.version.release", "13");
    property_override("ro.vendor.build.version.release_or_codename", "13");
    property_override("ro.vendor.build.version.sdk", "33");
    property_override("ro.vendor_dlkm.build.date", "Mon May 18 05:45:16 UTC 2026");
    property_override("ro.vendor_dlkm.build.date.utc", "1779083116");
    property_override("ro.vendor_dlkm.build.fingerprint", "Xiaomi/fuxi_global/fuxi:13/TKQ1.221114.001/OS3.0.303.0.WMCMIXM:user/release-keys");
    property_override("ro.vendor_dlkm.build.id", "TKQ1.221114.001");
    property_override("ro.vendor_dlkm.build.tags", "release-keys");
    property_override("ro.vendor_dlkm.build.type", "user");
    property_override("ro.vendor_dlkm.build.version.incremental", "OS3.0.303.0.WMCMIXM");
    property_override("ro.vendor_dlkm.build.version.release", "13");
    property_override("ro.vendor_dlkm.build.version.release_or_codename", "13");
    property_override("ro.vendor_dlkm.build.version.sdk", "33");
}
