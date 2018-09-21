// clang-format off
// Generated file (from: conv_3_h3_w2_SAME.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_3_h3_w2_SAME {
// Generated conv_3_h3_w2_SAME test
#include "generated/examples/conv_3_h3_w2_SAME.example.cpp"
// Generated model constructor
#include "generated/models/conv_3_h3_w2_SAME.model.cpp"
} // namespace conv_3_h3_w2_SAME

TEST_F(GeneratedTests, conv_3_h3_w2_SAME) {
    execute(conv_3_h3_w2_SAME::CreateModel,
            conv_3_h3_w2_SAME::is_ignored,
            conv_3_h3_w2_SAME::examples);
}

