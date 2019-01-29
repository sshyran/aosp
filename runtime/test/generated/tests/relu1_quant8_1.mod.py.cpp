// clang-format off
// Generated file (from: relu1_quant8_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu1_quant8_1 {
// Generated relu1_quant8_1 test
#include "generated/examples/relu1_quant8_1.example.cpp"
// Generated model constructor
#include "generated/models/relu1_quant8_1.model.cpp"
} // namespace relu1_quant8_1

TEST_F(GeneratedTests, relu1_quant8_1) {
    execute(relu1_quant8_1::CreateModel,
            relu1_quant8_1::is_ignored,
            relu1_quant8_1::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, relu1_quant8_1_dynamic_output_shape) {
    execute(relu1_quant8_1::CreateModel_dynamic_output_shape,
            relu1_quant8_1::is_ignored_dynamic_output_shape,
            relu1_quant8_1::get_examples_dynamic_output_shape());
}

#endif
TEST_F(GeneratedTests, relu1_quant8_1_2) {
    execute(relu1_quant8_1::CreateModel_2,
            relu1_quant8_1::is_ignored_2,
            relu1_quant8_1::get_examples_2());
}

#if 0
TEST_F(DynamicOutputShapeTests, relu1_quant8_1_dynamic_output_shape_2) {
    execute(relu1_quant8_1::CreateModel_dynamic_output_shape_2,
            relu1_quant8_1::is_ignored_dynamic_output_shape_2,
            relu1_quant8_1::get_examples_dynamic_output_shape_2());
}

#endif
