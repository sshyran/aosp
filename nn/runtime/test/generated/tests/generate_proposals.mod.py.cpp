// Generated from generate_proposals.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::generate_proposals {

void CreateModel_nhwc(Model *model);
bool is_ignored_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

TEST_F(GeneratedTests, generate_proposals_nhwc) {
    execute(CreateModel_nhwc,
            is_ignored_nhwc,
            get_examples_nhwc());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nhwc, generated_tests::generate_proposals::CreateModel_nhwc)

namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed(Model *model);
bool is_ignored_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

TEST_F(GeneratedTests, generate_proposals_nhwc_relaxed) {
    execute(CreateModel_nhwc_relaxed,
            is_ignored_nhwc_relaxed,
            get_examples_nhwc_relaxed());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8(Model *model);
bool is_ignored_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8();

TEST_F(GeneratedTests, generate_proposals_nhwc_quant8) {
    execute(CreateModel_nhwc_quant8,
            is_ignored_nhwc_quant8,
            get_examples_nhwc_quant8());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nhwc_quant8, generated_tests::generate_proposals::CreateModel_nhwc_quant8)

namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16(Model *model);
bool is_ignored_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

TEST_F(GeneratedTests, generate_proposals_nhwc_float16) {
    execute(CreateModel_nhwc_float16,
            is_ignored_nhwc_float16,
            get_examples_nhwc_float16());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nhwc_float16, generated_tests::generate_proposals::CreateModel_nhwc_float16)

namespace generated_tests::generate_proposals {

void CreateModel_nchw(Model *model);
bool is_ignored_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

TEST_F(GeneratedTests, generate_proposals_nchw) {
    execute(CreateModel_nchw,
            is_ignored_nchw,
            get_examples_nchw());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nchw, generated_tests::generate_proposals::CreateModel_nchw)

namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed(Model *model);
bool is_ignored_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

TEST_F(GeneratedTests, generate_proposals_nchw_relaxed) {
    execute(CreateModel_nchw_relaxed,
            is_ignored_nchw_relaxed,
            get_examples_nchw_relaxed());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8(Model *model);
bool is_ignored_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8();

TEST_F(GeneratedTests, generate_proposals_nchw_quant8) {
    execute(CreateModel_nchw_quant8,
            is_ignored_nchw_quant8,
            get_examples_nchw_quant8());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nchw_quant8, generated_tests::generate_proposals::CreateModel_nchw_quant8)

namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16(Model *model);
bool is_ignored_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

TEST_F(GeneratedTests, generate_proposals_nchw_float16) {
    execute(CreateModel_nchw_float16,
            is_ignored_nchw_float16,
            get_examples_nchw_float16());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nchw_float16, generated_tests::generate_proposals::CreateModel_nchw_float16)

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nhwc(Model *model);
bool is_ignored_dynamic_output_shape_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nhwc) {
    execute(CreateModel_dynamic_output_shape_nhwc,
            is_ignored_dynamic_output_shape_nhwc,
            get_examples_dynamic_output_shape_nhwc());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nhwc_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nhwc_relaxed) {
    execute(CreateModel_dynamic_output_shape_nhwc_relaxed,
            is_ignored_dynamic_output_shape_nhwc_relaxed,
            get_examples_dynamic_output_shape_nhwc_relaxed());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nhwc_quant8(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nhwc_quant8) {
    execute(CreateModel_dynamic_output_shape_nhwc_quant8,
            is_ignored_dynamic_output_shape_nhwc_quant8,
            get_examples_dynamic_output_shape_nhwc_quant8());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nhwc_float16(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nhwc_float16) {
    execute(CreateModel_dynamic_output_shape_nhwc_float16,
            is_ignored_dynamic_output_shape_nhwc_float16,
            get_examples_dynamic_output_shape_nhwc_float16());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nchw(Model *model);
bool is_ignored_dynamic_output_shape_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nchw) {
    execute(CreateModel_dynamic_output_shape_nchw,
            is_ignored_dynamic_output_shape_nchw,
            get_examples_dynamic_output_shape_nchw());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nchw_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nchw_relaxed) {
    execute(CreateModel_dynamic_output_shape_nchw_relaxed,
            is_ignored_dynamic_output_shape_nchw_relaxed,
            get_examples_dynamic_output_shape_nchw_relaxed());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nchw_quant8(Model *model);
bool is_ignored_dynamic_output_shape_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nchw_quant8) {
    execute(CreateModel_dynamic_output_shape_nchw_quant8,
            is_ignored_dynamic_output_shape_nchw_quant8,
            get_examples_dynamic_output_shape_nchw_quant8());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nchw_float16(Model *model);
bool is_ignored_dynamic_output_shape_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nchw_float16) {
    execute(CreateModel_dynamic_output_shape_nchw_float16,
            is_ignored_dynamic_output_shape_nchw_float16,
            get_examples_dynamic_output_shape_nchw_float16());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_nhwc_2(Model *model);
bool is_ignored_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

TEST_F(GeneratedTests, generate_proposals_nhwc_2) {
    execute(CreateModel_nhwc_2,
            is_ignored_nhwc_2,
            get_examples_nhwc_2());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nhwc_2, generated_tests::generate_proposals::CreateModel_nhwc_2)

namespace generated_tests::generate_proposals {

void CreateModel_nhwc_relaxed_2(Model *model);
bool is_ignored_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_2();

TEST_F(GeneratedTests, generate_proposals_nhwc_relaxed_2) {
    execute(CreateModel_nhwc_relaxed_2,
            is_ignored_nhwc_relaxed_2,
            get_examples_nhwc_relaxed_2());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_nhwc_quant8_2(Model *model);
bool is_ignored_nhwc_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_2();

TEST_F(GeneratedTests, generate_proposals_nhwc_quant8_2) {
    execute(CreateModel_nhwc_quant8_2,
            is_ignored_nhwc_quant8_2,
            get_examples_nhwc_quant8_2());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nhwc_quant8_2, generated_tests::generate_proposals::CreateModel_nhwc_quant8_2)

namespace generated_tests::generate_proposals {

void CreateModel_nhwc_float16_2(Model *model);
bool is_ignored_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_2();

TEST_F(GeneratedTests, generate_proposals_nhwc_float16_2) {
    execute(CreateModel_nhwc_float16_2,
            is_ignored_nhwc_float16_2,
            get_examples_nhwc_float16_2());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nhwc_float16_2, generated_tests::generate_proposals::CreateModel_nhwc_float16_2)

namespace generated_tests::generate_proposals {

void CreateModel_nchw_2(Model *model);
bool is_ignored_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

TEST_F(GeneratedTests, generate_proposals_nchw_2) {
    execute(CreateModel_nchw_2,
            is_ignored_nchw_2,
            get_examples_nchw_2());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nchw_2, generated_tests::generate_proposals::CreateModel_nchw_2)

namespace generated_tests::generate_proposals {

void CreateModel_nchw_relaxed_2(Model *model);
bool is_ignored_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_2();

TEST_F(GeneratedTests, generate_proposals_nchw_relaxed_2) {
    execute(CreateModel_nchw_relaxed_2,
            is_ignored_nchw_relaxed_2,
            get_examples_nchw_relaxed_2());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_nchw_quant8_2(Model *model);
bool is_ignored_nchw_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_2();

TEST_F(GeneratedTests, generate_proposals_nchw_quant8_2) {
    execute(CreateModel_nchw_quant8_2,
            is_ignored_nchw_quant8_2,
            get_examples_nchw_quant8_2());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nchw_quant8_2, generated_tests::generate_proposals::CreateModel_nchw_quant8_2)

namespace generated_tests::generate_proposals {

void CreateModel_nchw_float16_2(Model *model);
bool is_ignored_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_2();

TEST_F(GeneratedTests, generate_proposals_nchw_float16_2) {
    execute(CreateModel_nchw_float16_2,
            is_ignored_nchw_float16_2,
            get_examples_nchw_float16_2());
}

} // namespace generated_tests::generate_proposals
TEST_AVAILABLE_SINCE(V1_2, generate_proposals_nchw_float16_2, generated_tests::generate_proposals::CreateModel_nchw_float16_2)

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nhwc_2(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_2();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nhwc_2) {
    execute(CreateModel_dynamic_output_shape_nhwc_2,
            is_ignored_dynamic_output_shape_nhwc_2,
            get_examples_dynamic_output_shape_nhwc_2());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nhwc_relaxed_2(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_2();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nhwc_relaxed_2) {
    execute(CreateModel_dynamic_output_shape_nhwc_relaxed_2,
            is_ignored_dynamic_output_shape_nhwc_relaxed_2,
            get_examples_dynamic_output_shape_nhwc_relaxed_2());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nhwc_quant8_2(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8_2();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nhwc_quant8_2) {
    execute(CreateModel_dynamic_output_shape_nhwc_quant8_2,
            is_ignored_dynamic_output_shape_nhwc_quant8_2,
            get_examples_dynamic_output_shape_nhwc_quant8_2());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nhwc_float16_2(Model *model);
bool is_ignored_dynamic_output_shape_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_2();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nhwc_float16_2) {
    execute(CreateModel_dynamic_output_shape_nhwc_float16_2,
            is_ignored_dynamic_output_shape_nhwc_float16_2,
            get_examples_dynamic_output_shape_nhwc_float16_2());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nchw_2(Model *model);
bool is_ignored_dynamic_output_shape_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_2();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nchw_2) {
    execute(CreateModel_dynamic_output_shape_nchw_2,
            is_ignored_dynamic_output_shape_nchw_2,
            get_examples_dynamic_output_shape_nchw_2());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nchw_relaxed_2(Model *model);
bool is_ignored_dynamic_output_shape_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_2();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nchw_relaxed_2) {
    execute(CreateModel_dynamic_output_shape_nchw_relaxed_2,
            is_ignored_dynamic_output_shape_nchw_relaxed_2,
            get_examples_dynamic_output_shape_nchw_relaxed_2());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nchw_quant8_2(Model *model);
bool is_ignored_dynamic_output_shape_nchw_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8_2();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nchw_quant8_2) {
    execute(CreateModel_dynamic_output_shape_nchw_quant8_2,
            is_ignored_dynamic_output_shape_nchw_quant8_2,
            get_examples_dynamic_output_shape_nchw_quant8_2());
}

} // namespace generated_tests::generate_proposals

namespace generated_tests::generate_proposals {

void CreateModel_dynamic_output_shape_nchw_float16_2(Model *model);
bool is_ignored_dynamic_output_shape_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_2();

TEST_F(DynamicOutputShapeTest, generate_proposals_dynamic_output_shape_nchw_float16_2) {
    execute(CreateModel_dynamic_output_shape_nchw_float16_2,
            is_ignored_dynamic_output_shape_nchw_float16_2,
            get_examples_dynamic_output_shape_nchw_float16_2());
}

} // namespace generated_tests::generate_proposals

