// clang-format off
// Generated file (from: argmin_1_int32.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmin_1_int32 {
// Generated argmin_1_int32 test
#include "generated/examples/argmin_1_int32.example.cpp"
// Generated model constructor
#include "generated/models/argmin_1_int32.model.cpp"
} // namespace argmin_1_int32

TEST_F(GeneratedTests, argmin_1_int32) {
    execute(argmin_1_int32::CreateModel,
            argmin_1_int32::is_ignored,
            argmin_1_int32::examples);
}

