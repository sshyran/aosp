// Generated from exp.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::exp {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, exp) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::exp
TEST_AVAILABLE_SINCE(V1_2, exp, generated_tests::exp::CreateModel)

namespace generated_tests::exp {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

TEST_F(GeneratedTests, exp_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_relaxed());
}

} // namespace generated_tests::exp

namespace generated_tests::exp {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

TEST_F(GeneratedTests, exp_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_float16());
}

} // namespace generated_tests::exp
TEST_AVAILABLE_SINCE(V1_2, exp_float16, generated_tests::exp::CreateModel_float16)

namespace generated_tests::exp {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, exp_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::exp

namespace generated_tests::exp {

void CreateModel_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, exp_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed,
            is_ignored_dynamic_output_shape_relaxed,
            get_examples_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::exp

namespace generated_tests::exp {

void CreateModel_dynamic_output_shape_float16(Model *model);
bool is_ignored_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, exp_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16,
            is_ignored_dynamic_output_shape_float16,
            get_examples_dynamic_output_shape_float16());
}

} // namespace generated_tests::exp

