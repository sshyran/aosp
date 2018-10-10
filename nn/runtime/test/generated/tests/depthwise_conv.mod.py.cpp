// clang-format off
// Generated file (from: depthwise_conv.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace depthwise_conv {
// Generated depthwise_conv test
#include "generated/examples/depthwise_conv.example.cpp"
// Generated model constructor
#include "generated/models/depthwise_conv.model.cpp"
} // namespace depthwise_conv

TEST_F(GeneratedTests, depthwise_conv) {
    execute(depthwise_conv::CreateModel,
            depthwise_conv::is_ignored,
            depthwise_conv::examples);
}

