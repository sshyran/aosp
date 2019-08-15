// Generated from reduce_all.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::reduce_all {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, reduce_all) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::reduce_all
TEST_AVAILABLE_SINCE(V1_2, reduce_all, generated_tests::reduce_all::CreateModel)

namespace generated_tests::reduce_all {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, reduce_all_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::reduce_all

namespace generated_tests::reduce_all {

void CreateModel_2(Model *model);
bool is_ignored_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2();

TEST_F(GeneratedTests, reduce_all_2) {
    execute(CreateModel_2,
            is_ignored_2,
            get_examples_2());
}

} // namespace generated_tests::reduce_all
TEST_AVAILABLE_SINCE(V1_2, reduce_all_2, generated_tests::reduce_all::CreateModel_2)

namespace generated_tests::reduce_all {

void CreateModel_dynamic_output_shape_2(Model *model);
bool is_ignored_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, reduce_all_dynamic_output_shape_2) {
    execute(CreateModel_dynamic_output_shape_2,
            is_ignored_dynamic_output_shape_2,
            get_examples_dynamic_output_shape_2());
}

} // namespace generated_tests::reduce_all

namespace generated_tests::reduce_all {

void CreateModel_3(Model *model);
bool is_ignored_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3();

TEST_F(GeneratedTests, reduce_all_3) {
    execute(CreateModel_3,
            is_ignored_3,
            get_examples_3());
}

} // namespace generated_tests::reduce_all
TEST_AVAILABLE_SINCE(V1_2, reduce_all_3, generated_tests::reduce_all::CreateModel_3)

namespace generated_tests::reduce_all {

void CreateModel_dynamic_output_shape_3(Model *model);
bool is_ignored_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_3();

TEST_F(DynamicOutputShapeTest, reduce_all_dynamic_output_shape_3) {
    execute(CreateModel_dynamic_output_shape_3,
            is_ignored_dynamic_output_shape_3,
            get_examples_dynamic_output_shape_3());
}

} // namespace generated_tests::reduce_all

