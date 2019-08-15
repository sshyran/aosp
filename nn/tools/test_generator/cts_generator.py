#!/usr/bin/python3

# Copyright 2018, The Android Open Source Project
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

"""CTS testcase generator

Implements CTS test backend. Invoked by ml/nn/runtime/test/specs/generate_tests.sh;
See that script for details on how this script is used.

"""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import argparse
import math
import os
import re
import sys
import traceback

# Stuff from test generator
import test_generator as tg
from test_generator import ActivationConverter
from test_generator import BoolScalar
from test_generator import Configuration
from test_generator import DataTypeConverter
from test_generator import DataLayoutConverter
from test_generator import Example
from test_generator import Float16Scalar
from test_generator import Float32Scalar
from test_generator import Float32Vector
from test_generator import GetJointStr
from test_generator import IgnoredOutput
from test_generator import Input
from test_generator import Int32Scalar
from test_generator import Int32Vector
from test_generator import Internal
from test_generator import Model
from test_generator import Operand
from test_generator import Output
from test_generator import Parameter
from test_generator import ParameterAsInputConverter
from test_generator import RelaxedModeConverter
from test_generator import SmartOpen
from test_generator import SymmPerChannelQuantParams

def IndentedPrint(s, indent=2, *args, **kwargs):
    print('\n'.join([" " * indent + i for i in s.split('\n')]), *args, **kwargs)

# Take a model from command line
def ParseCmdLine():
    parser = argparse.ArgumentParser()
    parser.add_argument("spec", help="the spec file/directory")
    parser.add_argument(
        "-m", "--model", help="the output model file/directory", default="-")
    parser.add_argument(
        "-e", "--example", help="the output example file/directory", default="-")
    parser.add_argument(
        "-t", "--test", help="the output test file/directory", default="-")
    parser.add_argument(
        "-f", "--force", help="force to regenerate all spec files", action="store_true")
    # for slicing tool
    parser.add_argument(
        "-l", "--log", help="the optional log file", default="")
    args = parser.parse_args()
    tg.FileNames.InitializeFileLists(
        args.spec, args.model, args.example, args.test, args.log)
    Configuration.force_regenerate = args.force

def NeedRegenerate():
    if not all(os.path.exists(f) for f in \
        [tg.FileNames.modelFile, tg.FileNames.exampleFile, tg.FileNames.testFile]):
        return True
    specTime = os.path.getmtime(tg.FileNames.specFile) + 10
    modelTime = os.path.getmtime(tg.FileNames.modelFile)
    exampleTime = os.path.getmtime(tg.FileNames.exampleFile)
    testTime = os.path.getmtime(tg.FileNames.testFile)
    if all(t > specTime for t in [modelTime, exampleTime, testTime]):
        return False
    return True

# Write headers for generated files, which are boilerplate codes only related to filenames
def InitializeFiles(model_fd, example_fd, test_fd):
    specFileBase = os.path.basename(tg.FileNames.specFile)
    fileHeader = """\
// Generated from {spec_file}
// DO NOT EDIT
// clang-format off
#include "{header}"
"""
    print(fileHeader.format(spec_file=specFileBase, header="TestGenerated.h"), file=test_fd)
    print(fileHeader.format(spec_file=specFileBase, header="TestGenerated.h"), file=model_fd)
    print(fileHeader.format(spec_file=specFileBase, header="TestHarness.h"), file=example_fd)

# Dump is_ignored function for IgnoredOutput
def DumpCtsIsIgnored(model, model_fd):
    isIgnoredTemplate = """\
bool {is_ignored_name}(int i) {{
  static std::set<int> ignore = {{{ignored_index}}};
  return ignore.find(i) != ignore.end();
}}
"""
    print(isIgnoredTemplate.format(
        ignored_index=tg.GetJointStr(model.GetIgnoredOutputs(), method=lambda x: str(x.index)),
        is_ignored_name=str(model.isIgnoredFunctionName)), file=model_fd)

