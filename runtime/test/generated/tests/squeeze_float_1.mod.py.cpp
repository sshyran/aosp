// clang-format off
// Generated file (from: squeeze_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace squeeze_float_1 {
// Generated squeeze_float_1 test
#include "generated/examples/squeeze_float_1.example.cpp"
// Generated model constructor
#include "generated/models/squeeze_float_1.model.cpp"
} // namespace squeeze_float_1

TEST_F(GeneratedTests, squeeze_float_1) {
    execute(squeeze_float_1::CreateModel,
            squeeze_float_1::is_ignored,
            squeeze_float_1::examples);
}

