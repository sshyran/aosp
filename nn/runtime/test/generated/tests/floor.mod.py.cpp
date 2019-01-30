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
            floor::get_examples());
}

TEST_F(DynamicOutputShapeTest, floor_dynamic_output_shape) {
    execute(floor::CreateModel_dynamic_output_shape,
            floor::is_ignored_dynamic_output_shape,
            floor::get_examples_dynamic_output_shape());
}

