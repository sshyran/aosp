#!/bin/bash

# Copyright 2020 The Chromium OS Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# This script iterates through a set of git repositories and looks at how many
# commits behind an upstream branch that repo is. It prints the statistics for
# each repo to give the user an idea of whether it's time to merge in upstream
# changes.

# Normalize where we are to get the src directory. Assume we're somewhere
# in the aosp area.
ROOT=`pwd`
ROOT="${ROOT%/src/aosp*}/src"

REPOS_TO_UPSTREAM=(
  "/aosp/frameworks/ml"         "cros/upstream/master"
  "/aosp/system/core/libcutils" "cros/upstream"
  "/aosp/system/core/liblog"    "cros/upstream"
  "/aosp/system/core/libutils"  "cros/upstream"
  "/aosp/system/libbase"        "cros/upstream/master"
  "/aosp/system/libfmq"         "cros/upstream/master"
  "/aosp/system/libhidl"        "cros/upstream/master"
)

# Iterate through each repo, compare to the upstream branch.
COUNT=${#REPOS_TO_UPSTREAM[@]}
GIT_CMD="git log --oneline --date=short --pretty=format:\"%h%x09%an%x09%cd%x09%s\""
for ((i=0; i<$COUNT; i+=2))
do
  REPO_DIR=${REPOS_TO_UPSTREAM[i]}
  UPSTREAM_BRANCH=${REPOS_TO_UPSTREAM[i+1]}

  cd ${ROOT}/${REPO_DIR}
  GIT_LOG=$(${GIT_CMD} cros/master..${UPSTREAM_BRANCH})

  NUM_COMMITS=$(echo "${GIT_LOG}" | wc -l)
  EARLIEST_DATE=$(echo "${GIT_LOG}" | tail -n1 | awk 'BEGIN {FS="\t"}; {print $3}')
  LATEST_DATE=$(echo "${GIT_LOG}" | head -n1 | awk 'BEGIN {FS="\t"}; {print $3}')
  if [ -z "$EARLIEST_DATE" ]
  then
    echo "${REPO_DIR} is up to date."
  else
    echo "$(printf "%02d" ${NUM_COMMITS}) commits submitted between $EARLIEST_DATE and $LATEST_DATE are missing from ${REPO_DIR}"
  fi
done
