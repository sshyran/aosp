// clang-format off
// Generated file (from: add.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace add {
// Generated add test
#include "generated/examples/add.example.cpp"
// Generated model constructor
#include "generated/models/add.model.cpp"
} // namespace add

TEST_F(GeneratedTests, add) {
    execute(add::CreateModel,
            add::is_ignored,
            add::examples);
}

