#!/bin/bash

#
# Copyright (C) 2017 The Android Open Source Project
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

set -Eeuo pipefail

NNAPI_VERSIONS="V1_0 V1_1 V1_2"

export NNAPI_BASE=$ANDROID_BUILD_TOP/frameworks/ml/nn
: ${TEST_DIR:=frameworks/ml/nn/runtime/test}
FORCE=""

# Process all test spec directory specified by NNAPI_VERSIONS.
function generate_spec_dirs {
  cd $ANDROID_BUILD_TOP/$TEST_DIR/specs

  for ver in $NNAPI_VERSIONS;
  do
    VER_DIR=$ANDROID_BUILD_TOP/$TEST_DIR/specs/$ver
    [ ! -d $VER_DIR ] && continue
    pushd $VER_DIR > /dev/null

    mkdir -p "$ANDROID_BUILD_TOP/$TEST_DIR/generated/models"
    mkdir -p "$ANDROID_BUILD_TOP/$TEST_DIR/generated/tests"
    mkdir -p "$ANDROID_BUILD_TOP/$TEST_DIR/generated/examples"

    $NNAPI_BASE/tools/test_generator/cts_generator.py $FORCE $VER_DIR \
      --model "$ANDROID_BUILD_TOP/$TEST_DIR/generated/models" \
      --test "$ANDROID_BUILD_TOP/$TEST_DIR/generated/tests" \
      --example "$ANDROID_BUILD_TOP/$TEST_DIR/generated/examples"
    if [ $? -ne 0 ]; then
        echo "Failed processing $VER_DIR"
        return $?
    fi
    popd > /dev/null
  done
  return $?
}

if [ $# -gt 0 ]; then
  if  [ $1 = "-f" ] || [ $1 = "--force" ]; then
    FORCE="-f"
    shift
  fi
fi
if [ $# -eq 0 ]; then
  generate_spec_dirs $FORCE
else
  echo "generate_wrapper is deprecated. See http://b/136099076" >&2
  exit 1
fi
