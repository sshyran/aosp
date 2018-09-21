// clang-format off
// Generated file (from: relu_float_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu_float_2 {
// Generated relu_float_2 test
#include "generated/examples/relu_float_2.example.cpp"
// Generated model constructor
#include "generated/models/relu_float_2.model.cpp"
} // namespace relu_float_2

TEST_F(GeneratedTests, relu_float_2) {
    execute(relu_float_2::CreateModel,
            relu_float_2::is_ignored,
            relu_float_2::examples);
}

