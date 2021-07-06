// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ML_NN_CHROMEOS_SAMPLEDRIVER_UTIL_H_
#define ML_NN_CHROMEOS_SAMPLEDRIVER_UTIL_H_

#include <string>
#include <unordered_map>

bool ReadFileTo(std::string& filePath, std::string* content);
void* GetFunctionFrom(std::string& libraryPath, std::string& functionName);
bool ParseConfigTo(std::string& content, std::unordered_map<std::string, std::string>& driverToLib, std::string& filePath);

#endif  // ML_NN_CHROMEOS_SAMPLEDRIVER_UTIL_H_
