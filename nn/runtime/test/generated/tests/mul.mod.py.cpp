// clang-format off
// Generated file (from: mul.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mul {
// Generated mul test
#include "generated/examples/mul.example.cpp"
// Generated model constructor
#include "generated/models/mul.model.cpp"
} // namespace mul

TEST_F(GeneratedTests, mul) {
    execute(mul::CreateModel,
            mul::is_ignored,
            mul::examples);
}

