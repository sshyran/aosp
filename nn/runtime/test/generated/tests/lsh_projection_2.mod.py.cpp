// clang-format off
// Generated file (from: lsh_projection_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lsh_projection_2 {
// Generated lsh_projection_2 test
#include "generated/examples/lsh_projection_2.example.cpp"
// Generated model constructor
#include "generated/models/lsh_projection_2.model.cpp"
} // namespace lsh_projection_2

TEST_F(GeneratedTests, lsh_projection_2) {
    execute(lsh_projection_2::CreateModel,
            lsh_projection_2::is_ignored,
            lsh_projection_2::get_examples());
}

TEST_F(DynamicOutputShapeTest, lsh_projection_2_dynamic_output_shape) {
    execute(lsh_projection_2::CreateModel_dynamic_output_shape,
            lsh_projection_2::is_ignored_dynamic_output_shape,
            lsh_projection_2::get_examples_dynamic_output_shape());
}

