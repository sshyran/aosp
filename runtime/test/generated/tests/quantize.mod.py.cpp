// clang-format off
// Generated file (from: quantize.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace quantize {
// Generated quantize test
#include "generated/examples/quantize.example.cpp"
// Generated model constructor
#include "generated/models/quantize.model.cpp"
} // namespace quantize

TEST_F(GeneratedTests, quantize_quant8) {
    execute(quantize::CreateModel_quant8,
            quantize::is_ignored_quant8,
            quantize::examples_quant8);
}

TEST_F(GeneratedTests, quantize_quant8_2) {
    execute(quantize::CreateModel_quant8_2,
            quantize::is_ignored_quant8_2,
            quantize::examples_quant8_2);
}

TEST_F(GeneratedTests, quantize_quant8_3) {
    execute(quantize::CreateModel_quant8_3,
            quantize::is_ignored_quant8_3,
            quantize::examples_quant8_3);
}

TEST_F(GeneratedTests, quantize_quant8_4) {
    execute(quantize::CreateModel_quant8_4,
            quantize::is_ignored_quant8_4,
            quantize::examples_quant8_4);
}

