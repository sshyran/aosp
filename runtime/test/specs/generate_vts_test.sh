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

# usage: generate_vts_test.sh
# usage: generate_vts_test.sh V1_0
# usage: generate_vts_test.sh all

set -Eeuo pipefail

NNAPI_VERSIONS="V1_0 V1_1 V1_2"
LATEST_NNAPI_VERSION="V1_2"

HAL_VERSION="${1:-$LATEST_NNAPI_VERSION}"

if [[ "$HAL_VERSION" == "all" ]]; then
  # Re-call this script with each version explicitly.
  for ver in $NNAPI_VERSIONS; do
    "$0" "$ver"
  done
  exit
elif [[ " $NNAPI_VERSIONS " != *" $HAL_VERSION "* || "$HAL_VERSION" == *" "* ]]; then
  echo "Unknown HAL version: $HAL_VERSION; expected one of: $NNAPI_VERSIONS all" >&2
  echo "Note that generate_wrapper is deprecated. See http://b/136099076" >&2
  exit 1
fi

echo "Generating VTS tests for HAL $HAL_VERSION"

cd "$(dirname $0)"

VTS_PATH=`realpath ../`

function generate_spec_dirs {
  for ver in $NNAPI_VERSIONS;
  do
    if [[ "$ver" > "$HAL_VERSION" ]]; then
      break
    fi
    VER_DIR=$VTS_PATH/specs/$ver
    [ ! -d $VER_DIR ] && continue
    mkdir -p "$VTS_PATH/generated/vts/$HAL_VERSION/models/$ver"
    mkdir -p "$VTS_PATH/generated/vts/$HAL_VERSION/tests/$ver"
    $VTS_PATH/../../tools/test_generator/vts_generator.py $VER_DIR \
      --model "$VTS_PATH/generated/vts/$HAL_VERSION/models/$ver" \
      --test "$VTS_PATH/generated/vts/$HAL_VERSION/tests/$ver" \
      --target_hal_version $HAL_VERSION
  done
}

generate_spec_dirs
echo "Examples have not been updated. Until b/136099076 is fixed, please run generate_test.sh as well." >&2
