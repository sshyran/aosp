// clang-format off
// Generated file (from: conv_float_large.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_float_large {
// Generated conv_float_large test
#include "generated/examples/conv_float_large.example.cpp"
// Generated model constructor
#include "generated/models/conv_float_large.model.cpp"
} // namespace conv_float_large

TEST_F(GeneratedTests, conv_float_large) {
    execute(conv_float_large::CreateModel,
            conv_float_large::is_ignored,
            conv_float_large::examples);
}

