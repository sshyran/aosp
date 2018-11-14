// clang-format off
// Generated file (from: mul_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mul_float16 {
// Generated mul_float16 test
#include "generated/examples/mul_float16.example.cpp"
// Generated model constructor
#include "generated/models/mul_float16.model.cpp"
} // namespace mul_float16

TEST_F(GeneratedTests, mul_float16) {
    execute(mul_float16::CreateModel,
            mul_float16::is_ignored,
            mul_float16::examples);
}

