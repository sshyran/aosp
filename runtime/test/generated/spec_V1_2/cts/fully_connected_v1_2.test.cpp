// Generated from fully_connected_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::fully_connected_v1_2 {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, fully_connected_v1_2) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::fully_connected_v1_2
TEST_AVAILABLE_SINCE(V1_0, fully_connected_v1_2, generated_tests::fully_connected_v1_2::CreateModel)

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

TEST_F(GeneratedTests, fully_connected_v1_2_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_relaxed());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

TEST_F(GeneratedTests, fully_connected_v1_2_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_float16());
}

} // namespace generated_tests::fully_connected_v1_2
TEST_AVAILABLE_SINCE(V1_2, fully_connected_v1_2_float16, generated_tests::fully_connected_v1_2::CreateModel_float16)

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_quant8_mult_gt_1(Model *model);
bool is_ignored_quant8_mult_gt_1(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_mult_gt_1();

TEST_F(GeneratedTests, fully_connected_v1_2_quant8_mult_gt_1) {
    execute(CreateModel_quant8_mult_gt_1,
            is_ignored_quant8_mult_gt_1,
            get_examples_quant8_mult_gt_1());
}

} // namespace generated_tests::fully_connected_v1_2
TEST_AVAILABLE_SINCE(V1_2, fully_connected_v1_2_quant8_mult_gt_1, generated_tests::fully_connected_v1_2::CreateModel_quant8_mult_gt_1)

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed,
            is_ignored_dynamic_output_shape_relaxed,
            get_examples_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_dynamic_output_shape_float16(Model *model);
bool is_ignored_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16,
            is_ignored_dynamic_output_shape_float16,
            get_examples_dynamic_output_shape_float16());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_dynamic_output_shape_quant8_mult_gt_1(Model *model);
bool is_ignored_dynamic_output_shape_quant8_mult_gt_1(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_mult_gt_1();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape_quant8_mult_gt_1) {
    execute(CreateModel_dynamic_output_shape_quant8_mult_gt_1,
            is_ignored_dynamic_output_shape_quant8_mult_gt_1,
            get_examples_dynamic_output_shape_quant8_mult_gt_1());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc(Model *model);
bool is_ignored_zero_sized_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc();

TEST_F(GeneratedTests, fully_connected_v1_2_zero_sized_nhwc) {
    execute(CreateModel_zero_sized_nhwc,
            is_ignored_zero_sized_nhwc,
            get_examples_zero_sized_nhwc());
}

} // namespace generated_tests::fully_connected_v1_2
TEST_AVAILABLE_SINCE(V1_2, fully_connected_v1_2_zero_sized_nhwc, generated_tests::fully_connected_v1_2::CreateModel_zero_sized_nhwc)

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed(Model *model);
bool is_ignored_zero_sized_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed();

TEST_F(GeneratedTests, fully_connected_v1_2_zero_sized_nhwc_relaxed) {
    execute(CreateModel_zero_sized_nhwc_relaxed,
            is_ignored_zero_sized_nhwc_relaxed,
            get_examples_zero_sized_nhwc_relaxed());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_quant8(Model *model);
bool is_ignored_zero_sized_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8();

TEST_F(GeneratedTests, fully_connected_v1_2_zero_sized_nhwc_quant8) {
    execute(CreateModel_zero_sized_nhwc_quant8,
            is_ignored_zero_sized_nhwc_quant8,
            get_examples_zero_sized_nhwc_quant8());
}

} // namespace generated_tests::fully_connected_v1_2
TEST_AVAILABLE_SINCE(V1_2, fully_connected_v1_2_zero_sized_nhwc_quant8, generated_tests::fully_connected_v1_2::CreateModel_zero_sized_nhwc_quant8)

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nhwc_float16(Model *model);
bool is_ignored_zero_sized_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16();

TEST_F(GeneratedTests, fully_connected_v1_2_zero_sized_nhwc_float16) {
    execute(CreateModel_zero_sized_nhwc_float16,
            is_ignored_zero_sized_nhwc_float16,
            get_examples_zero_sized_nhwc_float16());
}

} // namespace generated_tests::fully_connected_v1_2
TEST_AVAILABLE_SINCE(V1_2, fully_connected_v1_2_zero_sized_nhwc_float16, generated_tests::fully_connected_v1_2::CreateModel_zero_sized_nhwc_float16)

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw(Model *model);
bool is_ignored_zero_sized_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw();

