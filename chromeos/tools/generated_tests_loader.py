# -*- coding: utf-8 -*-
# Copyright 2021 The Chromium OS Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.
"""Creates C++ files that ensure all the generated tests are loaded.

All the generated test files in ml/nn/runtime/test/generated/... need
to be added to a BUILD.gn file, since there is no way to glob a
directory into a build target using gn.

Further, even if they're built, a symbol in each file needs to be
referenced from the test binary in order to ensure the object file is
loaded. This script generates a set of files that can be added to the
test target that performs this referencing and hence ensures the tests
are loaded. Specifically, the following files are generated / checked:

* ml/nn/chromeos/tests/runtime/generated_test_loader_V1_0.cc
* ml/nn/chromeos/tests/runtime/generated_test_loader_V1_1.cc
* ml/nn/chromeos/tests/runtime/generated_test_loader_V1_2.cc
* ml/nn/chromeos/tests/runtime/generated_test_loader_V1_3.cc
* ml/nn/chromeos/tests/runtime/generated_test_loader_V1_3_cts.cc

"""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import argparse
import os
import re
import sys
import textwrap

# This is a regex to find a callable symbol in the test file(s).
SYMBOL_PATTERN = re.compile("const TestModel\& (get_test_model[\w]*)\(")


def generate_header():
  return textwrap.dedent("""\
    // Copyright 2021 The Chromium OS Authors. All rights reserved.
    // Use of this source code is governed by a BSD-style license that can be
    // found in the LICENSE file.

    #include <gtest/gtest.h>
    #include "TestHarness.h"

    // This file has been generated with the generated_tests_loader.py script.
    // DO NOT EDIT!\n
    """)


def generate_forward_declaration(namespace, symbol):
  return (
      "namespace generated_tests::{namespace} {{ const test_helper::TestModel&"
      " {symbol}(); }}\n").format(
          namespace=namespace, symbol=symbol)


def generate_symbol_reference(namespace, symbol):
  return ("generated_tests::{namespace}::{symbol}();\n").format(
      namespace=namespace, symbol=symbol)


def get_symbol(file_path):
  """Scans the provided file to find a callable symbol.

  Returns None otherwise.

  Args:
    file_path: The file to scan for a callable symbol

  Returns:
    The name of a symbol that can be called. None otherwise.
  """
  content = read_file(file_path)
  match = SYMBOL_PATTERN.search(content)
  if match:
    return match.group(1)
  else:
    return None


def generate_loader(dir_name, excluded_files):
  """Generates the contents of the test loader C++ file.

  Args:
    dir_name: The spec_V* directory to process and include each of .cc files
      into the test loader.
    excluded_files: List of files to exclude from the loader.

  Returns:
    The expected contents of the C++ test loader file.
  """
  dir_suffix = dir_name.split("/")[-1]
  content = generate_header()

  namespace_to_symbol = {
      file.name.split(".")[0]: get_symbol(file.path)
      for file in os.scandir(dir_name)
  }
  sorted_keys = sorted(
      [n for n in namespace_to_symbol.keys() if n not in excluded_files])

  for namespace in sorted_keys:
    content += generate_forward_declaration(namespace,
                                            namespace_to_symbol[namespace])

  content += "\nTEST(GeneratedTestsLoader, " + dir_suffix + ") {\n"
  for namespace in sorted_keys:
    content += "  " + generate_symbol_reference(namespace,
                                                namespace_to_symbol[namespace])
  content += "\n  EXPECT_TRUE(true);\n"
  content += "}\n"

  return content


def read_file(filename):
  with open(filename) as reader:
    return reader.read()


def write_file(filename, content):
  with open(filename, "w") as writer:
    writer.write(content)


def process_dir(dir_name, output_filename, excluded_files, check_only=False):
  """Processes a spec_V* directory to check or regenerate the loader file.

  Args:
    dir_name: The spec_V* directory to process and include each of .cc files
      into the test loader.
    output_filename: The C++ test loader file to check or regenerate.
    excluded_files: List of files to exclude from the loader.
    check_only: If true, compares the expected contents with the actual file
      contents and prints an error and exit if there is a difference. If false,
      it will regenerate the load file with the expected contents.
  """
  content = generate_loader(dir_name, excluded_files)
  existing_content = read_file(output_filename)

  if check_only:
    if content != existing_content:
      print(("\n{output_filename} is out of date. "
             "Please run {this_script} before uploading.\n").format(
                 output_filename=output_filename, this_script=__file__))
      sys.exit(1)
  else:
    write_file(output_filename, content)


def main():
  parser = argparse.ArgumentParser()
  parser.add_argument(
      "--check_only", help="if false, re-write the files", action="store_true")
  args = parser.parse_args()
  check_only = args.check_only

  root_dir = os.path.abspath(
      os.path.join(os.path.dirname(__file__), "..", ".."))

  to_process = {
      "spec_V1_0": {
          "output_file":
              "generated_test_loader_V1_0.cc",
          "excluded_files": [
              # Uses hardware buffers which are unsupported (b/157388904)
              "mobilenet_224_gender_basic_fixed",
              "mobilenet_quantized"
          ]
      },
      "spec_V1_1": {
          "output_file": "generated_test_loader_V1_1.cc",
          # Uses hardware buffers which are unsupported (b/157388904)
          "excluded_files": ["mobilenet_224_gender_basic_fixed_relaxed"]
      },
      "spec_V1_2": {
          "output_file": "generated_test_loader_V1_2.cc",
          "excluded_files": []
      },
      "spec_V1_3": {
          "output_file": "generated_test_loader_V1_3.cc",
          # Uses hardware buffers which are unsupported (b/157388904)
          "excluded_files": ["if_constant", "while_fib", "while_sum_of_powers"]
      },
      "spec_V1_3_cts_only": {
          "output_file": "generated_test_loader_V1_3_cts.cc",
          "excluded_files": []
      },
  }

  for spec_dir, params in to_process.items():
    process_dir(
        dir_name=root_dir + "/runtime/test/generated/" + spec_dir,
        output_filename=root_dir + "/chromeos/tests/runtime/" +
        params["output_file"],
        excluded_files=params["excluded_files"],
        check_only=check_only)


if __name__ == "__main__":
  main()
