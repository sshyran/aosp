// clang-format off
// Generated file (from: logistic_float16_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace logistic_float16_2 {
// Generated logistic_float16_2 test
#include "generated/examples/logistic_float16_2.example.cpp"
// Generated model constructor
#include "generated/models/logistic_float16_2.model.cpp"
} // namespace logistic_float16_2

TEST_F(GeneratedTests, logistic_float16_2) {
    execute(logistic_float16_2::CreateModel,
            logistic_float16_2::is_ignored,
            logistic_float16_2::examples);
}

