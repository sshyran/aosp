// clang-format off
// Generated file (from: prelu.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace prelu {
// Generated prelu test
#include "generated/examples/prelu.example.cpp"
// Generated model constructor
#include "generated/models/prelu.model.cpp"
} // namespace prelu

TEST_F(GeneratedTests, prelu) {
    execute(prelu::CreateModel,
            prelu::is_ignored,
            prelu::examples);
}

TEST_F(GeneratedTests, prelu_relaxed) {
    execute(prelu::CreateModel_relaxed,
            prelu::is_ignored_relaxed,
            prelu::examples_relaxed);
}

TEST_F(GeneratedTests, prelu_quant8) {
    execute(prelu::CreateModel_quant8,
            prelu::is_ignored_quant8,
            prelu::examples_quant8);
}

TEST_F(GeneratedTests, prelu_weight_as_input) {
    execute(prelu::CreateModel_weight_as_input,
            prelu::is_ignored_weight_as_input,
            prelu::examples_weight_as_input);
}

TEST_F(GeneratedTests, prelu_weight_as_input_relaxed) {
    execute(prelu::CreateModel_weight_as_input_relaxed,
            prelu::is_ignored_weight_as_input_relaxed,
            prelu::examples_weight_as_input_relaxed);
}

TEST_F(GeneratedTests, prelu_weight_as_input_quant8) {
    execute(prelu::CreateModel_weight_as_input_quant8,
            prelu::is_ignored_weight_as_input_quant8,
            prelu::examples_weight_as_input_quant8);
}

