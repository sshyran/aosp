// clang-format off
// Generated file (from: logistic_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace logistic_quant8_2 {
// Generated logistic_quant8_2 test
#include "generated/examples/logistic_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/logistic_quant8_2.model.cpp"
} // namespace logistic_quant8_2

TEST_F(GeneratedTests, logistic_quant8_2) {
    execute(logistic_quant8_2::CreateModel,
            logistic_quant8_2::is_ignored,
            logistic_quant8_2::examples);
}

