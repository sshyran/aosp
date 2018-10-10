// clang-format off
// Generated file (from: strided_slice_float_4.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace strided_slice_float_4 {
// Generated strided_slice_float_4 test
#include "generated/examples/strided_slice_float_4.example.cpp"
// Generated model constructor
#include "generated/models/strided_slice_float_4.model.cpp"
} // namespace strided_slice_float_4

TEST_F(GeneratedTests, strided_slice_float_4) {
    execute(strided_slice_float_4::CreateModel,
            strided_slice_float_4::is_ignored,
            strided_slice_float_4::examples);
}

