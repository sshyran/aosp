// clang-format off
// Generated file (from: softmax_float_1_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace softmax_float_1_relaxed {
// Generated softmax_float_1_relaxed test
#include "generated/examples/softmax_float_1_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/softmax_float_1_relaxed.model.cpp"
} // namespace softmax_float_1_relaxed

TEST_F(GeneratedTests, softmax_float_1_relaxed) {
    execute(softmax_float_1_relaxed::CreateModel,
            softmax_float_1_relaxed::is_ignored,
            softmax_float_1_relaxed::examples);
}

