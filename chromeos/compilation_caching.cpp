// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "CompilationBuilder.h"
#include "NeuralNetworks.h"
#include "Tracing.h"
#include "daemon_store.h"

using namespace android::nn;

// The Android NNAPI documentation recommends store compilation
// cache files in a secure location. See:
// https://source.android.com/devices/neural-networks/compilation-caching#security
//
// In ChromeOS, this is put in the 'cryptohome' folder of the user, which
// needs to be queried at runtime since it contains a hashed value of the
// username. Ideally, this would simply be done at the client level and
// then passed into ANeuralNetworksCompilation_setCaching, however in cases
// like SODA, it has no knowledge that it is running in ChromeOS and so
// getting that information up to the caller would require extending the
// NNAPI specification to offer an interface to it.
//
// Instead, we take the requested cache dir location and append it to the
// calculated cryptohome location 'under the hood'.
int ANeuralNetworksCompilation_setCaching(
    ANeuralNetworksCompilation* compilation, const char* cache_dir,
    const uint8_t* token) {
  NNTRACE_RT(NNTRACE_PHASE_COMPILATION,
             "ANeuralNetworksCompilation_setCaching");

  if (!compilation || !cache_dir || !token) {
    LOG(ERROR) << "ANeuralNetworksCompilation_setCaching passed a nullptr";
    return ANEURALNETWORKS_UNEXPECTED_NULL;
  }

  // Append the requested cache dir onto the daemon storage location.
  std::string cache_store_dir = DaemonStore::Get().GetDaemonStoreDir(cache_dir);

  CompilationBuilder* c = reinterpret_cast<CompilationBuilder*>(compilation);
  return c->setCaching(cache_store_dir.c_str(), token);
}
