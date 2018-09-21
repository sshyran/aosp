// clang-format off
// Generated file (from: conv_3_h3_w2_VALID.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_3_h3_w2_VALID {
// Generated conv_3_h3_w2_VALID test
#include "generated/examples/conv_3_h3_w2_VALID.example.cpp"
// Generated model constructor
#include "generated/models/conv_3_h3_w2_VALID.model.cpp"
} // namespace conv_3_h3_w2_VALID

TEST_F(GeneratedTests, conv_3_h3_w2_VALID) {
    execute(conv_3_h3_w2_VALID::CreateModel,
            conv_3_h3_w2_VALID::is_ignored,
            conv_3_h3_w2_VALID::examples);
}

