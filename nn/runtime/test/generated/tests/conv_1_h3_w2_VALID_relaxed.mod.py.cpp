// clang-format off
// Generated file (from: conv_1_h3_w2_VALID_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_1_h3_w2_VALID_relaxed {
// Generated conv_1_h3_w2_VALID_relaxed test
#include "generated/examples/conv_1_h3_w2_VALID_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/conv_1_h3_w2_VALID_relaxed.model.cpp"
} // namespace conv_1_h3_w2_VALID_relaxed

TEST_F(GeneratedTests, conv_1_h3_w2_VALID_relaxed) {
    execute(conv_1_h3_w2_VALID_relaxed::CreateModel,
            conv_1_h3_w2_VALID_relaxed::is_ignored,
            conv_1_h3_w2_VALID_relaxed::examples);
}

