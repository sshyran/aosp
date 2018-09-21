// clang-format off
// Generated file (from: div.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace div {
// Generated div test
#include "generated/examples/div.example.cpp"
// Generated model constructor
#include "generated/models/div.model.cpp"
} // namespace div

TEST_F(GeneratedTests, div) {
    execute(div::CreateModel,
            div::is_ignored,
            div::examples);
}

