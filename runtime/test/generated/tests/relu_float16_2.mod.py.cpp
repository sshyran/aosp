// clang-format off
// Generated file (from: relu_float16_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu_float16_2 {
// Generated relu_float16_2 test
#include "generated/examples/relu_float16_2.example.cpp"
// Generated model constructor
#include "generated/models/relu_float16_2.model.cpp"
} // namespace relu_float16_2

TEST_F(GeneratedTests, relu_float16_2) {
    execute(relu_float16_2::CreateModel,
            relu_float16_2::is_ignored,
            relu_float16_2::examples);
}

