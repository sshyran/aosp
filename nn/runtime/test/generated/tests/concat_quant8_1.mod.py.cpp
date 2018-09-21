// clang-format off
// Generated file (from: concat_quant8_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace concat_quant8_1 {
// Generated concat_quant8_1 test
#include "generated/examples/concat_quant8_1.example.cpp"
// Generated model constructor
#include "generated/models/concat_quant8_1.model.cpp"
} // namespace concat_quant8_1

TEST_F(GeneratedTests, concat_quant8_1) {
    execute(concat_quant8_1::CreateModel,
            concat_quant8_1::is_ignored,
            concat_quant8_1::examples);
}

