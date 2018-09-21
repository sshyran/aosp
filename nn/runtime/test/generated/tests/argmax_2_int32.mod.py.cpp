// clang-format off
// Generated file (from: argmax_2_int32.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_2_int32 {
// Generated argmax_2_int32 test
#include "generated/examples/argmax_2_int32.example.cpp"
// Generated model constructor
#include "generated/models/argmax_2_int32.model.cpp"
} // namespace argmax_2_int32

TEST_F(GeneratedTests, argmax_2_int32) {
    execute(argmax_2_int32::CreateModel,
            argmax_2_int32::is_ignored,
            argmax_2_int32::examples);
}