TEST_F(GeneratedTests, fully_connected_v1_2_zero_sized_nchw) {
    execute(CreateModel_zero_sized_nchw,
            is_ignored_zero_sized_nchw,
            get_examples_zero_sized_nchw());
}

} // namespace generated_tests::fully_connected_v1_2
TEST_AVAILABLE_SINCE(V1_2, fully_connected_v1_2_zero_sized_nchw, generated_tests::fully_connected_v1_2::CreateModel_zero_sized_nchw)

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_relaxed(Model *model);
bool is_ignored_zero_sized_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed();

TEST_F(GeneratedTests, fully_connected_v1_2_zero_sized_nchw_relaxed) {
    execute(CreateModel_zero_sized_nchw_relaxed,
            is_ignored_zero_sized_nchw_relaxed,
            get_examples_zero_sized_nchw_relaxed());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_quant8(Model *model);
bool is_ignored_zero_sized_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8();

TEST_F(GeneratedTests, fully_connected_v1_2_zero_sized_nchw_quant8) {
    execute(CreateModel_zero_sized_nchw_quant8,
            is_ignored_zero_sized_nchw_quant8,
            get_examples_zero_sized_nchw_quant8());
}

} // namespace generated_tests::fully_connected_v1_2
TEST_AVAILABLE_SINCE(V1_2, fully_connected_v1_2_zero_sized_nchw_quant8, generated_tests::fully_connected_v1_2::CreateModel_zero_sized_nchw_quant8)

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_nchw_float16(Model *model);
bool is_ignored_zero_sized_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16();

TEST_F(GeneratedTests, fully_connected_v1_2_zero_sized_nchw_float16) {
    execute(CreateModel_zero_sized_nchw_float16,
            is_ignored_zero_sized_nchw_float16,
            get_examples_zero_sized_nchw_float16());
}

} // namespace generated_tests::fully_connected_v1_2
TEST_AVAILABLE_SINCE(V1_2, fully_connected_v1_2_zero_sized_nchw_float16, generated_tests::fully_connected_v1_2::CreateModel_zero_sized_nchw_float16)

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_nhwc(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nhwc,
            is_ignored_zero_sized_dynamic_output_shape_nhwc,
            get_examples_zero_sized_dynamic_output_shape_nhwc());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_nhwc_relaxed(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc_relaxed();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc_relaxed) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nhwc_relaxed,
            is_ignored_zero_sized_dynamic_output_shape_nhwc_relaxed,
            get_examples_zero_sized_dynamic_output_shape_nhwc_relaxed());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_nhwc_quant8(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc_quant8();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc_quant8) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nhwc_quant8,
            is_ignored_zero_sized_dynamic_output_shape_nhwc_quant8,
            get_examples_zero_sized_dynamic_output_shape_nhwc_quant8());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_nhwc_float16(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc_float16();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc_float16) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nhwc_float16,
            is_ignored_zero_sized_dynamic_output_shape_nhwc_float16,
            get_examples_zero_sized_dynamic_output_shape_nhwc_float16());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_nchw(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nchw,
            is_ignored_zero_sized_dynamic_output_shape_nchw,
            get_examples_zero_sized_dynamic_output_shape_nchw());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_nchw_relaxed(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw_relaxed();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw_relaxed) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nchw_relaxed,
            is_ignored_zero_sized_dynamic_output_shape_nchw_relaxed,
            get_examples_zero_sized_dynamic_output_shape_nchw_relaxed());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_nchw_quant8(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw_quant8();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw_quant8) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nchw_quant8,
            is_ignored_zero_sized_dynamic_output_shape_nchw_quant8,
            get_examples_zero_sized_dynamic_output_shape_nchw_quant8());
}

} // namespace generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

void CreateModel_zero_sized_dynamic_output_shape_nchw_float16(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw_float16();

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw_float16) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nchw_float16,
            is_ignored_zero_sized_dynamic_output_shape_nchw_float16,
            get_examples_zero_sized_dynamic_output_shape_nchw_float16());
}

} // namespace generated_tests::fully_connected_v1_2

