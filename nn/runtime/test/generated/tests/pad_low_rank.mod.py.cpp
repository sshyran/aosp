// Generated from pad_low_rank.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::pad_low_rank {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, pad_low_rank) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::pad_low_rank
TEST_AVAILABLE_SINCE(V1_1, pad_low_rank, generated_tests::pad_low_rank::CreateModel)

namespace generated_tests::pad_low_rank {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

TEST_F(GeneratedTests, pad_low_rank_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_float16());
}

} // namespace generated_tests::pad_low_rank
TEST_AVAILABLE_SINCE(V1_2, pad_low_rank_float16, generated_tests::pad_low_rank::CreateModel_float16)

namespace generated_tests::pad_low_rank {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, pad_low_rank_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::pad_low_rank

namespace generated_tests::pad_low_rank {

void CreateModel_dynamic_output_shape_float16(Model *model);
bool is_ignored_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, pad_low_rank_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16,
            is_ignored_dynamic_output_shape_float16,
            get_examples_dynamic_output_shape_float16());
}

} // namespace generated_tests::pad_low_rank

