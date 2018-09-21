// clang-format off
// Generated file (from: strided_slice_float_7_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace strided_slice_float_7_relaxed {
// Generated strided_slice_float_7_relaxed test
#include "generated/examples/strided_slice_float_7_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/strided_slice_float_7_relaxed.model.cpp"
} // namespace strided_slice_float_7_relaxed

TEST_F(GeneratedTests, strided_slice_float_7_relaxed) {
    execute(strided_slice_float_7_relaxed::CreateModel,
            strided_slice_float_7_relaxed::is_ignored,
            strided_slice_float_7_relaxed::examples);
}

