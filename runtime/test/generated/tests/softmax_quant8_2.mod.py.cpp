// clang-format off
// Generated file (from: softmax_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace softmax_quant8_2 {
// Generated softmax_quant8_2 test
#include "generated/examples/softmax_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/softmax_quant8_2.model.cpp"
} // namespace softmax_quant8_2

TEST_F(GeneratedTests, softmax_quant8_2) {
    execute(softmax_quant8_2::CreateModel,
            softmax_quant8_2::is_ignored,
            softmax_quant8_2::examples);
}

