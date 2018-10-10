// clang-format off
// Generated file (from: argmin_2_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmin_2_float {
// Generated argmin_2_float test
#include "generated/examples/argmin_2_float.example.cpp"
// Generated model constructor
#include "generated/models/argmin_2_float.model.cpp"
} // namespace argmin_2_float

TEST_F(GeneratedTests, argmin_2_float) {
    execute(argmin_2_float::CreateModel,
            argmin_2_float::is_ignored,
            argmin_2_float::examples);
}

