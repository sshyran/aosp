// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#include <base/logging.h>
#include <base/files/file_util.h>
#include <base/files/file_path.h>
#include <base/native_library.h>
#include "sampledriver_util.h"

bool ReadFileTo(std::string& filePath, std::string* content) {
    base::FilePath path(filePath);
    return base::ReadFileToString(path, content);
}

void* GetFunctionFrom(std::string& libraryPath, std::string& functionName) {
    base::FilePath path(libraryPath);
    base::NativeLibraryOptions options;
    base::NativeLibraryLoadError loadError;
    auto library = base::LoadNativeLibraryWithOptions(path, options, &loadError);
    if (library == nullptr) {
        LOG(ERROR) << "Failed to load driver from: " << path << " with error " << loadError.ToString();
        return nullptr;
    }
    auto functionPointer = base::GetFunctionPointerFromNativeLibrary(library, functionName.c_str());
    if (functionPointer == nullptr) {
        LOG(FATAL) << "Cannot get funtion " << functionName << " from " << libraryPath;
    }
    return functionPointer;
}

// util function to parse incoming config text to a map
bool ParseConfigTo(std::string& content, std::unordered_map<std::string, std::string>& driverToLib, std::string& filePath) {
  if (content.size() == 0) return false;

  std::string line;
  std::stringstream contentStream(content);

  while(std::getline(contentStream, line, '\n')) {
    // empty line move forward
    if (line.size() == 0) continue;
    int seperatorIdx = line.find(':');
    // can not find delimeter or delimeter is in a invalid position I.E. begining of a config
    if (seperatorIdx == -1 || seperatorIdx == 0 || seperatorIdx + 1 >= line.size()) {
      LOG(ERROR) << "Error of parsing driver config in " << filePath;
      driverToLib.clear();
      return false;
    }
    std::string driverKey = line.substr(0, seperatorIdx);
    std::string driverValue = line.substr(seperatorIdx + 1);
    driverToLib[driverKey] = driverValue;
  }
  return driverToLib.size() > 0;
}