# Dump Model file for Cts tests
def DumpCtsModel(model, model_fd):
    assert model.compiled
    if model.dumped:
        return
    namespace = "generated_tests::{spec_name}".format(spec_name=tg.FileNames.specName)
    print("namespace {namespace} {{\n".format(namespace=namespace), file=model_fd)
    print("void %s(Model *model) {"%(model.createFunctionName), file=model_fd)

    # Phase 0: types
    for t in model.GetTypes():
        if t.scale == 0.0 and t.zeroPoint == 0 and t.extraParams is None:
            typeDef = "OperandType %s(Type::%s, %s);"%(t, t.type, t.GetDimensionsString())
        else:
            if t.extraParams is None or t.extraParams.hide:
                typeDef = "OperandType %s(Type::%s, %s, %s, %d);"%(
                    t, t.type, t.GetDimensionsString(), tg.PrettyPrintAsFloat(t.scale), t.zeroPoint)
            else:
                assert t.type == "TENSOR_QUANT8_SYMM_PER_CHANNEL", "Unexpected model configuration. " \
                                                                   "Extra params are currently expected for " \
                                                                   "TENSOR_QUANT8_SYMM_PER_CHANNEL operand type. "
                assert t.scale == 0.0 and t.zeroPoint == 0, "Scale and zero point are always zero for " \
                                                            "TENSOR_QUANT8_SYMM_PER_CHANNEL operands"
                typeDef = "OperandType %s(Type::%s, %s, %s);"%(
                    t, t.type, t.GetDimensionsString(), t.extraParams.GetConstructor())

        IndentedPrint(typeDef, file=model_fd)

    # Phase 1: add operands
    print("  // Phase 1, operands", file=model_fd)
    for op in model.operands:
        IndentedPrint("auto %s = model->addOperand(&%s);"%(op, op.type), file=model_fd)

    # Phase 2: operations
    print("  // Phase 2, operations", file=model_fd)
    for p in model.GetParameters():
        paramDef = "static %s %s[] = %s;\nmodel->setOperandValue(%s, %s, sizeof(%s) * %d);"%(
            p.type.GetCppTypeString(), p.initializer, p.GetListInitialization(), p,
            p.initializer, p.type.GetCppTypeString(), p.type.GetNumberOfElements())
        IndentedPrint(paramDef, file=model_fd)
    for op in model.operations:
        IndentedPrint("model->addOperation(ANEURALNETWORKS_%s, {%s}, {%s});"%(
            op.optype, tg.GetJointStr(op.ins), tg.GetJointStr(op.outs)), file=model_fd)

    # Phase 3: add inputs and outputs
    print ("  // Phase 3, inputs and outputs", file=model_fd)
    IndentedPrint("model->identifyInputsAndOutputs(\n  {%s},\n  {%s});"%(
        tg.GetJointStr(model.GetInputs()), tg.GetJointStr(model.GetOutputs())), file=model_fd)

    # Phase 4: set relaxed execution if needed
    if (model.isRelaxed):
        print ("  // Phase 4: set relaxed execution", file=model_fd)
        print ("  model->relaxComputationFloat32toFloat16(true);", file=model_fd)

    print ("  assert(model->isValid());", file=model_fd)
    print ("}\n", file=model_fd)
    DumpCtsIsIgnored(model, model_fd)
    print("}} // namespace {namespace}".format(namespace=namespace), file=model_fd)
    model.dumped = True

def DumpMixedType(operands, feedDict):
    supportedTensors = [
        "DIMENSIONS",
        "TENSOR_FLOAT32",
        "TENSOR_INT32",
        "TENSOR_QUANT8_ASYMM",
        "TENSOR_OEM_BYTE",
        "TENSOR_QUANT16_SYMM",
        "TENSOR_FLOAT16",
        "TENSOR_BOOL8",
        "TENSOR_QUANT8_SYMM_PER_CHANNEL",
        "TENSOR_QUANT16_ASYMM",
        "TENSOR_QUANT8_SYMM",
    ]
    typedMap = {t: [] for t in supportedTensors}
    FeedAndGet = lambda op, d: op.Feed(d).GetListInitialization()
    # group the operands by type
    for operand in operands:
        try:
            typedMap[operand.type.type].append(FeedAndGet(operand, feedDict))
            typedMap["DIMENSIONS"].append("{%d, {%s}}"%(
                operand.index, GetJointStr(operand.dimensions)))
        except KeyError as e:
            traceback.print_exc()
            sys.exit("Cannot dump tensor of type {}".format(operand.type.type))
    mixedTypeTemplate = """\
{{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{{dimensions_map}}},
  // int -> FLOAT32 map
  .float32Operands = {{{float32_map}}},
  // int -> INT32 map
  .int32Operands = {{{int32_map}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {{{uint8_map}}},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {{{int16_map}}},
  // int -> FLOAT16 map
  .float16Operands = {{{float16_map}}},
  // int -> BOOL8 map
  .bool8Operands = {{{bool8_map}}},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {{{int8_map}}},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {{{uint16_map}}},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {{{quant8_symm_map}}},
}}"""
    return mixedTypeTemplate.format(
        dimensions_map=tg.GetJointStr(typedMap.get("DIMENSIONS", [])),
        float32_map=tg.GetJointStr(typedMap.get("TENSOR_FLOAT32", [])),
        int32_map=tg.GetJointStr(typedMap.get("TENSOR_INT32", [])),
        uint8_map=tg.GetJointStr(typedMap.get("TENSOR_QUANT8_ASYMM", []) +
                                 typedMap.get("TENSOR_OEM_BYTE", [])),
        int16_map=tg.GetJointStr(typedMap.get("TENSOR_QUANT16_SYMM", [])),
        float16_map=tg.GetJointStr(typedMap.get("TENSOR_FLOAT16", [])),
        int8_map=tg.GetJointStr(typedMap.get("TENSOR_QUANT8_SYMM_PER_CHANNEL", [])),
        bool8_map=tg.GetJointStr(typedMap.get("TENSOR_BOOL8", [])),
        uint16_map=tg.GetJointStr(typedMap.get("TENSOR_QUANT16_ASYMM", [])),
        quant8_symm_map=tg.GetJointStr(typedMap.get("TENSOR_QUANT8_SYMM", []))
    )

