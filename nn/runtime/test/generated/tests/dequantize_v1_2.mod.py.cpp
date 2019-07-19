// Generated from dequantize_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::dequantize_v1_2 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm();

TEST_F(GeneratedTests, dequantize_v1_2_1d_quant8_asymm) {
    execute(CreateModel,
            is_ignored,
            get_examples_1d_quant8_asymm());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_0, dequantize_v1_2_1d_quant8_asymm, generated_tests::dequantize_v1_2::CreateModel)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_relaxed();

TEST_F(GeneratedTests, dequantize_v1_2_1d_quant8_asymm_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_1d_quant8_asymm_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_float16();

TEST_F(GeneratedTests, dequantize_v1_2_1d_quant8_asymm_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_1d_quant8_asymm_float16());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_1d_quant8_asymm_float16, generated_tests::dequantize_v1_2::CreateModel_float16)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_1d_quant8_asymm_dynamic_output_shape());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed,
            is_ignored_dynamic_output_shape_relaxed,
            get_examples_1d_quant8_asymm_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_float16(Model *model);
bool is_ignored_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16,
            is_ignored_dynamic_output_shape_float16,
            get_examples_1d_quant8_asymm_dynamic_output_shape_float16());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_2(Model *model);
bool is_ignored_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm();

TEST_F(GeneratedTests, dequantize_v1_2_2d_quant8_asymm) {
    execute(CreateModel_2,
            is_ignored_2,
            get_examples_2d_quant8_asymm());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_0, dequantize_v1_2_2d_quant8_asymm, generated_tests::dequantize_v1_2::CreateModel_2)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_2(Model *model);
bool is_ignored_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_relaxed();

