// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ML_NN_CHROMEOS_SAMPLE_DRIVER_H_
#define ML_NN_CHROMEOS_SAMPLE_DRIVER_H_

#include <HalInterfaces.h>

namespace android {
namespace nn {

// This returns an implementation of the SampleDriverFull
// CPU implementation. This should be removed once we've
// finished implementing the full NNHAL V1.3
V1_3::IDevice* GetSampleDriver();

}  // namespace nn
}  // namespace android

#endif  // ML_NN_CHROMEOS_SAMPLE_DRIVER_H_
