// clang-format off
// Generated file (from: relu1_float16_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu1_float16_2 {
// Generated relu1_float16_2 test
#include "generated/examples/relu1_float16_2.example.cpp"
// Generated model constructor
#include "generated/models/relu1_float16_2.model.cpp"
} // namespace relu1_float16_2

TEST_F(GeneratedTests, relu1_float16_2) {
    execute(relu1_float16_2::CreateModel,
            relu1_float16_2::is_ignored,
            relu1_float16_2::get_examples());
}

