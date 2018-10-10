// clang-format off
// Generated file (from: conv_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_float {
// Generated conv_float test
#include "generated/examples/conv_float.example.cpp"
// Generated model constructor
#include "generated/models/conv_float.model.cpp"
} // namespace conv_float

TEST_F(GeneratedTests, conv_float) {
    execute(conv_float::CreateModel,
            conv_float::is_ignored,
            conv_float::examples);
}

