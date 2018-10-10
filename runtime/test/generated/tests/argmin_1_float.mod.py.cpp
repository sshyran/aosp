// clang-format off
// Generated file (from: argmin_1_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmin_1_float {
// Generated argmin_1_float test
#include "generated/examples/argmin_1_float.example.cpp"
// Generated model constructor
#include "generated/models/argmin_1_float.model.cpp"
} // namespace argmin_1_float

TEST_F(GeneratedTests, argmin_1_float) {
    execute(argmin_1_float::CreateModel,
            argmin_1_float::is_ignored,
            argmin_1_float::examples);
}

