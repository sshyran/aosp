// clang-format off
// Generated file (from: concat_float_3_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace concat_float_3_relaxed {
// Generated concat_float_3_relaxed test
#include "generated/examples/concat_float_3_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/concat_float_3_relaxed.model.cpp"
} // namespace concat_float_3_relaxed

TEST_F(GeneratedTests, concat_float_3_relaxed) {
    execute(concat_float_3_relaxed::CreateModel,
            concat_float_3_relaxed::is_ignored,
            concat_float_3_relaxed::examples);
}

