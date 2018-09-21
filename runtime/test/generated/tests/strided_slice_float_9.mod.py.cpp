// clang-format off
// Generated file (from: strided_slice_float_9.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace strided_slice_float_9 {
// Generated strided_slice_float_9 test
#include "generated/examples/strided_slice_float_9.example.cpp"
// Generated model constructor
#include "generated/models/strided_slice_float_9.model.cpp"
} // namespace strided_slice_float_9

TEST_F(GeneratedTests, strided_slice_float_9) {
    execute(strided_slice_float_9::CreateModel,
            strided_slice_float_9::is_ignored,
            strided_slice_float_9::examples);
}

