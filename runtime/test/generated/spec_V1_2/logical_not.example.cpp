// Generated from logical_not.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

using namespace test_helper;

namespace generated_tests::logical_not {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, false, false, true}),
                .dimensions = {1, 1, 4, 1, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({false, true, true, false}),
                .dimensions = {1, 1, 4, 1, 1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::LOGICAL_NOT
            }},
        .outputIndexes = {1}
    };
    return model;
}

}  // namespace generated_tests::logical_not

