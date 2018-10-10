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

"""NN model compiler

Contain classes definition and utilify functions for compiling models and
examples into NDK-based CTS and VTS unit tests.

Used by cts_generator.py, vts_generator.py, and slicing.py
"""

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import argparse
from functools import reduce
import math
import os
import struct
import sys
import contextlib
import pprint

def GetJointStr(l, sep=", ", method=str):
    return sep.join([method(i) for i in l])

# Print in C float literal format
def PrettyPrintAsFloat(x):
    s = str(float(x))
    if s.find(".") >= 0 or s.find("e") >= 0:
        return s + "f"
    else:
        return s + ".0f"

@contextlib.contextmanager
def SmartOpen(filename=None, mode="w"):
    if filename and filename != '-':
        fh = open(filename, mode)
    else:
        fh = sys.stdout

    try:
        yield fh
    finally:
        if fh is not sys.stdout:
            fh.close()

# Tracking objects inside a model with a unique name
class NamedObject:
    existingNames = set()

    def __init__(self, *args, sep="_", showZero=False, startsFrom=0, skipRenaming=False):
        name = GetJointStr([i for i in args if i is not None and i != ""], sep=sep)
        if skipRenaming:
            self.name = name
            return
        # make the name unique by renaming with a suffix number
        uniqueName = name if showZero is False else name + sep + str(startsFrom)
        while uniqueName in self.__class__.existingNames:
            startsFrom += 1
            uniqueName = name + sep + str(startsFrom)
        self.__class__.existingNames.add(uniqueName)
        self.name = uniqueName

    def __str__(self):
        return self.name
    __repr__ = __str__

    # Since names are unique, objects with the same name are considered equal
    def __eq__(self, other):
        return isinstance(other, NamedObject) and self.name == other.name

    def __ne__(self, other):
        return not self.__eq__(other)

    def __hash__(self):
        return hash(self.name)

    def __lt__(self, other):
        return self.name < other.name

# Types, operands should all have a unique name since they share the same namespace
class NamedVariable(NamedObject):
    existingNames = set()
    def __init__(self, *args, sep="_", showZero=False, startsFrom=0, skipRenaming=False):
        NamedObject.__init__(self, *args, sep=sep, showZero=showZero,
            startsFrom=startsFrom, skipRenaming=skipRenaming)

# Global variables in the spec namespace such as CreateModel, is_ignored, and examples
class GlobalVariable(NamedVariable):
    def __init__(self, *args, skipRenaming=False):
        NamedObject.__init__(self, *args, startsFrom=1, skipRenaming=skipRenaming)

# Each test should have a unique name, but will not conflict with variables
class NamedTest(NamedObject):
    existingNames = set()
    def __init__(self, *args, startsFrom=0, skipRenaming=False):
        NamedObject.__init__(self, *args, startsFrom=1, skipRenaming=skipRenaming)

