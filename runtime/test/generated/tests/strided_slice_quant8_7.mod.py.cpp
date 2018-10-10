// clang-format off
// Generated file (from: strided_slice_quant8_7.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace strided_slice_quant8_7 {
// Generated strided_slice_quant8_7 test
#include "generated/examples/strided_slice_quant8_7.example.cpp"
// Generated model constructor
#include "generated/models/strided_slice_quant8_7.model.cpp"
} // namespace strided_slice_quant8_7

TEST_F(GeneratedTests, strided_slice_quant8_7) {
    execute(strided_slice_quant8_7::CreateModel,
            strided_slice_quant8_7::is_ignored,
            strided_slice_quant8_7::examples);
}

