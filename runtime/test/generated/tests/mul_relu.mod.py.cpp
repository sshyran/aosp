// clang-format off
// Generated file (from: mul_relu.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mul_relu {
// Generated mul_relu test
#include "generated/examples/mul_relu.example.cpp"
// Generated model constructor
#include "generated/models/mul_relu.model.cpp"
} // namespace mul_relu

TEST_F(GeneratedTests, mul_relu) {
    execute(mul_relu::CreateModel,
            mul_relu::is_ignored,
            mul_relu::examples);
}

