// clang-format off
// Generated file (from: relu6_float_2_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu6_float_2_relaxed {
// Generated relu6_float_2_relaxed test
#include "generated/examples/relu6_float_2_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/relu6_float_2_relaxed.model.cpp"
} // namespace relu6_float_2_relaxed

TEST_F(GeneratedTests, relu6_float_2_relaxed) {
    execute(relu6_float_2_relaxed::CreateModel,
            relu6_float_2_relaxed::is_ignored,
            relu6_float_2_relaxed::examples);
}

