// clang-format off
// Generated file (from: logistic_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace logistic_float_1 {
// Generated logistic_float_1 test
#include "generated/examples/logistic_float_1.example.cpp"
// Generated model constructor
#include "generated/models/logistic_float_1.model.cpp"
} // namespace logistic_float_1

TEST_F(GeneratedTests, logistic_float_1) {
    execute(logistic_float_1::CreateModel,
            logistic_float_1::is_ignored,
            logistic_float_1::examples);
}

