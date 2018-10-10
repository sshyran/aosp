// clang-format off
// Generated file (from: mul_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mul_quant8 {
// Generated mul_quant8 test
#include "generated/examples/mul_quant8.example.cpp"
// Generated model constructor
#include "generated/models/mul_quant8.model.cpp"
} // namespace mul_quant8

TEST_F(GeneratedTests, mul_quant8) {
    execute(mul_quant8::CreateModel,
            mul_quant8::is_ignored,
            mul_quant8::examples);
}

