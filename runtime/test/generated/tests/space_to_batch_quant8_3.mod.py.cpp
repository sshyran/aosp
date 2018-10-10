// clang-format off
// Generated file (from: space_to_batch_quant8_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace space_to_batch_quant8_3 {
// Generated space_to_batch_quant8_3 test
#include "generated/examples/space_to_batch_quant8_3.example.cpp"
// Generated model constructor
#include "generated/models/space_to_batch_quant8_3.model.cpp"
} // namespace space_to_batch_quant8_3

TEST_F(GeneratedTests, space_to_batch_quant8_3) {
    execute(space_to_batch_quant8_3::CreateModel,
            space_to_batch_quant8_3::is_ignored,
            space_to_batch_quant8_3::examples);
}

