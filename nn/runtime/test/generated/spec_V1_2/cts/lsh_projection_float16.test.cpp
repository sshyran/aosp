// Generated from lsh_projection_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::lsh_projection_float16 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, lsh_projection_float16) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::lsh_projection_float16
TEST_AVAILABLE_SINCE(V1_2, lsh_projection_float16, generated_tests::lsh_projection_float16::CreateModel)

namespace generated_tests::lsh_projection_float16 {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

TEST_F(GeneratedTests, lsh_projection_float16_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_float16());
}

} // namespace generated_tests::lsh_projection_float16
TEST_AVAILABLE_SINCE(V1_2, lsh_projection_float16_float16, generated_tests::lsh_projection_float16::CreateModel_float16)

namespace generated_tests::lsh_projection_float16 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, lsh_projection_float16_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::lsh_projection_float16

namespace generated_tests::lsh_projection_float16 {

void CreateModel_dynamic_output_shape_float16(Model *model);
bool is_ignored_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, lsh_projection_float16_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16,
            is_ignored_dynamic_output_shape_float16,
            get_examples_dynamic_output_shape_float16());
}

} // namespace generated_tests::lsh_projection_float16

