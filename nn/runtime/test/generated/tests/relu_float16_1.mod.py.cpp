// clang-format off
// Generated file (from: relu_float16_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu_float16_1 {
// Generated relu_float16_1 test
#include "generated/examples/relu_float16_1.example.cpp"
// Generated model constructor
#include "generated/models/relu_float16_1.model.cpp"
} // namespace relu_float16_1

TEST_F(GeneratedTests, relu_float16_1) {
    execute(relu_float16_1::CreateModel,
            relu_float16_1::is_ignored,
            relu_float16_1::get_examples());
}

