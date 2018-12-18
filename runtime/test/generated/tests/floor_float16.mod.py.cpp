// clang-format off
// Generated file (from: floor_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace floor_float16 {
// Generated floor_float16 test
#include "generated/examples/floor_float16.example.cpp"
// Generated model constructor
#include "generated/models/floor_float16.model.cpp"
} // namespace floor_float16

TEST_F(GeneratedTests, floor_float16) {
    execute(floor_float16::CreateModel,
            floor_float16::is_ignored,
            floor_float16::get_examples());
}

