// clang-format off
// Generated file (from: mul_broadcast_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mul_broadcast_float16 {
// Generated mul_broadcast_float16 test
#include "generated/examples/mul_broadcast_float16.example.cpp"
// Generated model constructor
#include "generated/models/mul_broadcast_float16.model.cpp"
} // namespace mul_broadcast_float16

TEST_F(GeneratedTests, mul_broadcast_float16) {
    execute(mul_broadcast_float16::CreateModel,
            mul_broadcast_float16::is_ignored,
            mul_broadcast_float16::get_examples());
}

TEST_F(DynamicOutputShapeTest, mul_broadcast_float16_dynamic_output_shape) {
    execute(mul_broadcast_float16::CreateModel_dynamic_output_shape,
            mul_broadcast_float16::is_ignored_dynamic_output_shape,
            mul_broadcast_float16::get_examples_dynamic_output_shape());
}