TEST_F(GeneratedTests, dequantize_v1_2_2d_quant8_asymm_relaxed) {
    execute(CreateModel_relaxed_2,
            is_ignored_relaxed_2,
            get_examples_2d_quant8_asymm_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_2(Model *model);
bool is_ignored_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_float16();

TEST_F(GeneratedTests, dequantize_v1_2_2d_quant8_asymm_float16) {
    execute(CreateModel_float16_2,
            is_ignored_float16_2,
            get_examples_2d_quant8_asymm_float16());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_2d_quant8_asymm_float16, generated_tests::dequantize_v1_2::CreateModel_float16_2)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_2(Model *model);
bool is_ignored_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_2,
            is_ignored_dynamic_output_shape_2,
            get_examples_2d_quant8_asymm_dynamic_output_shape());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_relaxed_2(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_2,
            is_ignored_dynamic_output_shape_relaxed_2,
            get_examples_2d_quant8_asymm_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_float16_2(Model *model);
bool is_ignored_dynamic_output_shape_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_2,
            is_ignored_dynamic_output_shape_float16_2,
            get_examples_2d_quant8_asymm_dynamic_output_shape_float16());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_3(Model *model);
bool is_ignored_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm();

TEST_F(GeneratedTests, dequantize_v1_2_3d_quant8_symm) {
    execute(CreateModel_3,
            is_ignored_3,
            get_examples_3d_quant8_symm());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_3d_quant8_symm, generated_tests::dequantize_v1_2::CreateModel_3)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_3(Model *model);
bool is_ignored_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_relaxed();

TEST_F(GeneratedTests, dequantize_v1_2_3d_quant8_symm_relaxed) {
    execute(CreateModel_relaxed_3,
            is_ignored_relaxed_3,
            get_examples_3d_quant8_symm_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_3(Model *model);
bool is_ignored_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_float16();

TEST_F(GeneratedTests, dequantize_v1_2_3d_quant8_symm_float16) {
    execute(CreateModel_float16_3,
            is_ignored_float16_3,
            get_examples_3d_quant8_symm_float16());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_3d_quant8_symm_float16, generated_tests::dequantize_v1_2::CreateModel_float16_3)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_3(Model *model);
bool is_ignored_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_quant8_symm_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_3,
            is_ignored_dynamic_output_shape_3,
            get_examples_3d_quant8_symm_dynamic_output_shape());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_relaxed_3(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_quant8_symm_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_3,
            is_ignored_dynamic_output_shape_relaxed_3,
            get_examples_3d_quant8_symm_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_float16_3(Model *model);
bool is_ignored_dynamic_output_shape_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_quant8_symm_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_3,
            is_ignored_dynamic_output_shape_float16_3,
            get_examples_3d_quant8_symm_dynamic_output_shape_float16());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_4(Model *model);
bool is_ignored_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm();

TEST_F(GeneratedTests, dequantize_v1_2_4d_quant8_symm) {
    execute(CreateModel_4,
            is_ignored_4,
            get_examples_4d_quant8_symm());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_4d_quant8_symm, generated_tests::dequantize_v1_2::CreateModel_4)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_4(Model *model);
bool is_ignored_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_relaxed();

TEST_F(GeneratedTests, dequantize_v1_2_4d_quant8_symm_relaxed) {
    execute(CreateModel_relaxed_4,
            is_ignored_relaxed_4,
            get_examples_4d_quant8_symm_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_4(Model *model);
bool is_ignored_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_float16();

TEST_F(GeneratedTests, dequantize_v1_2_4d_quant8_symm_float16) {
    execute(CreateModel_float16_4,
            is_ignored_float16_4,
            get_examples_4d_quant8_symm_float16());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_4d_quant8_symm_float16, generated_tests::dequantize_v1_2::CreateModel_float16_4)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_4(Model *model);
bool is_ignored_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_4d_quant8_symm_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_4,
            is_ignored_dynamic_output_shape_4,
            get_examples_4d_quant8_symm_dynamic_output_shape());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_relaxed_4(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_4d_quant8_symm_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_4,
            is_ignored_dynamic_output_shape_relaxed_4,
            get_examples_4d_quant8_symm_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_float16_4(Model *model);
bool is_ignored_dynamic_output_shape_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_4d_quant8_symm_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_4,
            is_ignored_dynamic_output_shape_float16_4,
            get_examples_4d_quant8_symm_dynamic_output_shape_float16());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_5(Model *model);
bool is_ignored_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim();

TEST_F(GeneratedTests, dequantize_v1_2_3d_per_channel_first_dim) {
    execute(CreateModel_5,
            is_ignored_5,
            get_examples_3d_per_channel_first_dim());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_3d_per_channel_first_dim, generated_tests::dequantize_v1_2::CreateModel_5)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_5(Model *model);
bool is_ignored_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_relaxed();

TEST_F(GeneratedTests, dequantize_v1_2_3d_per_channel_first_dim_relaxed) {
    execute(CreateModel_relaxed_5,
            is_ignored_relaxed_5,
            get_examples_3d_per_channel_first_dim_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_5(Model *model);
bool is_ignored_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_float16();

TEST_F(GeneratedTests, dequantize_v1_2_3d_per_channel_first_dim_float16) {
    execute(CreateModel_float16_5,
            is_ignored_float16_5,
            get_examples_3d_per_channel_first_dim_float16());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_3d_per_channel_first_dim_float16, generated_tests::dequantize_v1_2::CreateModel_float16_5)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_5(Model *model);
bool is_ignored_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_first_dim_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_5,
            is_ignored_dynamic_output_shape_5,
            get_examples_3d_per_channel_first_dim_dynamic_output_shape());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_relaxed_5(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_first_dim_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_5,
            is_ignored_dynamic_output_shape_relaxed_5,
            get_examples_3d_per_channel_first_dim_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_float16_5(Model *model);
bool is_ignored_dynamic_output_shape_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_first_dim_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_5,
            is_ignored_dynamic_output_shape_float16_5,
            get_examples_3d_per_channel_first_dim_dynamic_output_shape_float16());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_6(Model *model);
bool is_ignored_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim();

TEST_F(GeneratedTests, dequantize_v1_2_3d_per_channel_second_dim) {
    execute(CreateModel_6,
            is_ignored_6,
            get_examples_3d_per_channel_second_dim());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_3d_per_channel_second_dim, generated_tests::dequantize_v1_2::CreateModel_6)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_relaxed_6(Model *model);
bool is_ignored_relaxed_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_relaxed();

TEST_F(GeneratedTests, dequantize_v1_2_3d_per_channel_second_dim_relaxed) {
    execute(CreateModel_relaxed_6,
            is_ignored_relaxed_6,
            get_examples_3d_per_channel_second_dim_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_float16_6(Model *model);
bool is_ignored_float16_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_float16();

TEST_F(GeneratedTests, dequantize_v1_2_3d_per_channel_second_dim_float16) {
    execute(CreateModel_float16_6,
            is_ignored_float16_6,
            get_examples_3d_per_channel_second_dim_float16());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_3d_per_channel_second_dim_float16, generated_tests::dequantize_v1_2::CreateModel_float16_6)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_6(Model *model);
bool is_ignored_dynamic_output_shape_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_second_dim_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_6,
            is_ignored_dynamic_output_shape_6,
            get_examples_3d_per_channel_second_dim_dynamic_output_shape());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_relaxed_6(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_second_dim_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed_6,
            is_ignored_dynamic_output_shape_relaxed_6,
            get_examples_3d_per_channel_second_dim_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_float16_6(Model *model);
bool is_ignored_dynamic_output_shape_float16_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_second_dim_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16_6,
            is_ignored_dynamic_output_shape_float16_6,
            get_examples_3d_per_channel_second_dim_dynamic_output_shape_float16());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_7(Model *model);
bool is_ignored_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, dequantize_v1_2) {
    execute(CreateModel_7,
            is_ignored_7,
            get_examples());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2, generated_tests::dequantize_v1_2::CreateModel_7)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_dynamic_output_shape_7(Model *model);
bool is_ignored_dynamic_output_shape_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_7,
            is_ignored_dynamic_output_shape_7,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized(Model *model);
bool is_ignored_zero_sized(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized();

TEST_F(GeneratedTests, dequantize_v1_2_zero_sized) {
    execute(CreateModel_zero_sized,
            is_ignored_zero_sized,
            get_examples_zero_sized());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_zero_sized, generated_tests::dequantize_v1_2::CreateModel_zero_sized)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_relaxed(Model *model);
bool is_ignored_zero_sized_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed();

TEST_F(GeneratedTests, dequantize_v1_2_zero_sized_relaxed) {
    execute(CreateModel_zero_sized_relaxed,
            is_ignored_zero_sized_relaxed,
            get_examples_zero_sized_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_float16(Model *model);
bool is_ignored_zero_sized_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16();

TEST_F(GeneratedTests, dequantize_v1_2_zero_sized_float16) {
    execute(CreateModel_zero_sized_float16,
            is_ignored_zero_sized_float16,
            get_examples_zero_sized_float16());
}

} // namespace generated_tests::dequantize_v1_2
TEST_AVAILABLE_SINCE(V1_2, dequantize_v1_2_zero_sized_float16, generated_tests::dequantize_v1_2::CreateModel_zero_sized_float16)

namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_zero_sized_dynamic_output_shape) {
    execute(CreateModel_zero_sized_dynamic_output_shape,
            is_ignored_zero_sized_dynamic_output_shape,
            get_examples_zero_sized_dynamic_output_shape());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_zero_sized_dynamic_output_shape_relaxed) {
    execute(CreateModel_zero_sized_dynamic_output_shape_relaxed,
            is_ignored_zero_sized_dynamic_output_shape_relaxed,
            get_examples_zero_sized_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_float16(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_zero_sized_dynamic_output_shape_float16) {
    execute(CreateModel_zero_sized_dynamic_output_shape_float16,
            is_ignored_zero_sized_dynamic_output_shape_float16,
            get_examples_zero_sized_dynamic_output_shape_float16());
}

} // namespace generated_tests::dequantize_v1_2

