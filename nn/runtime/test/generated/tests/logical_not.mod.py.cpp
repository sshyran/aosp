// clang-format off
// Generated file (from: logical_not.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace logical_not {
// Generated logical_not test
#include "generated/examples/logical_not.example.cpp"
// Generated model constructor
#include "generated/models/logical_not.model.cpp"
} // namespace logical_not

TEST_F(GeneratedTests, logical_not) {
    execute(logical_not::CreateModel,
            logical_not::is_ignored,
            logical_not::get_examples());
}

