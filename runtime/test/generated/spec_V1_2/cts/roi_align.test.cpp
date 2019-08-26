// Generated from roi_align.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::roi_align {

void CreateModel_nhwc(Model *model);
bool is_ignored_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

TEST_F(GeneratedTests, roi_align_nhwc) {
    execute(CreateModel_nhwc,
            is_ignored_nhwc,
            get_examples_nhwc());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc, generated_tests::roi_align::CreateModel_nhwc)

namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed(Model *model);
bool is_ignored_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

TEST_F(GeneratedTests, roi_align_nhwc_relaxed) {
    execute(CreateModel_nhwc_relaxed,
            is_ignored_nhwc_relaxed,
            get_examples_nhwc_relaxed());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8(Model *model);
bool is_ignored_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8();

TEST_F(GeneratedTests, roi_align_nhwc_quant8) {
    execute(CreateModel_nhwc_quant8,
            is_ignored_nhwc_quant8,
            get_examples_nhwc_quant8());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_quant8, generated_tests::roi_align::CreateModel_nhwc_quant8)

namespace generated_tests::roi_align {

void CreateModel_nhwc_float16(Model *model);
bool is_ignored_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

TEST_F(GeneratedTests, roi_align_nhwc_float16) {
    execute(CreateModel_nhwc_float16,
            is_ignored_nhwc_float16,
            get_examples_nhwc_float16());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_float16, generated_tests::roi_align::CreateModel_nhwc_float16)

namespace generated_tests::roi_align {

void CreateModel_nchw(Model *model);
bool is_ignored_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

TEST_F(GeneratedTests, roi_align_nchw) {
    execute(CreateModel_nchw,
            is_ignored_nchw,
            get_examples_nchw());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw, generated_tests::roi_align::CreateModel_nchw)

namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed(Model *model);
bool is_ignored_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

TEST_F(GeneratedTests, roi_align_nchw_relaxed) {
    execute(CreateModel_nchw_relaxed,
            is_ignored_nchw_relaxed,
            get_examples_nchw_relaxed());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nchw_quant8(Model *model);
bool is_ignored_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8();

TEST_F(GeneratedTests, roi_align_nchw_quant8) {
    execute(CreateModel_nchw_quant8,
            is_ignored_nchw_quant8,
            get_examples_nchw_quant8());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_quant8, generated_tests::roi_align::CreateModel_nchw_quant8)

namespace generated_tests::roi_align {

void CreateModel_nchw_float16(Model *model);
bool is_ignored_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

TEST_F(GeneratedTests, roi_align_nchw_float16) {
    execute(CreateModel_nchw_float16,
            is_ignored_nchw_float16,
            get_examples_nchw_float16());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_float16, generated_tests::roi_align::CreateModel_nchw_float16)

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc(Model *model);
bool is_ignored_dynamic_output_shape_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc) {
    execute(CreateModel_dynamic_output_shape_nhwc,
            is_ignored_dynamic_output_shape_nhwc,
            get_examples_dynamic_output_shape_nhwc());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_relaxed) {
    execute(CreateModel_dynamic_output_shape_nhwc_relaxed,
            is_ignored_dynamic_output_shape_nhwc_relaxed,
            get_examples_dynamic_output_shape_nhwc_relaxed());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_quant8(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_quant8) {
    execute(CreateModel_dynamic_output_shape_nhwc_quant8,
            is_ignored_dynamic_output_shape_nhwc_quant8,
            get_examples_dynamic_output_shape_nhwc_quant8());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_float16(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_float16) {
    execute(CreateModel_dynamic_output_shape_nhwc_float16,
            is_ignored_dynamic_output_shape_nhwc_float16,
            get_examples_dynamic_output_shape_nhwc_float16());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw(Model *model);
bool is_ignored_dynamic_output_shape_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw) {
    execute(CreateModel_dynamic_output_shape_nchw,
            is_ignored_dynamic_output_shape_nchw,
            get_examples_dynamic_output_shape_nchw());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_relaxed) {
    execute(CreateModel_dynamic_output_shape_nchw_relaxed,
            is_ignored_dynamic_output_shape_nchw_relaxed,
            get_examples_dynamic_output_shape_nchw_relaxed());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_quant8(Model *model);
bool is_ignored_dynamic_output_shape_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_quant8) {
    execute(CreateModel_dynamic_output_shape_nchw_quant8,
            is_ignored_dynamic_output_shape_nchw_quant8,
            get_examples_dynamic_output_shape_nchw_quant8());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_float16(Model *model);
bool is_ignored_dynamic_output_shape_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_float16) {
    execute(CreateModel_dynamic_output_shape_nchw_float16,
            is_ignored_dynamic_output_shape_nchw_float16,
            get_examples_dynamic_output_shape_nchw_float16());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nhwc_2(Model *model);
bool is_ignored_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

TEST_F(GeneratedTests, roi_align_nhwc_2) {
    execute(CreateModel_nhwc_2,
            is_ignored_nhwc_2,
            get_examples_nhwc_2());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_2, generated_tests::roi_align::CreateModel_nhwc_2)

namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_2(Model *model);
bool is_ignored_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_2();

TEST_F(GeneratedTests, roi_align_nhwc_relaxed_2) {
    execute(CreateModel_nhwc_relaxed_2,
            is_ignored_nhwc_relaxed_2,
            get_examples_nhwc_relaxed_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_2(Model *model);
bool is_ignored_nhwc_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_2();

TEST_F(GeneratedTests, roi_align_nhwc_quant8_2) {
    execute(CreateModel_nhwc_quant8_2,
            is_ignored_nhwc_quant8_2,
            get_examples_nhwc_quant8_2());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_quant8_2, generated_tests::roi_align::CreateModel_nhwc_quant8_2)

namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_2(Model *model);
bool is_ignored_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_2();

TEST_F(GeneratedTests, roi_align_nhwc_float16_2) {
    execute(CreateModel_nhwc_float16_2,
            is_ignored_nhwc_float16_2,
            get_examples_nhwc_float16_2());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_float16_2, generated_tests::roi_align::CreateModel_nhwc_float16_2)

namespace generated_tests::roi_align {

void CreateModel_nchw_2(Model *model);
bool is_ignored_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

TEST_F(GeneratedTests, roi_align_nchw_2) {
    execute(CreateModel_nchw_2,
            is_ignored_nchw_2,
            get_examples_nchw_2());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_2, generated_tests::roi_align::CreateModel_nchw_2)

namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_2(Model *model);
bool is_ignored_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_2();

TEST_F(GeneratedTests, roi_align_nchw_relaxed_2) {
    execute(CreateModel_nchw_relaxed_2,
            is_ignored_nchw_relaxed_2,
            get_examples_nchw_relaxed_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_2(Model *model);
bool is_ignored_nchw_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_2();

TEST_F(GeneratedTests, roi_align_nchw_quant8_2) {
    execute(CreateModel_nchw_quant8_2,
            is_ignored_nchw_quant8_2,
            get_examples_nchw_quant8_2());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_quant8_2, generated_tests::roi_align::CreateModel_nchw_quant8_2)

namespace generated_tests::roi_align {

void CreateModel_nchw_float16_2(Model *model);
bool is_ignored_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_2();

TEST_F(GeneratedTests, roi_align_nchw_float16_2) {
    execute(CreateModel_nchw_float16_2,
            is_ignored_nchw_float16_2,
            get_examples_nchw_float16_2());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_float16_2, generated_tests::roi_align::CreateModel_nchw_float16_2)

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_2(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_2();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_2) {
    execute(CreateModel_dynamic_output_shape_nhwc_2,
            is_ignored_dynamic_output_shape_nhwc_2,
            get_examples_dynamic_output_shape_nhwc_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_relaxed_2(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_2();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_relaxed_2) {
    execute(CreateModel_dynamic_output_shape_nhwc_relaxed_2,
            is_ignored_dynamic_output_shape_nhwc_relaxed_2,
            get_examples_dynamic_output_shape_nhwc_relaxed_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_quant8_2(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8_2();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_quant8_2) {
    execute(CreateModel_dynamic_output_shape_nhwc_quant8_2,
            is_ignored_dynamic_output_shape_nhwc_quant8_2,
            get_examples_dynamic_output_shape_nhwc_quant8_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_float16_2(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_2();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_float16_2) {
    execute(CreateModel_dynamic_output_shape_nhwc_float16_2,
            is_ignored_dynamic_output_shape_nhwc_float16_2,
            get_examples_dynamic_output_shape_nhwc_float16_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_2(Model *model);
bool is_ignored_dynamic_output_shape_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_2();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_2) {
    execute(CreateModel_dynamic_output_shape_nchw_2,
            is_ignored_dynamic_output_shape_nchw_2,
            get_examples_dynamic_output_shape_nchw_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_relaxed_2(Model *model);
bool is_ignored_dynamic_output_shape_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_2();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_relaxed_2) {
    execute(CreateModel_dynamic_output_shape_nchw_relaxed_2,
            is_ignored_dynamic_output_shape_nchw_relaxed_2,
            get_examples_dynamic_output_shape_nchw_relaxed_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_quant8_2(Model *model);
bool is_ignored_dynamic_output_shape_nchw_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8_2();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_quant8_2) {
    execute(CreateModel_dynamic_output_shape_nchw_quant8_2,
            is_ignored_dynamic_output_shape_nchw_quant8_2,
            get_examples_dynamic_output_shape_nchw_quant8_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_float16_2(Model *model);
bool is_ignored_dynamic_output_shape_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_2();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_float16_2) {
    execute(CreateModel_dynamic_output_shape_nchw_float16_2,
            is_ignored_dynamic_output_shape_nchw_float16_2,
            get_examples_dynamic_output_shape_nchw_float16_2());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nhwc_3(Model *model);
bool is_ignored_nhwc_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_3();

TEST_F(GeneratedTests, roi_align_nhwc_3) {
    execute(CreateModel_nhwc_3,
            is_ignored_nhwc_3,
            get_examples_nhwc_3());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_3, generated_tests::roi_align::CreateModel_nhwc_3)

namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_3(Model *model);
bool is_ignored_nhwc_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_3();

TEST_F(GeneratedTests, roi_align_nhwc_relaxed_3) {
    execute(CreateModel_nhwc_relaxed_3,
            is_ignored_nhwc_relaxed_3,
            get_examples_nhwc_relaxed_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_3(Model *model);
bool is_ignored_nhwc_quant8_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_3();

TEST_F(GeneratedTests, roi_align_nhwc_quant8_3) {
    execute(CreateModel_nhwc_quant8_3,
            is_ignored_nhwc_quant8_3,
            get_examples_nhwc_quant8_3());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_quant8_3, generated_tests::roi_align::CreateModel_nhwc_quant8_3)

namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_3(Model *model);
bool is_ignored_nhwc_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_3();

TEST_F(GeneratedTests, roi_align_nhwc_float16_3) {
    execute(CreateModel_nhwc_float16_3,
            is_ignored_nhwc_float16_3,
            get_examples_nhwc_float16_3());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_float16_3, generated_tests::roi_align::CreateModel_nhwc_float16_3)

namespace generated_tests::roi_align {

void CreateModel_nchw_3(Model *model);
bool is_ignored_nchw_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_3();

TEST_F(GeneratedTests, roi_align_nchw_3) {
    execute(CreateModel_nchw_3,
            is_ignored_nchw_3,
            get_examples_nchw_3());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_3, generated_tests::roi_align::CreateModel_nchw_3)

namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_3(Model *model);
bool is_ignored_nchw_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_3();

TEST_F(GeneratedTests, roi_align_nchw_relaxed_3) {
    execute(CreateModel_nchw_relaxed_3,
            is_ignored_nchw_relaxed_3,
            get_examples_nchw_relaxed_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_3(Model *model);
bool is_ignored_nchw_quant8_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_3();

TEST_F(GeneratedTests, roi_align_nchw_quant8_3) {
    execute(CreateModel_nchw_quant8_3,
            is_ignored_nchw_quant8_3,
            get_examples_nchw_quant8_3());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_quant8_3, generated_tests::roi_align::CreateModel_nchw_quant8_3)

namespace generated_tests::roi_align {

void CreateModel_nchw_float16_3(Model *model);
bool is_ignored_nchw_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_3();

TEST_F(GeneratedTests, roi_align_nchw_float16_3) {
    execute(CreateModel_nchw_float16_3,
            is_ignored_nchw_float16_3,
            get_examples_nchw_float16_3());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_float16_3, generated_tests::roi_align::CreateModel_nchw_float16_3)

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_3(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_3();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_3) {
    execute(CreateModel_dynamic_output_shape_nhwc_3,
            is_ignored_dynamic_output_shape_nhwc_3,
            get_examples_dynamic_output_shape_nhwc_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_relaxed_3(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_3();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_relaxed_3) {
    execute(CreateModel_dynamic_output_shape_nhwc_relaxed_3,
            is_ignored_dynamic_output_shape_nhwc_relaxed_3,
            get_examples_dynamic_output_shape_nhwc_relaxed_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_quant8_3(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_quant8_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8_3();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_quant8_3) {
    execute(CreateModel_dynamic_output_shape_nhwc_quant8_3,
            is_ignored_dynamic_output_shape_nhwc_quant8_3,
            get_examples_dynamic_output_shape_nhwc_quant8_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_float16_3(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_3();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_float16_3) {
    execute(CreateModel_dynamic_output_shape_nhwc_float16_3,
            is_ignored_dynamic_output_shape_nhwc_float16_3,
            get_examples_dynamic_output_shape_nhwc_float16_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_3(Model *model);
bool is_ignored_dynamic_output_shape_nchw_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_3();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_3) {
    execute(CreateModel_dynamic_output_shape_nchw_3,
            is_ignored_dynamic_output_shape_nchw_3,
            get_examples_dynamic_output_shape_nchw_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_relaxed_3(Model *model);
bool is_ignored_dynamic_output_shape_nchw_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_3();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_relaxed_3) {
    execute(CreateModel_dynamic_output_shape_nchw_relaxed_3,
            is_ignored_dynamic_output_shape_nchw_relaxed_3,
            get_examples_dynamic_output_shape_nchw_relaxed_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_quant8_3(Model *model);
bool is_ignored_dynamic_output_shape_nchw_quant8_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8_3();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_quant8_3) {
    execute(CreateModel_dynamic_output_shape_nchw_quant8_3,
            is_ignored_dynamic_output_shape_nchw_quant8_3,
            get_examples_dynamic_output_shape_nchw_quant8_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_float16_3(Model *model);
bool is_ignored_dynamic_output_shape_nchw_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_3();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_float16_3) {
    execute(CreateModel_dynamic_output_shape_nchw_float16_3,
            is_ignored_dynamic_output_shape_nchw_float16_3,
            get_examples_dynamic_output_shape_nchw_float16_3());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nhwc_4(Model *model);
bool is_ignored_nhwc_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_4();

TEST_F(GeneratedTests, roi_align_nhwc_4) {
    execute(CreateModel_nhwc_4,
            is_ignored_nhwc_4,
            get_examples_nhwc_4());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_4, generated_tests::roi_align::CreateModel_nhwc_4)

namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_4(Model *model);
bool is_ignored_nhwc_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_4();

TEST_F(GeneratedTests, roi_align_nhwc_relaxed_4) {
    execute(CreateModel_nhwc_relaxed_4,
            is_ignored_nhwc_relaxed_4,
            get_examples_nhwc_relaxed_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_4(Model *model);
bool is_ignored_nhwc_quant8_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_4();

TEST_F(GeneratedTests, roi_align_nhwc_quant8_4) {
    execute(CreateModel_nhwc_quant8_4,
            is_ignored_nhwc_quant8_4,
            get_examples_nhwc_quant8_4());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_quant8_4, generated_tests::roi_align::CreateModel_nhwc_quant8_4)

namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_4(Model *model);
bool is_ignored_nhwc_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_4();

TEST_F(GeneratedTests, roi_align_nhwc_float16_4) {
    execute(CreateModel_nhwc_float16_4,
            is_ignored_nhwc_float16_4,
            get_examples_nhwc_float16_4());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_float16_4, generated_tests::roi_align::CreateModel_nhwc_float16_4)

namespace generated_tests::roi_align {

void CreateModel_nchw_4(Model *model);
bool is_ignored_nchw_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_4();

TEST_F(GeneratedTests, roi_align_nchw_4) {
    execute(CreateModel_nchw_4,
            is_ignored_nchw_4,
            get_examples_nchw_4());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_4, generated_tests::roi_align::CreateModel_nchw_4)

namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_4(Model *model);
bool is_ignored_nchw_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_4();

TEST_F(GeneratedTests, roi_align_nchw_relaxed_4) {
    execute(CreateModel_nchw_relaxed_4,
            is_ignored_nchw_relaxed_4,
            get_examples_nchw_relaxed_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_4(Model *model);
bool is_ignored_nchw_quant8_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_4();

TEST_F(GeneratedTests, roi_align_nchw_quant8_4) {
    execute(CreateModel_nchw_quant8_4,
            is_ignored_nchw_quant8_4,
            get_examples_nchw_quant8_4());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_quant8_4, generated_tests::roi_align::CreateModel_nchw_quant8_4)

namespace generated_tests::roi_align {

void CreateModel_nchw_float16_4(Model *model);
bool is_ignored_nchw_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_4();

TEST_F(GeneratedTests, roi_align_nchw_float16_4) {
    execute(CreateModel_nchw_float16_4,
            is_ignored_nchw_float16_4,
            get_examples_nchw_float16_4());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_float16_4, generated_tests::roi_align::CreateModel_nchw_float16_4)

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_4(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_4();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_4) {
    execute(CreateModel_dynamic_output_shape_nhwc_4,
            is_ignored_dynamic_output_shape_nhwc_4,
            get_examples_dynamic_output_shape_nhwc_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_relaxed_4(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_4();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_relaxed_4) {
    execute(CreateModel_dynamic_output_shape_nhwc_relaxed_4,
            is_ignored_dynamic_output_shape_nhwc_relaxed_4,
            get_examples_dynamic_output_shape_nhwc_relaxed_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_quant8_4(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_quant8_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8_4();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_quant8_4) {
    execute(CreateModel_dynamic_output_shape_nhwc_quant8_4,
            is_ignored_dynamic_output_shape_nhwc_quant8_4,
            get_examples_dynamic_output_shape_nhwc_quant8_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_float16_4(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_4();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_float16_4) {
    execute(CreateModel_dynamic_output_shape_nhwc_float16_4,
            is_ignored_dynamic_output_shape_nhwc_float16_4,
            get_examples_dynamic_output_shape_nhwc_float16_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_4(Model *model);
bool is_ignored_dynamic_output_shape_nchw_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_4();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_4) {
    execute(CreateModel_dynamic_output_shape_nchw_4,
            is_ignored_dynamic_output_shape_nchw_4,
            get_examples_dynamic_output_shape_nchw_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_relaxed_4(Model *model);
bool is_ignored_dynamic_output_shape_nchw_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_4();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_relaxed_4) {
    execute(CreateModel_dynamic_output_shape_nchw_relaxed_4,
            is_ignored_dynamic_output_shape_nchw_relaxed_4,
            get_examples_dynamic_output_shape_nchw_relaxed_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_quant8_4(Model *model);
bool is_ignored_dynamic_output_shape_nchw_quant8_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8_4();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_quant8_4) {
    execute(CreateModel_dynamic_output_shape_nchw_quant8_4,
            is_ignored_dynamic_output_shape_nchw_quant8_4,
            get_examples_dynamic_output_shape_nchw_quant8_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_float16_4(Model *model);
bool is_ignored_dynamic_output_shape_nchw_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_4();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_float16_4) {
    execute(CreateModel_dynamic_output_shape_nchw_float16_4,
            is_ignored_dynamic_output_shape_nchw_float16_4,
            get_examples_dynamic_output_shape_nchw_float16_4());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc(Model *model);
bool is_ignored_zero_sized_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc();

TEST_F(GeneratedTests, roi_align_zero_sized_nhwc) {
    execute(CreateModel_zero_sized_nhwc,
            is_ignored_zero_sized_nhwc,
            get_examples_zero_sized_nhwc());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_zero_sized_nhwc, generated_tests::roi_align::CreateModel_zero_sized_nhwc)

namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_relaxed(Model *model);
bool is_ignored_zero_sized_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed();

TEST_F(GeneratedTests, roi_align_zero_sized_nhwc_relaxed) {
    execute(CreateModel_zero_sized_nhwc_relaxed,
            is_ignored_zero_sized_nhwc_relaxed,
            get_examples_zero_sized_nhwc_relaxed());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_quant8(Model *model);
bool is_ignored_zero_sized_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8();

TEST_F(GeneratedTests, roi_align_zero_sized_nhwc_quant8) {
    execute(CreateModel_zero_sized_nhwc_quant8,
            is_ignored_zero_sized_nhwc_quant8,
            get_examples_zero_sized_nhwc_quant8());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_zero_sized_nhwc_quant8, generated_tests::roi_align::CreateModel_zero_sized_nhwc_quant8)

namespace generated_tests::roi_align {

void CreateModel_zero_sized_nhwc_float16(Model *model);
bool is_ignored_zero_sized_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16();

TEST_F(GeneratedTests, roi_align_zero_sized_nhwc_float16) {
    execute(CreateModel_zero_sized_nhwc_float16,
            is_ignored_zero_sized_nhwc_float16,
            get_examples_zero_sized_nhwc_float16());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_zero_sized_nhwc_float16, generated_tests::roi_align::CreateModel_zero_sized_nhwc_float16)

namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw(Model *model);
bool is_ignored_zero_sized_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw();

TEST_F(GeneratedTests, roi_align_zero_sized_nchw) {
    execute(CreateModel_zero_sized_nchw,
            is_ignored_zero_sized_nchw,
            get_examples_zero_sized_nchw());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_zero_sized_nchw, generated_tests::roi_align::CreateModel_zero_sized_nchw)

namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_relaxed(Model *model);
bool is_ignored_zero_sized_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed();

TEST_F(GeneratedTests, roi_align_zero_sized_nchw_relaxed) {
    execute(CreateModel_zero_sized_nchw_relaxed,
            is_ignored_zero_sized_nchw_relaxed,
            get_examples_zero_sized_nchw_relaxed());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_quant8(Model *model);
bool is_ignored_zero_sized_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8();

TEST_F(GeneratedTests, roi_align_zero_sized_nchw_quant8) {
    execute(CreateModel_zero_sized_nchw_quant8,
            is_ignored_zero_sized_nchw_quant8,
            get_examples_zero_sized_nchw_quant8());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_zero_sized_nchw_quant8, generated_tests::roi_align::CreateModel_zero_sized_nchw_quant8)

namespace generated_tests::roi_align {

void CreateModel_zero_sized_nchw_float16(Model *model);
bool is_ignored_zero_sized_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16();

TEST_F(GeneratedTests, roi_align_zero_sized_nchw_float16) {
    execute(CreateModel_zero_sized_nchw_float16,
            is_ignored_zero_sized_nchw_float16,
            get_examples_zero_sized_nchw_float16());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_zero_sized_nchw_float16, generated_tests::roi_align::CreateModel_zero_sized_nchw_float16)

namespace generated_tests::roi_align {

void CreateModel_zero_sized_dynamic_output_shape_nhwc(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc();

TEST_F(DynamicOutputShapeTest, roi_align_zero_sized_dynamic_output_shape_nhwc) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nhwc,
            is_ignored_zero_sized_dynamic_output_shape_nhwc,
            get_examples_zero_sized_dynamic_output_shape_nhwc());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_dynamic_output_shape_nhwc_relaxed(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc_relaxed();

TEST_F(DynamicOutputShapeTest, roi_align_zero_sized_dynamic_output_shape_nhwc_relaxed) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nhwc_relaxed,
            is_ignored_zero_sized_dynamic_output_shape_nhwc_relaxed,
            get_examples_zero_sized_dynamic_output_shape_nhwc_relaxed());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_dynamic_output_shape_nhwc_quant8(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc_quant8();

TEST_F(DynamicOutputShapeTest, roi_align_zero_sized_dynamic_output_shape_nhwc_quant8) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nhwc_quant8,
            is_ignored_zero_sized_dynamic_output_shape_nhwc_quant8,
            get_examples_zero_sized_dynamic_output_shape_nhwc_quant8());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_dynamic_output_shape_nhwc_float16(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc_float16();

TEST_F(DynamicOutputShapeTest, roi_align_zero_sized_dynamic_output_shape_nhwc_float16) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nhwc_float16,
            is_ignored_zero_sized_dynamic_output_shape_nhwc_float16,
            get_examples_zero_sized_dynamic_output_shape_nhwc_float16());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_dynamic_output_shape_nchw(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw();

TEST_F(DynamicOutputShapeTest, roi_align_zero_sized_dynamic_output_shape_nchw) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nchw,
            is_ignored_zero_sized_dynamic_output_shape_nchw,
            get_examples_zero_sized_dynamic_output_shape_nchw());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_dynamic_output_shape_nchw_relaxed(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw_relaxed();

TEST_F(DynamicOutputShapeTest, roi_align_zero_sized_dynamic_output_shape_nchw_relaxed) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nchw_relaxed,
            is_ignored_zero_sized_dynamic_output_shape_nchw_relaxed,
            get_examples_zero_sized_dynamic_output_shape_nchw_relaxed());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_dynamic_output_shape_nchw_quant8(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw_quant8();

TEST_F(DynamicOutputShapeTest, roi_align_zero_sized_dynamic_output_shape_nchw_quant8) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nchw_quant8,
            is_ignored_zero_sized_dynamic_output_shape_nchw_quant8,
            get_examples_zero_sized_dynamic_output_shape_nchw_quant8());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_zero_sized_dynamic_output_shape_nchw_float16(Model *model);
bool is_ignored_zero_sized_dynamic_output_shape_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw_float16();

TEST_F(DynamicOutputShapeTest, roi_align_zero_sized_dynamic_output_shape_nchw_float16) {
    execute(CreateModel_zero_sized_dynamic_output_shape_nchw_float16,
            is_ignored_zero_sized_dynamic_output_shape_nchw_float16,
            get_examples_zero_sized_dynamic_output_shape_nchw_float16());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nhwc_5(Model *model);
bool is_ignored_nhwc_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_5();

TEST_F(GeneratedTests, roi_align_nhwc_5) {
    execute(CreateModel_nhwc_5,
            is_ignored_nhwc_5,
            get_examples_nhwc_5());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_5, generated_tests::roi_align::CreateModel_nhwc_5)

namespace generated_tests::roi_align {

void CreateModel_nhwc_relaxed_5(Model *model);
bool is_ignored_nhwc_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_5();

TEST_F(GeneratedTests, roi_align_nhwc_relaxed_5) {
    execute(CreateModel_nhwc_relaxed_5,
            is_ignored_nhwc_relaxed_5,
            get_examples_nhwc_relaxed_5());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nhwc_quant8_5(Model *model);
bool is_ignored_nhwc_quant8_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_5();

TEST_F(GeneratedTests, roi_align_nhwc_quant8_5) {
    execute(CreateModel_nhwc_quant8_5,
            is_ignored_nhwc_quant8_5,
            get_examples_nhwc_quant8_5());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_quant8_5, generated_tests::roi_align::CreateModel_nhwc_quant8_5)

namespace generated_tests::roi_align {

void CreateModel_nhwc_float16_5(Model *model);
bool is_ignored_nhwc_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_5();

TEST_F(GeneratedTests, roi_align_nhwc_float16_5) {
    execute(CreateModel_nhwc_float16_5,
            is_ignored_nhwc_float16_5,
            get_examples_nhwc_float16_5());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nhwc_float16_5, generated_tests::roi_align::CreateModel_nhwc_float16_5)

namespace generated_tests::roi_align {

void CreateModel_nchw_5(Model *model);
bool is_ignored_nchw_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_5();

TEST_F(GeneratedTests, roi_align_nchw_5) {
    execute(CreateModel_nchw_5,
            is_ignored_nchw_5,
            get_examples_nchw_5());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_5, generated_tests::roi_align::CreateModel_nchw_5)

namespace generated_tests::roi_align {

void CreateModel_nchw_relaxed_5(Model *model);
bool is_ignored_nchw_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_5();

TEST_F(GeneratedTests, roi_align_nchw_relaxed_5) {
    execute(CreateModel_nchw_relaxed_5,
            is_ignored_nchw_relaxed_5,
            get_examples_nchw_relaxed_5());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_nchw_quant8_5(Model *model);
bool is_ignored_nchw_quant8_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_5();

TEST_F(GeneratedTests, roi_align_nchw_quant8_5) {
    execute(CreateModel_nchw_quant8_5,
            is_ignored_nchw_quant8_5,
            get_examples_nchw_quant8_5());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_quant8_5, generated_tests::roi_align::CreateModel_nchw_quant8_5)

namespace generated_tests::roi_align {

void CreateModel_nchw_float16_5(Model *model);
bool is_ignored_nchw_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_5();

TEST_F(GeneratedTests, roi_align_nchw_float16_5) {
    execute(CreateModel_nchw_float16_5,
            is_ignored_nchw_float16_5,
            get_examples_nchw_float16_5());
}

} // namespace generated_tests::roi_align
TEST_AVAILABLE_SINCE(V1_2, roi_align_nchw_float16_5, generated_tests::roi_align::CreateModel_nchw_float16_5)

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_5(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_5();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_5) {
    execute(CreateModel_dynamic_output_shape_nhwc_5,
            is_ignored_dynamic_output_shape_nhwc_5,
            get_examples_dynamic_output_shape_nhwc_5());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_relaxed_5(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_5();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_relaxed_5) {
    execute(CreateModel_dynamic_output_shape_nhwc_relaxed_5,
            is_ignored_dynamic_output_shape_nhwc_relaxed_5,
            get_examples_dynamic_output_shape_nhwc_relaxed_5());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_quant8_5(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_quant8_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8_5();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_quant8_5) {
    execute(CreateModel_dynamic_output_shape_nhwc_quant8_5,
            is_ignored_dynamic_output_shape_nhwc_quant8_5,
            get_examples_dynamic_output_shape_nhwc_quant8_5());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nhwc_float16_5(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_5();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nhwc_float16_5) {
    execute(CreateModel_dynamic_output_shape_nhwc_float16_5,
            is_ignored_dynamic_output_shape_nhwc_float16_5,
            get_examples_dynamic_output_shape_nhwc_float16_5());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_5(Model *model);
bool is_ignored_dynamic_output_shape_nchw_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_5();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_5) {
    execute(CreateModel_dynamic_output_shape_nchw_5,
            is_ignored_dynamic_output_shape_nchw_5,
            get_examples_dynamic_output_shape_nchw_5());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_relaxed_5(Model *model);
bool is_ignored_dynamic_output_shape_nchw_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_5();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_relaxed_5) {
    execute(CreateModel_dynamic_output_shape_nchw_relaxed_5,
            is_ignored_dynamic_output_shape_nchw_relaxed_5,
            get_examples_dynamic_output_shape_nchw_relaxed_5());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_quant8_5(Model *model);
bool is_ignored_dynamic_output_shape_nchw_quant8_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8_5();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_quant8_5) {
    execute(CreateModel_dynamic_output_shape_nchw_quant8_5,
            is_ignored_dynamic_output_shape_nchw_quant8_5,
            get_examples_dynamic_output_shape_nchw_quant8_5());
}

} // namespace generated_tests::roi_align

namespace generated_tests::roi_align {

void CreateModel_dynamic_output_shape_nchw_float16_5(Model *model);
bool is_ignored_dynamic_output_shape_nchw_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_5();

TEST_F(DynamicOutputShapeTest, roi_align_dynamic_output_shape_nchw_float16_5) {
    execute(CreateModel_dynamic_output_shape_nchw_float16_5,
            is_ignored_dynamic_output_shape_nchw_float16_5,
            get_examples_dynamic_output_shape_nchw_float16_5());
}

} // namespace generated_tests::roi_align

