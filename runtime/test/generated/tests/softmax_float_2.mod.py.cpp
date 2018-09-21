// clang-format off
// Generated file (from: softmax_float_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace softmax_float_2 {
// Generated softmax_float_2 test
#include "generated/examples/softmax_float_2.example.cpp"
// Generated model constructor
#include "generated/models/softmax_float_2.model.cpp"
} // namespace softmax_float_2

TEST_F(GeneratedTests, softmax_float_2) {
    execute(softmax_float_2::CreateModel,
            softmax_float_2::is_ignored,
            softmax_float_2::examples);
}

