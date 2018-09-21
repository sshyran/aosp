// clang-format off
// Generated file (from: argmax_2_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_2_float {
// Generated argmax_2_float test
#include "generated/examples/argmax_2_float.example.cpp"
// Generated model constructor
#include "generated/models/argmax_2_float.model.cpp"
} // namespace argmax_2_float

TEST_F(GeneratedTests, argmax_2_float) {
    execute(argmax_2_float::CreateModel,
            argmax_2_float::is_ignored,
            argmax_2_float::examples);
}

