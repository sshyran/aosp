// clang-format off
// Generated file (from: strided_slice_float_10.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace strided_slice_float_10 {
// Generated strided_slice_float_10 test
#include "generated/examples/strided_slice_float_10.example.cpp"
// Generated model constructor
#include "generated/models/strided_slice_float_10.model.cpp"
} // namespace strided_slice_float_10

TEST_F(GeneratedTests, strided_slice_float_10) {
    execute(strided_slice_float_10::CreateModel,
            strided_slice_float_10::is_ignored,
            strided_slice_float_10::examples);
}
