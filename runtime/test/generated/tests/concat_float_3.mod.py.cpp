// clang-format off
// Generated file (from: concat_float_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace concat_float_3 {
// Generated concat_float_3 test
#include "generated/examples/concat_float_3.example.cpp"
// Generated model constructor
#include "generated/models/concat_float_3.model.cpp"
} // namespace concat_float_3

TEST_F(GeneratedTests, concat_float_3) {
    execute(concat_float_3::CreateModel,
            concat_float_3::is_ignored,
            concat_float_3::examples);
}