# Dump Example file for Cts tests
def DumpCtsExample(example, example_fd):
    namespace = "generated_tests::{spec_name}".format(spec_name=tg.FileNames.specName)
    print("namespace {namespace} {{\n".format(namespace=namespace), file=example_fd)
    print("std::vector<::test_helper::MixedTypedExample>& get_%s() {" % (example.examplesName), file=example_fd)
    print("static std::vector<::test_helper::MixedTypedExample> %s = {" % (example.examplesName), file=example_fd)
    for inputFeedDict, outputFeedDict in example.feedDicts:
        print ('// Begin of an example', file = example_fd)
        print ('{\n.operands = {', file = example_fd)
        inputs = DumpMixedType(example.model.GetInputs(), inputFeedDict)
        outputs = DumpMixedType(example.model.GetOutputs(), outputFeedDict)
        print ('//Input(s)\n%s,' % inputs , file = example_fd)
        print ('//Output(s)\n%s' % outputs, file = example_fd)
        print ('},', file = example_fd)
        if example.expectedMultinomialDistributionTolerance is not None:
          print ('.expectedMultinomialDistributionTolerance = %f' %
                 example.expectedMultinomialDistributionTolerance, file = example_fd)
        print ('}, // End of an example', file = example_fd)
    print("};", file=example_fd)
    print("return %s;" % (example.examplesName), file=example_fd)
    print("};", file=example_fd)
    print("\n}} // namespace {namespace}".format(namespace=namespace), file=example_fd)

# Dump Test file for Cts tests
def DumpCtsTest(example, test_fd):
    namespace = "generated_tests::{spec_name}".format(spec_name=tg.FileNames.specName)
    testTemplate = """\
namespace {namespace} {{

void {create_model_name}(Model *model);
bool {is_ignored_name}(int);
std::vector<::test_helper::MixedTypedExample>& get_{examples_name}();

TEST_F({test_case_name}, {test_name}) {{
    execute({create_model_name},
            {is_ignored_name},
            get_{examples_name}(){log_file});
}}

}} // namespace {namespace}
"""
    if example.model.version is not None and not example.expectFailure:
        testTemplate += """\
TEST_AVAILABLE_SINCE({version}, {test_name}, {namespace}::{create_model_name})\n"""

    if example.expectFailure:
        testCaseName = "GeneratedValidationTests"
    elif example.model.hasDynamicOutputShape:
        testCaseName = "DynamicOutputShapeTest"
    else:
        testCaseName = "GeneratedTests"

    print(testTemplate.format(
        test_case_name=testCaseName,
        test_name=str(example.testName),
        namespace=namespace,
        create_model_name=str(example.model.createFunctionName),
        is_ignored_name=str(example.model.isIgnoredFunctionName),
        examples_name=str(example.examplesName),
        version=example.model.version,
        log_file=tg.FileNames.logFile), file=test_fd)

if __name__ == '__main__':
    ParseCmdLine()
    while tg.FileNames.NextFile():
        if Configuration.force_regenerate or NeedRegenerate():
            print("Generating CTS tests from spec %s" % tg.FileNames.specFile, file=sys.stderr)
            exec(open(tg.FileNames.specFile, "r").read())
            with SmartOpen(tg.FileNames.modelFile) as model_fd, \
                 SmartOpen(tg.FileNames.exampleFile) as example_fd, \
                 SmartOpen(tg.FileNames.testFile) as test_fd:
                InitializeFiles(model_fd, example_fd, test_fd)
                Example.DumpAllExamples(
                    DumpModel=DumpCtsModel, model_fd=model_fd,
                    DumpExample=DumpCtsExample, example_fd=example_fd,
                    DumpTest=DumpCtsTest, test_fd=test_fd)
        else:
            print("Skip file: %s" % tg.FileNames.specFile, file=sys.stderr)
