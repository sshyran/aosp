#!/bin/bash
#
# Copyright (C) 2019 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set -Eeuox pipefail
cd "$(dirname "$0")/.."  # runtime/test

NNAPI_VERSIONS="V1_0 V1_1 V1_2"
CTS_GENERATOR="../../tools/test_generator/cts_generator.py"
VTS_GENERATOR="../../tools/test_generator/vts_generator.py"

for source_version in $NNAPI_VERSIONS; do
  generated_dir="generated/spec_$source_version"
  cts_dir="$generated_dir/cts"
  mkdir -p "$cts_dir"
  "$CTS_GENERATOR" "specs/$source_version" \
    --test="$cts_dir" \
    --model="$cts_dir" \
    --example="$generated_dir" \
    "$@"
  for target_version in $NNAPI_VERSIONS; do
    if [[ "$source_version" > "$target_version" ]]; then
      continue
    fi
    vts_dir="$generated_dir/vts_$target_version"
    mkdir -p "$vts_dir"
    "$VTS_GENERATOR" "specs/$source_version" \
      --test="$vts_dir" \
      --model="$vts_dir" \
      --target_hal_version="$target_version" \
      "$@"
  done
done
