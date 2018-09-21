// clang-format off
// Generated file (from: mean_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mean_float_1 {
// Generated mean_float_1 test
#include "generated/examples/mean_float_1.example.cpp"
// Generated model constructor
#include "generated/models/mean_float_1.model.cpp"
} // namespace mean_float_1

TEST_F(GeneratedTests, mean_float_1) {
    execute(mean_float_1::CreateModel,
            mean_float_1::is_ignored,
            mean_float_1::examples);
}

