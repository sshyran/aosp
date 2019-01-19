// clang-format off
// Generated file (from: mobilenet_224_gender_basic_fixed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mobilenet_224_gender_basic_fixed {
// Generated mobilenet_224_gender_basic_fixed test
#include "generated/examples/mobilenet_224_gender_basic_fixed.example.cpp"
// Generated model constructor
#include "generated/models/mobilenet_224_gender_basic_fixed.model.cpp"
} // namespace mobilenet_224_gender_basic_fixed

TEST_F(GeneratedTests, mobilenet_224_gender_basic_fixed) {
    execute(mobilenet_224_gender_basic_fixed::CreateModel,
            mobilenet_224_gender_basic_fixed::is_ignored,
            mobilenet_224_gender_basic_fixed::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, mobilenet_224_gender_basic_fixed_dynamic_output_shape) {
    execute(mobilenet_224_gender_basic_fixed::CreateModel_dynamic_output_shape,
            mobilenet_224_gender_basic_fixed::is_ignored_dynamic_output_shape,
            mobilenet_224_gender_basic_fixed::get_examples_dynamic_output_shape());
}

#endif
