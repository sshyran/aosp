// clang-format off
// Generated file (from: relu_float_1_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu_float_1_relaxed {
// Generated relu_float_1_relaxed test
#include "generated/examples/relu_float_1_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/relu_float_1_relaxed.model.cpp"
} // namespace relu_float_1_relaxed

TEST_F(GeneratedTests, relu_float_1_relaxed) {
    execute(relu_float_1_relaxed::CreateModel,
            relu_float_1_relaxed::is_ignored,
            relu_float_1_relaxed::examples);
}

