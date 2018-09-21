// clang-format off
// Generated file (from: conv_float_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_float_2 {
// Generated conv_float_2 test
#include "generated/examples/conv_float_2.example.cpp"
// Generated model constructor
#include "generated/models/conv_float_2.model.cpp"
} // namespace conv_float_2

TEST_F(GeneratedTests, conv_float_2) {
    execute(conv_float_2::CreateModel,
            conv_float_2::is_ignored,
            conv_float_2::examples);
}