class Type(NamedVariable):
    typesMap = dict()
    typeLookup = {
        "INT32": "int32_t",
        "UINT32": "uint32_t",
        "FLOAT32": "float",
        "TENSOR_INT32": "int32_t",
        "TENSOR_FLOAT32": "float",
        "TENSOR_QUANT8_ASYMM": "uint8_t",
#     "OEM_SCALAR": this is service-defined.
        "TENSOR_OEM_BYTE": "uint8_t",
    }

    # types are named as "type0", "type1", ...
    def __init__(self, vt, dimensions, scale, zeroPoint, name="type", skipRenaming=False):
        NamedVariable.__init__(self, name, sep="", showZero=True, skipRenaming=skipRenaming)
        self.type = vt
        self.dimensions = dimensions
        self.scale = float(scale)
        self.zeroPoint = int(zeroPoint)

    # Factory for Type object, only create a new Type if requested type does
    # not have a match with all existing types
    @staticmethod
    def GetType(vt, dimensions, scale=0, zeroPoint=0):
        key = ",".join([vt, str(dimensions), str(scale), str(zeroPoint)])
        if key not in Type.typesMap:
            Type.typesMap[key] = Type(vt, dimensions, scale, zeroPoint)
        return Type.typesMap[key]

    @staticmethod
    def GetAllTypes():
        # sort to ensure a stable order when dumping the code
        return sorted(Type.typesMap.values())

    # For backward-compatibility
    @staticmethod
    def GetTypeFromString(vt, shape):
        dimensions, scale, zeroPoint = Type.GetParsedShape(shape)
        scale = float(scale)
        zeroPoint = int(zeroPoint)
        return Type.GetType(vt, dimensions, scale, zeroPoint)

    # For backward-compatibility
    @staticmethod
    def GetParsedShape(shape):
        # Parse shape
        if (shape != "" and shape != "{}"):
            left, sep, right = shape.partition('{')
            real_shape, sep, right = right.partition('}')
            shape = [int(x) for x in real_shape.split(",")]
            # left now looks like "0.0f, 127.5f, "
            scale, sep, zero_point = right.rpartition(',')
            if scale == "":
                if zero_point == "":
                    return shape, "0", "0"
                return shape, zero_point, "0"
            left, sep, scale = scale.partition(',')
            return shape, scale.replace("f", ""), zero_point
        else:
            return [], "0", "0"

    def GetNumberOfElements(self):
        return reduce(lambda x,y: x*y, self.dimensions, 1)

    def GetCppTypeString(self):
        return Type.typeLookup[self.type]

    def IsFloat(self):
        return self.GetCppTypeString() == "float"

    def GetElementByteSize(self):
        return 1 if self.GetCppTypeString() == "uint8_t" else 4

    def GetByteSize(self):
        return self.GetElementByteSize() * self.GetNumberOfElements()

    def GetDimensionsString(self):
        return "{" + GetJointStr(self.dimensions) + "}"

    def GetSignatureTuple(self):
        return (self.type, self.dimensions, self.scale, self.zeroPoint)

    # For backward-compatibility with slicing.py
    def GetRawShape(self):
        if self.scale == 0 and self.zeroPoint == 0:
            return self.GetDimensionsString()
        else:
            return GetJointStr([self.GetDimensionsString(), self.scale, self.zeroPoint])

# An operand that can be fed into operations. Also, an operand is always
# declared before operations.
class Operand(NamedVariable):

    def __init__(self, name, opType, value, backward=None, skipRenaming=False):
        NamedVariable.__init__(self, name, sep="", skipRenaming=skipRenaming)
        if type(opType) is str:
            self.type = Type.GetTypeFromString(opType, value)
            value = backward
        else:
            self.type = Type.GetType(*opType)
        self.SetValue(value)
        self.lifetime = "TEMPORARY_VARIABLE"
        self.ins = []
        self.outs = []

    def SetValue(self, value):
        self.value = value if type(value) is list or type(value) is tuple else [value]
        return self

    # Print value as cpp-style list initialization
    def GetListInitialization(self):
        assert self.value is not None, \
            "Trying to print operand %s with None value"%(str(self))
        if self.type.IsFloat():
            return "{%s}"%(GetJointStr(self.value, method=PrettyPrintAsFloat))
        else:
            return "{%s}"%(GetJointStr(self.value, method=lambda x: str(int(x))))

# Base class of user-defined input/output operand
class InOut(Operand):

    def __init__(self, name, opType, backward=None, skipRenaming=False):
        Operand.__init__(self, name, opType, backward, None, skipRenaming=skipRenaming)
        self.lifetime = "MODEL_INPUT"
        self.index = 0

    def Feed(self, value):
        self.SetValue(value[self] if type(value) is dict else value)
        return self

    def GetListInitialization(self):
        return "{%d, %s}"%(self.index, super().GetListInitialization())

# A user-declared input operand
class Input(InOut):
    def __init__(self, name, opType, backward=None, skipRenaming=False):
        InOut.__init__(self, name, opType, backward, skipRenaming=skipRenaming)
        self.lifetime = "MODEL_INPUT"

# A user-declared output operand
class Output(InOut):
    def __init__(self, name, opType, backward=None, skipRenaming=False):
        InOut.__init__(self, name, opType, backward, skipRenaming=skipRenaming)
        self.lifetime = "MODEL_OUTPUT"

# An output that we don't want to compare the results
class IgnoredOutput(Output):
    def __init__(self, name, opType, backward=None, skipRenaming=False):
        Output.__init__(self, name, opType, backward, skipRenaming=skipRenaming)
        self.lifetime = "MODEL_OUTPUT"
    def Feed(self, value):
        self.value = [0 for x in range(self.type.GetNumberOfElements())]
        return self

# An explicitly declared parameter
class Parameter(Operand):
    def __init__(self, name, opType, value, backward=None, skipRenaming=False):
        Operand.__init__(self, name, opType, value, backward, skipRenaming=skipRenaming)
        self.initializer = NamedVariable(str(self) + "_init")
        self.lifetime = "CONSTANT_COPY"

