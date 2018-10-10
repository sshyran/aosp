// clang-format off
// Generated file (from: argmax_1_int32.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_1_int32 {
// Generated argmax_1_int32 test
#include "generated/examples/argmax_1_int32.example.cpp"
// Generated model constructor
#include "generated/models/argmax_1_int32.model.cpp"
} // namespace argmax_1_int32

TEST_F(GeneratedTests, argmax_1_int32) {
    execute(argmax_1_int32::CreateModel,
            argmax_1_int32::is_ignored,
            argmax_1_int32::examples);
}

