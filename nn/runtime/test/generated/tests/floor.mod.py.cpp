// clang-format off
// Generated file (from: floor.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace floor {
// Generated floor test
#include "generated/examples/floor.example.cpp"
// Generated model constructor
#include "generated/models/floor.model.cpp"
} // namespace floor

TEST_F(GeneratedTests, floor) {
    execute(floor::CreateModel,
            floor::is_ignored,
            floor::examples);
}

