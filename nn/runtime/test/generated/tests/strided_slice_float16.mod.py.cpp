// clang-format off
// Generated file (from: strided_slice_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace strided_slice_float16 {
// Generated strided_slice_float16 test
#include "generated/examples/strided_slice_float16.example.cpp"
// Generated model constructor
#include "generated/models/strided_slice_float16.model.cpp"
} // namespace strided_slice_float16

TEST_F(GeneratedTests, strided_slice_float16) {
    execute(strided_slice_float16::CreateModel,
            strided_slice_float16::is_ignored,
            strided_slice_float16::examples);
}

