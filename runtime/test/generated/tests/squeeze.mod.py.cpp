// clang-format off
// Generated file (from: squeeze.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace squeeze {
// Generated squeeze test
#include "generated/examples/squeeze.example.cpp"
// Generated model constructor
#include "generated/models/squeeze.model.cpp"
} // namespace squeeze

TEST_F(GeneratedTests, squeeze) {
    execute(squeeze::CreateModel,
            squeeze::is_ignored,
            squeeze::examples);
}

