// Copyright 2017 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SYSTEM_API_DBUS_HAMMERD_DBUS_CONSTANTS_H_
#define SYSTEM_API_DBUS_HAMMERD_DBUS_CONSTANTS_H_

namespace hammerd {
const char kHammerdInterface[] = "org.chromium.hammerd";
const char kHammerdServicePath[] = "/org/chromium/hammerd";
const char kHammerdServiceName[] = "org.chromium.hammerd";

// Signals emitted by hammerd.
const char kBaseFirmwareUpdateStartedSignal[] = "BaseFirmwareUpdateStarted";
const char kBaseFirmwareUpdateSucceededSignal[] = "BaseFirmwareUpdateSucceeded";
const char kBaseFirmwareUpdateFailedSignal[] = "BaseFirmwareUpdateFailed";

}  // namespace hammerd

#endif  // SYSTEM_API_DBUS_HAMMERD_DBUS_CONSTANTS_H_
