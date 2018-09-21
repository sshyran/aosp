// clang-format off
// Generated file (from: reshape_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace reshape_quant8 {
// Generated reshape_quant8 test
#include "generated/examples/reshape_quant8.example.cpp"
// Generated model constructor
#include "generated/models/reshape_quant8.model.cpp"
} // namespace reshape_quant8

TEST_F(GeneratedTests, reshape_quant8) {
    execute(reshape_quant8::CreateModel,
            reshape_quant8::is_ignored,
            reshape_quant8::examples);
}

