// clang-format off
// Generated file (from: relu1_float_1_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu1_float_1_relaxed {
// Generated relu1_float_1_relaxed test
#include "generated/examples/relu1_float_1_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/relu1_float_1_relaxed.model.cpp"
} // namespace relu1_float_1_relaxed

TEST_F(GeneratedTests, relu1_float_1_relaxed) {
    execute(relu1_float_1_relaxed::CreateModel,
            relu1_float_1_relaxed::is_ignored,
            relu1_float_1_relaxed::examples);
}