# A shortcut for parameters of INT32
class Int32Scalar(Parameter):
    def __init__(self, name, value):
        Parameter.__init__(self, name, ("INT32", []), int(value))

# A shortcut for parameters of FLOAT32
class Float32Scalar(Parameter):
    def __init__(self, name, value):
        Parameter.__init__(self, name, ("FLOAT32", []), float(value))

# An explicitly declared intermediate result
class Internal(Operand):
    def __init__(self, name, opType, backward=None, skipRenaming=False):
        Operand.__init__(self, name, opType, backward, None, skipRenaming=skipRenaming)
        self.lifetime = "TEMPORARY_VARIABLE"

# An operation in a model, does not need a name
class Operation:

    def __init__(self, optype, ins, outs):
        self.optype = optype
        self.SetInputs(ins)
        self.SetOutputs(outs)

    # for the ease of debugging
    def __str__(self):
        insString = GetJointStr(self.ins)
        outsString = GetJointStr(self.outs)
        return "Operation %s: [%s] -> [%s]"%(self.optype, insString, outsString)
    __repr__ = __str__

    def SetInputs(self, ins):
        self.ins = list(ins)
        for i in self.ins:
            i.outs.append(self)
        return self

    def SetOutputs(self, outs):
        self.outs = list(outs)
        for o in self.outs:
            o.ins.append(self)
        return self

    # For backward-compatibility with slicing.py
    # Get Python-ish dump for the op
    def PyDefinition(self):
        py_op_string = """Operation("{optype}", {inputs}).To({outputs})"""
        inputs = [str(x) for x in self.ins]
        inputs = ", ".join(inputs)
        assert len(self.outs) <= 1
        outputs = str(self.outs[0])
        ops = {"optype": self.optype, "inputs": inputs, "outputs": outputs}
        return py_op_string.format(**ops)

# Main interface
class Model:
    models = list()

    def __init__(self, name=None):
        self.name = name
        self.createFunctionName = GlobalVariable("CreateModel", self.name)
        self.createTestFunctionName = GlobalVariable("createTestModel", self.name)
        self.isIgnoredFunctionName = GlobalVariable("is_ignored", self.name)
        self.operations = []
        self.operands = []
        self.isRelaxed = False
        self.compiled = False
        self.dumped = False
        Model.models.append(self)

    def AddOperation(self, operation):
        self.operations.append(operation)
        for i in operation.ins:
            if i not in self.operands:
                self.operands.append(i)
        for o in operation.outs:
            if o not in self.operands:
                self.operands.append(o)
        return self

    def Operation(self, op_name, *args):
        return self.AddOperation(Operation(op_name, args, []))

    def To(self, *args):
        assert len(self.operations) > 0
        if type(args[0]) is tuple or type(args[0]) is list:
            outs = args[0]
        else:
            outs = args
        self.operations[-1].SetOutputs(outs)
        for o in outs:
            if o not in self.operands:
                self.operands.append(o)
        return self

    def RelaxedExecution(self, isRelaxed):
        self.isRelaxed = isRelaxed
        return self

    def GetInputs(self):
        return [i for i in self.operands if isinstance(i, Input)]

    def GetOutputs(self):
        return [o for o in self.operands if isinstance(o, Output)]

    def GetInputsIndex(self):
        return [i for i,op in enumerate(self.operands) if isinstance(op, Input)]

    def GetOutputsIndex(self):
        return [o for o,op in enumerate(self.operands) if isinstance(op, Output)]

    def GetIndexOfOperands(self, operands):
        return [self.operands.index(i) for i in operands]

    def GetIgnoredOutputs(self):
        return [o for o in self.operands if isinstance(o, IgnoredOutput)]

    def GetParameters(self):
        return [p for p in self.operands if isinstance(p, Parameter)]

    def GetEquivalentOperands(self, targets):
        return [self.operands[self.operands.index(t)] for t in targets]

    def UpdateEquivalentOperands(self, targets):
        for t in targets:
            self.operands[self.operands.index(t)] = t
        return self

    def TopologicalSortHelper(self, op, deps, visited):
        if op in visited:
            assert op not in deps, "Cycle detected in the graph"
        else:
            visited.add(op)
            for i in deps[op]:
                self.TopologicalSortHelper(i, deps, visited)
            self.operations.append(op)
            deps.pop(op)

    # Topological sort of the operations, and detect if there is a cycle is the graph
    def TopologicalSort(self):
        deps = {op: list() for op in self.operations}
        [deps[o].append(i) for op in self.operands for o in op.outs for i in op.ins]
        operations = self.operations.copy()
        self.operations = []
        visited = set()
        for op in operations:
            self.TopologicalSortHelper(op, deps, visited)

    def Compile(self):
        if self.compiled:
            return self
        # set input/output index for MixedTypedExample mapping
        for ind, i in enumerate(self.GetInputs()):
            i.index = ind
        for ind, o in enumerate(self.GetOutputs()):
            o.index = ind
        self.TopologicalSort()
        self.compiled = True
        return self

