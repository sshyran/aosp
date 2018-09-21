// clang-format off
// Generated file (from: concat_quant8_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace concat_quant8_3 {
// Generated concat_quant8_3 test
#include "generated/examples/concat_quant8_3.example.cpp"
// Generated model constructor
#include "generated/models/concat_quant8_3.model.cpp"
} // namespace concat_quant8_3

TEST_F(GeneratedTests, concat_quant8_3) {
    execute(concat_quant8_3::CreateModel,
            concat_quant8_3::is_ignored,
            concat_quant8_3::examples);
}

