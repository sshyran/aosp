// Generated from concat_mixed_quant.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8(Model *model);
bool is_ignored_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

TEST_F(GeneratedTests, concat_mixed_quant_quant8) {
    execute(CreateModel_quant8,
            is_ignored_quant8,
            get_examples_quant8());
}

} // namespace generated_tests::concat_mixed_quant
TEST_AVAILABLE_SINCE(V1_2, concat_mixed_quant_quant8, generated_tests::concat_mixed_quant::CreateModel_quant8)

namespace generated_tests::concat_mixed_quant {

void CreateModel_dynamic_output_shape_quant8(Model *model);
bool is_ignored_dynamic_output_shape_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_dynamic_output_shape_quant8) {
    execute(CreateModel_dynamic_output_shape_quant8,
            is_ignored_dynamic_output_shape_quant8,
            get_examples_dynamic_output_shape_quant8());
}

} // namespace generated_tests::concat_mixed_quant

namespace generated_tests::concat_mixed_quant {

void CreateModel_quant8_2(Model *model);
bool is_ignored_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

TEST_F(GeneratedTests, concat_mixed_quant_quant8_2) {
    execute(CreateModel_quant8_2,
            is_ignored_quant8_2,
            get_examples_quant8_2());
}

} // namespace generated_tests::concat_mixed_quant
TEST_AVAILABLE_SINCE(V1_2, concat_mixed_quant_quant8_2, generated_tests::concat_mixed_quant::CreateModel_quant8_2)

namespace generated_tests::concat_mixed_quant {

void CreateModel_dynamic_output_shape_quant8_2(Model *model);
bool is_ignored_dynamic_output_shape_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_2();

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_dynamic_output_shape_quant8_2) {
    execute(CreateModel_dynamic_output_shape_quant8_2,
            is_ignored_dynamic_output_shape_quant8_2,
            get_examples_dynamic_output_shape_quant8_2());
}

} // namespace generated_tests::concat_mixed_quant

