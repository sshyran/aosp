// clang-format off
// Generated file (from: argmax_1_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_1_float {
// Generated argmax_1_float test
#include "generated/examples/argmax_1_float.example.cpp"
// Generated model constructor
#include "generated/models/argmax_1_float.model.cpp"
} // namespace argmax_1_float

TEST_F(GeneratedTests, argmax_1_float) {
    execute(argmax_1_float::CreateModel,
            argmax_1_float::is_ignored,
            argmax_1_float::examples);
}

