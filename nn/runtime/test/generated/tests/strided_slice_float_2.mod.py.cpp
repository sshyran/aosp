// clang-format off
// Generated file (from: strided_slice_float_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace strided_slice_float_2 {
// Generated strided_slice_float_2 test
#include "generated/examples/strided_slice_float_2.example.cpp"
// Generated model constructor
#include "generated/models/strided_slice_float_2.model.cpp"
} // namespace strided_slice_float_2

TEST_F(GeneratedTests, strided_slice_float_2) {
    execute(strided_slice_float_2::CreateModel,
            strided_slice_float_2::is_ignored,
            strided_slice_float_2::examples);
}

