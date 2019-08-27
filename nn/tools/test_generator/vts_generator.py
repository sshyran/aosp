#!/usr/bin/python3

# Copyright 2017, The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
"""VTS testcase generator

Implements VTS test backend. Shares most logic with the CTS test
generator. Invoked by ml/nn/runtime/test/specs/generate_vts_tests.sh;
See that script for details on how this script is used.

"""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import numpy as np
import os
import struct

import test_generator as tg

target_hal_version = None

# Take a model from command line
def ParseCmdLine():
    global target_hal_version
    parser = tg.ArgumentParser()
    parser.add_argument(
        "--target_hal_version",
        help="the HAL version of the output",
        required=True,
        choices=["V1_0", "V1_1", "V1_2"])
    args = tg.ParseArgs(parser)
    target_hal_version = args.target_hal_version
    args.example = None  # VTS generator does not generate examples. See cts_generator.py.
    tg.FileNames.InitializeFileLists(args.spec, args.example, args.test)


VTS_TEST_TEMPLATE_HEAD = """
namespace {generated_cts_namespace} {{

const ::test_helper::TestModel& get_{examples_name}();

}} // namespace {generated_cts_namespace}

namespace {generated_vts_namespace} {{
"""

GENERATED_TEST_DEF = """
TEST_F(GeneratedTest, {test_name}) {{
    Execute(device, ::{generated_cts_namespace}::get_{examples_name}());
}}
"""

DYNAMIC_OUTPUT_SHAPE_TEST_DEF = """
TEST_F(DynamicOutputShapeTest, {test_name}) {{
    Execute(device, ::{generated_cts_namespace}::get_{examples_name}(), true);
}}
"""

VALIDATION_TEST_DEF = """
TEST_F(ValidationTest, {test_name}) {{
    const Model model = createModel(::{generated_cts_namespace}::get_{examples_name}());
    const Request request = createRequest(::{generated_cts_namespace}::get_{examples_name}());
    {validation_method}(model, request);
}}
"""

VTS_TEST_TEMPLATE_TAIL = """
}} // namespace {generated_vts_namespace}
"""

def GeneratedVtsTest(example, test_fd):
    generated_vts_namespace = "android::hardware::neuralnetworks::{hal_version}::generated_tests::{spec_name}".format(
        spec_name=tg.FileNames.specName, hal_version=target_hal_version)
    generated_cts_namespace = "generated_tests::{spec_name}".format(spec_name=tg.FileNames.specName)

    test_template = VTS_TEST_TEMPLATE_HEAD

    if not example.expectFailure:
        test_template += GENERATED_TEST_DEF
        if example.testDynamicOutputShape and target_hal_version >= "V1_2":
            test_template += DYNAMIC_OUTPUT_SHAPE_TEST_DEF
    test_template += VALIDATION_TEST_DEF

    test_template += VTS_TEST_TEMPLATE_TAIL

    print(test_template.format(
            test_name=str(example.testName),
            generated_vts_namespace=generated_vts_namespace,
            generated_cts_namespace=generated_cts_namespace,
            hal_version=target_hal_version,
            create_model_name=str(example.model.createTestFunctionName),
            is_ignored_name=str(example.model.isIgnoredFunctionName),
            examples_name=str(example.examplesName),
            validation_method="validateFailure" if example.expectFailure else "validateEverything",
        ), file=test_fd)

def InitializeFiles(test_fd, example_fd=None):
    assert example_fd is None, 'VTS generator does not generate examples'
    specFileBase = os.path.basename(tg.FileNames.specFile)
    fileHeader = """\
// Generated from {spec_file}
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"
""".format(spec_file=specFileBase)
    if test_fd is not None:
        print(fileHeader, file=test_fd)

if __name__ == "__main__":
    ParseCmdLine()
    tg.Run(InitializeFiles=InitializeFiles,
           DumpTest=GeneratedVtsTest)
