// clang-format off
// Generated file (from: logistic_quant8_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace logistic_quant8_1 {
// Generated logistic_quant8_1 test
#include "generated/examples/logistic_quant8_1.example.cpp"
// Generated model constructor
#include "generated/models/logistic_quant8_1.model.cpp"
} // namespace logistic_quant8_1

TEST_F(GeneratedTests, logistic_quant8_1) {
    execute(logistic_quant8_1::CreateModel,
            logistic_quant8_1::is_ignored,
            logistic_quant8_1::examples);
}

