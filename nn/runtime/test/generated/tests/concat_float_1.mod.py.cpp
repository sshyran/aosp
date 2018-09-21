// clang-format off
// Generated file (from: concat_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace concat_float_1 {
// Generated concat_float_1 test
#include "generated/examples/concat_float_1.example.cpp"
// Generated model constructor
#include "generated/models/concat_float_1.model.cpp"
} // namespace concat_float_1

TEST_F(GeneratedTests, concat_float_1) {
    execute(concat_float_1::CreateModel,
            concat_float_1::is_ignored,
            concat_float_1::examples);
}