# An example is always attached to a model
class Example:
    examples = []

    def __init__(self, feedDicts, model=None, name=None):
        self.model = Model.models[-1] if model is None else model
        self.name = name
        if type(feedDicts[0]) is not tuple and type(feedDicts[0]) is not list:
            feedDicts = [feedDicts]
        self.feedDicts = list(feedDicts)
        Example.examples.append(self)

    # Main entrance of test generator
    @staticmethod
    def DumpAllExamples(DumpModel=None, model_fd=None,
                        DumpExample=None, example_fd=None,
                        DumpTest=None, test_fd=None):
        Example.CombineAllExamples()
        for example in Example.examples:
            example.Dump(DumpModel, model_fd, DumpExample, example_fd, DumpTest, test_fd)

    # Combine examples with the same model and same name
    @staticmethod
    def CombineAllExamples():
        modelMap = {}
        newExamples = []
        for example in Example.examples:
            key = (example.model, example.name)
            if key in modelMap:
                modelMap[key].Combine(example)
            else:
                modelMap[key] = example
                newExamples.append(example)
        Example.examples = newExamples

    def Combine(self, other):
        assert self.model is other.model, "Only examples targetting the same model can be combined"
        assert self.name == other.name, "Only examples with the same name can be combined"
        self.feedDicts.extend(other.feedDicts)
        return self

    def Dump(self, DumpModel, model_fd, DumpExample, example_fd, DumpTest, test_fd):
        # Concat names for test and examples
        self.testName = NamedTest(FileNames.specName, self.model.name, self.name)
        self.examplesName = GlobalVariable("examples", self.model.name, self.name)
        self.model.Compile()
        # Dump files
        if DumpModel is not None and model_fd is not None:
            DumpModel(self.model, model_fd)
        if DumpExample is not None and example_fd is not None:
            DumpExample(self, example_fd)
        if DumpTest is not None and test_fd is not None:
            DumpTest(self, test_fd)
        return self

    # For backward-compatibility with slicing.py
    # Similar to dump_dict, but in python. Used by the slicing tool
    # if referenced is not None, only print operands that are present there
    @staticmethod
    def py_dump_dict(d, referenced):
        ret = []
        for k, v in d.items():
            if referenced != None and k not in referenced:
                continue
            key = str(k)
            init = pprint.pformat(v)
            ret.append("%s: %s" % (key, init))
        return ", ".join(ret)

    # For backward-compatibility with slicing.py
    # similar to dump, but in python. Used by the slicing tool
    # if referenced is not None, only print operands that are present there
    @staticmethod
    def py_dump(example_file, override, referenced):
        Example.CombineAllExamples()
        if len(Example.examples[0].feedDicts) > 0:
            example_no = 0
            example_template = """\
input{no} = {{{inputs}}}
# Only executed during data collection phase
if collecting_data is True:
  Example((input{no}, {{{outputs}}}))
"""
        for i, o in Example.examples[0].feedDicts:
            print ('# Begin of an example', file = example_file)
            inputs = Example.py_dump_dict(i, referenced)
            output_list = []
            for k, v in override.items():
                output_list.append("%s: [0] * %d" % (k, v))
            outputs = ",".join(output_list)

            # TODO: handle >1 outputs
            for k, v in o.items():
                assert k.index == 0
            example_contents = {
                'no': example_no,
                'inputs': inputs,
                'outputs': outputs
            }
            print (example_template.format(**example_contents), file = example_file)

class FileNames:
    specFile = ""
    specName = ""
    modelFile = ""
    exampleFile = ""
    testFile = ""
    logFile = ""

class Configuration:
    use_shm_for_weights = False

    @staticmethod
    def useSHM():
        return Configuration.use_shm_for_weights
