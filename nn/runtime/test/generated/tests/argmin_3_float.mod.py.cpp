// clang-format off
// Generated file (from: argmin_3_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmin_3_float {
// Generated argmin_3_float test
#include "generated/examples/argmin_3_float.example.cpp"
// Generated model constructor
#include "generated/models/argmin_3_float.model.cpp"
} // namespace argmin_3_float

TEST_F(GeneratedTests, argmin_3_float) {
    execute(argmin_3_float::CreateModel,
            argmin_3_float::is_ignored,
            argmin_3_float::examples);
}

