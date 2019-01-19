// clang-format off
// Generated file (from: resize_bilinear.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace resize_bilinear {
// Generated resize_bilinear test
#include "generated/examples/resize_bilinear.example.cpp"
// Generated model constructor
#include "generated/models/resize_bilinear.model.cpp"
} // namespace resize_bilinear

TEST_F(GeneratedTests, resize_bilinear) {
    execute(resize_bilinear::CreateModel,
            resize_bilinear::is_ignored,
            resize_bilinear::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, resize_bilinear_dynamic_output_shape) {
    execute(resize_bilinear::CreateModel_dynamic_output_shape,
            resize_bilinear::is_ignored_dynamic_output_shape,
            resize_bilinear::get_examples_dynamic_output_shape());
}

#endif
