// clang-format off
// Generated file (from: argmax_3_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_3_float {
// Generated argmax_3_float test
#include "generated/examples/argmax_3_float.example.cpp"
// Generated model constructor
#include "generated/models/argmax_3_float.model.cpp"
} // namespace argmax_3_float

TEST_F(GeneratedTests, argmax_3_float) {
    execute(argmax_3_float::CreateModel,
            argmax_3_float::is_ignored,
            argmax_3_float::examples);
}

