// clang-format off
// Generated file (from: mul_broadcast_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mul_broadcast_float16 {
// Generated mul_broadcast_float16 test
#include "generated/examples/mul_broadcast_float16.example.cpp"
// Generated model constructor
#include "generated/models/mul_broadcast_float16.model.cpp"
} // namespace mul_broadcast_float16

TEST_F(GeneratedTests, mul_broadcast_float16) {
    execute(mul_broadcast_float16::CreateModel,
            mul_broadcast_float16::is_ignored,
            mul_broadcast_float16::examples);
}

