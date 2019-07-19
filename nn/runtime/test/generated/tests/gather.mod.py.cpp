// Generated from gather.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::gather {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, gather) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather, generated_tests::gather::CreateModel)

namespace generated_tests::gather {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

TEST_F(GeneratedTests, gather_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_relaxed());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_quant8(Model *model);
bool is_ignored_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

TEST_F(GeneratedTests, gather_quant8) {
    execute(CreateModel_quant8,
            is_ignored_quant8,
            get_examples_quant8());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_quant8, generated_tests::gather::CreateModel_quant8)

namespace generated_tests::gather {

void CreateModel_int32(Model *model);
bool is_ignored_int32(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_int32();

TEST_F(GeneratedTests, gather_int32) {
    execute(CreateModel_int32,
            is_ignored_int32,
            get_examples_int32());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_int32, generated_tests::gather::CreateModel_int32)

namespace generated_tests::gather {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

TEST_F(GeneratedTests, gather_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_float16());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_float16, generated_tests::gather::CreateModel_float16)

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_relaxed(Model *model);
bool is_ignored_dynamic_output_shape_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed) {
    execute(CreateModel_dynamic_output_shape_relaxed,
            is_ignored_dynamic_output_shape_relaxed,
            get_examples_dynamic_output_shape_relaxed());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_quant8(Model *model);
bool is_ignored_dynamic_output_shape_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8) {
    execute(CreateModel_dynamic_output_shape_quant8,
            is_ignored_dynamic_output_shape_quant8,
            get_examples_dynamic_output_shape_quant8());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_int32(Model *model);
bool is_ignored_dynamic_output_shape_int32(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32) {
    execute(CreateModel_dynamic_output_shape_int32,
            is_ignored_dynamic_output_shape_int32,
            get_examples_dynamic_output_shape_int32());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_float16(Model *model);
bool is_ignored_dynamic_output_shape_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16) {
    execute(CreateModel_dynamic_output_shape_float16,
            is_ignored_dynamic_output_shape_float16,
            get_examples_dynamic_output_shape_float16());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_2(Model *model);
bool is_ignored_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_2();

TEST_F(GeneratedTests, gather_2) {
    execute(CreateModel_2,
            is_ignored_2,
            get_examples_2());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_2, generated_tests::gather::CreateModel_2)

namespace generated_tests::gather {

void CreateModel_relaxed_2(Model *model);
bool is_ignored_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

TEST_F(GeneratedTests, gather_relaxed_2) {
    execute(CreateModel_relaxed_2,
            is_ignored_relaxed_2,
            get_examples_relaxed_2());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_quant8_2(Model *model);
bool is_ignored_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

TEST_F(GeneratedTests, gather_quant8_2) {
    execute(CreateModel_quant8_2,
            is_ignored_quant8_2,
            get_examples_quant8_2());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_quant8_2, generated_tests::gather::CreateModel_quant8_2)

namespace generated_tests::gather {

void CreateModel_int32_2(Model *model);
bool is_ignored_int32_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_int32_2();

TEST_F(GeneratedTests, gather_int32_2) {
    execute(CreateModel_int32_2,
            is_ignored_int32_2,
            get_examples_int32_2());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_int32_2, generated_tests::gather::CreateModel_int32_2)

namespace generated_tests::gather {

void CreateModel_float16_2(Model *model);
bool is_ignored_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

TEST_F(GeneratedTests, gather_float16_2) {
    execute(CreateModel_float16_2,
            is_ignored_float16_2,
            get_examples_float16_2());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_float16_2, generated_tests::gather::CreateModel_float16_2)

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_2(Model *model);
bool is_ignored_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_2) {
    execute(CreateModel_dynamic_output_shape_2,
            is_ignored_dynamic_output_shape_2,
            get_examples_dynamic_output_shape_2());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_relaxed_2(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_2();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_2) {
    execute(CreateModel_dynamic_output_shape_relaxed_2,
            is_ignored_dynamic_output_shape_relaxed_2,
            get_examples_dynamic_output_shape_relaxed_2());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_quant8_2(Model *model);
bool is_ignored_dynamic_output_shape_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_2();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_2) {
    execute(CreateModel_dynamic_output_shape_quant8_2,
            is_ignored_dynamic_output_shape_quant8_2,
            get_examples_dynamic_output_shape_quant8_2());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_int32_2(Model *model);
bool is_ignored_dynamic_output_shape_int32_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_2();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_2) {
    execute(CreateModel_dynamic_output_shape_int32_2,
            is_ignored_dynamic_output_shape_int32_2,
            get_examples_dynamic_output_shape_int32_2());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_float16_2(Model *model);
bool is_ignored_dynamic_output_shape_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_2();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_2) {
    execute(CreateModel_dynamic_output_shape_float16_2,
            is_ignored_dynamic_output_shape_float16_2,
            get_examples_dynamic_output_shape_float16_2());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_3(Model *model);
bool is_ignored_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3();

TEST_F(GeneratedTests, gather_3) {
    execute(CreateModel_3,
            is_ignored_3,
            get_examples_3());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_3, generated_tests::gather::CreateModel_3)

namespace generated_tests::gather {

void CreateModel_relaxed_3(Model *model);
bool is_ignored_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_3();

TEST_F(GeneratedTests, gather_relaxed_3) {
    execute(CreateModel_relaxed_3,
            is_ignored_relaxed_3,
            get_examples_relaxed_3());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_quant8_3(Model *model);
bool is_ignored_quant8_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_3();

TEST_F(GeneratedTests, gather_quant8_3) {
    execute(CreateModel_quant8_3,
            is_ignored_quant8_3,
            get_examples_quant8_3());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_quant8_3, generated_tests::gather::CreateModel_quant8_3)

namespace generated_tests::gather {

void CreateModel_int32_3(Model *model);
bool is_ignored_int32_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_int32_3();

TEST_F(GeneratedTests, gather_int32_3) {
    execute(CreateModel_int32_3,
            is_ignored_int32_3,
            get_examples_int32_3());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_int32_3, generated_tests::gather::CreateModel_int32_3)

namespace generated_tests::gather {

void CreateModel_float16_3(Model *model);
bool is_ignored_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_3();

TEST_F(GeneratedTests, gather_float16_3) {
    execute(CreateModel_float16_3,
            is_ignored_float16_3,
            get_examples_float16_3());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_float16_3, generated_tests::gather::CreateModel_float16_3)

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_3(Model *model);
bool is_ignored_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_3();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_3) {
    execute(CreateModel_dynamic_output_shape_3,
            is_ignored_dynamic_output_shape_3,
            get_examples_dynamic_output_shape_3());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_relaxed_3(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_3();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_3) {
    execute(CreateModel_dynamic_output_shape_relaxed_3,
            is_ignored_dynamic_output_shape_relaxed_3,
            get_examples_dynamic_output_shape_relaxed_3());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_quant8_3(Model *model);
bool is_ignored_dynamic_output_shape_quant8_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_3();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_3) {
    execute(CreateModel_dynamic_output_shape_quant8_3,
            is_ignored_dynamic_output_shape_quant8_3,
            get_examples_dynamic_output_shape_quant8_3());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_int32_3(Model *model);
bool is_ignored_dynamic_output_shape_int32_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_3();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_3) {
    execute(CreateModel_dynamic_output_shape_int32_3,
            is_ignored_dynamic_output_shape_int32_3,
            get_examples_dynamic_output_shape_int32_3());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_float16_3(Model *model);
bool is_ignored_dynamic_output_shape_float16_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_3();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_3) {
    execute(CreateModel_dynamic_output_shape_float16_3,
            is_ignored_dynamic_output_shape_float16_3,
            get_examples_dynamic_output_shape_float16_3());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_4(Model *model);
bool is_ignored_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_4();

TEST_F(GeneratedTests, gather_4) {
    execute(CreateModel_4,
            is_ignored_4,
            get_examples_4());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_4, generated_tests::gather::CreateModel_4)

namespace generated_tests::gather {

void CreateModel_relaxed_4(Model *model);
bool is_ignored_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_4();

TEST_F(GeneratedTests, gather_relaxed_4) {
    execute(CreateModel_relaxed_4,
            is_ignored_relaxed_4,
            get_examples_relaxed_4());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_quant8_4(Model *model);
bool is_ignored_quant8_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_4();

TEST_F(GeneratedTests, gather_quant8_4) {
    execute(CreateModel_quant8_4,
            is_ignored_quant8_4,
            get_examples_quant8_4());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_quant8_4, generated_tests::gather::CreateModel_quant8_4)

namespace generated_tests::gather {

void CreateModel_int32_4(Model *model);
bool is_ignored_int32_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_int32_4();

TEST_F(GeneratedTests, gather_int32_4) {
    execute(CreateModel_int32_4,
            is_ignored_int32_4,
            get_examples_int32_4());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_int32_4, generated_tests::gather::CreateModel_int32_4)

namespace generated_tests::gather {

void CreateModel_float16_4(Model *model);
bool is_ignored_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_4();

TEST_F(GeneratedTests, gather_float16_4) {
    execute(CreateModel_float16_4,
            is_ignored_float16_4,
            get_examples_float16_4());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_float16_4, generated_tests::gather::CreateModel_float16_4)

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_4(Model *model);
bool is_ignored_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_4();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_4) {
    execute(CreateModel_dynamic_output_shape_4,
            is_ignored_dynamic_output_shape_4,
            get_examples_dynamic_output_shape_4());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_relaxed_4(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_4();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_4) {
    execute(CreateModel_dynamic_output_shape_relaxed_4,
            is_ignored_dynamic_output_shape_relaxed_4,
            get_examples_dynamic_output_shape_relaxed_4());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_quant8_4(Model *model);
bool is_ignored_dynamic_output_shape_quant8_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_4();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_4) {
    execute(CreateModel_dynamic_output_shape_quant8_4,
            is_ignored_dynamic_output_shape_quant8_4,
            get_examples_dynamic_output_shape_quant8_4());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_int32_4(Model *model);
bool is_ignored_dynamic_output_shape_int32_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_4();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_4) {
    execute(CreateModel_dynamic_output_shape_int32_4,
            is_ignored_dynamic_output_shape_int32_4,
            get_examples_dynamic_output_shape_int32_4());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_float16_4(Model *model);
bool is_ignored_dynamic_output_shape_float16_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_4();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_4) {
    execute(CreateModel_dynamic_output_shape_float16_4,
            is_ignored_dynamic_output_shape_float16_4,
            get_examples_dynamic_output_shape_float16_4());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_5(Model *model);
bool is_ignored_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_5();

TEST_F(GeneratedTests, gather_5) {
    execute(CreateModel_5,
            is_ignored_5,
            get_examples_5());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_5, generated_tests::gather::CreateModel_5)

namespace generated_tests::gather {

void CreateModel_relaxed_5(Model *model);
bool is_ignored_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_5();

TEST_F(GeneratedTests, gather_relaxed_5) {
    execute(CreateModel_relaxed_5,
            is_ignored_relaxed_5,
            get_examples_relaxed_5());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_quant8_5(Model *model);
bool is_ignored_quant8_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_5();

TEST_F(GeneratedTests, gather_quant8_5) {
    execute(CreateModel_quant8_5,
            is_ignored_quant8_5,
            get_examples_quant8_5());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_quant8_5, generated_tests::gather::CreateModel_quant8_5)

namespace generated_tests::gather {

void CreateModel_int32_5(Model *model);
bool is_ignored_int32_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_int32_5();

TEST_F(GeneratedTests, gather_int32_5) {
    execute(CreateModel_int32_5,
            is_ignored_int32_5,
            get_examples_int32_5());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_int32_5, generated_tests::gather::CreateModel_int32_5)

namespace generated_tests::gather {

void CreateModel_float16_5(Model *model);
bool is_ignored_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_5();

TEST_F(GeneratedTests, gather_float16_5) {
    execute(CreateModel_float16_5,
            is_ignored_float16_5,
            get_examples_float16_5());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_float16_5, generated_tests::gather::CreateModel_float16_5)

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_5(Model *model);
bool is_ignored_dynamic_output_shape_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_5();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_5) {
    execute(CreateModel_dynamic_output_shape_5,
            is_ignored_dynamic_output_shape_5,
            get_examples_dynamic_output_shape_5());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_relaxed_5(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_5();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_5) {
    execute(CreateModel_dynamic_output_shape_relaxed_5,
            is_ignored_dynamic_output_shape_relaxed_5,
            get_examples_dynamic_output_shape_relaxed_5());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_quant8_5(Model *model);
bool is_ignored_dynamic_output_shape_quant8_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_5();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_5) {
    execute(CreateModel_dynamic_output_shape_quant8_5,
            is_ignored_dynamic_output_shape_quant8_5,
            get_examples_dynamic_output_shape_quant8_5());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_int32_5(Model *model);
bool is_ignored_dynamic_output_shape_int32_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_5();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_5) {
    execute(CreateModel_dynamic_output_shape_int32_5,
            is_ignored_dynamic_output_shape_int32_5,
            get_examples_dynamic_output_shape_int32_5());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_float16_5(Model *model);
bool is_ignored_dynamic_output_shape_float16_5(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_5();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_5) {
    execute(CreateModel_dynamic_output_shape_float16_5,
            is_ignored_dynamic_output_shape_float16_5,
            get_examples_dynamic_output_shape_float16_5());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_6(Model *model);
bool is_ignored_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_6();

TEST_F(GeneratedTests, gather_6) {
    execute(CreateModel_6,
            is_ignored_6,
            get_examples_6());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_6, generated_tests::gather::CreateModel_6)

namespace generated_tests::gather {

void CreateModel_relaxed_6(Model *model);
bool is_ignored_relaxed_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_6();

TEST_F(GeneratedTests, gather_relaxed_6) {
    execute(CreateModel_relaxed_6,
            is_ignored_relaxed_6,
            get_examples_relaxed_6());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_quant8_6(Model *model);
bool is_ignored_quant8_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_6();

TEST_F(GeneratedTests, gather_quant8_6) {
    execute(CreateModel_quant8_6,
            is_ignored_quant8_6,
            get_examples_quant8_6());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_quant8_6, generated_tests::gather::CreateModel_quant8_6)

namespace generated_tests::gather {

void CreateModel_int32_6(Model *model);
bool is_ignored_int32_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_int32_6();

TEST_F(GeneratedTests, gather_int32_6) {
    execute(CreateModel_int32_6,
            is_ignored_int32_6,
            get_examples_int32_6());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_int32_6, generated_tests::gather::CreateModel_int32_6)

namespace generated_tests::gather {

void CreateModel_float16_6(Model *model);
bool is_ignored_float16_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_6();

TEST_F(GeneratedTests, gather_float16_6) {
    execute(CreateModel_float16_6,
            is_ignored_float16_6,
            get_examples_float16_6());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_float16_6, generated_tests::gather::CreateModel_float16_6)

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_6(Model *model);
bool is_ignored_dynamic_output_shape_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_6();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_6) {
    execute(CreateModel_dynamic_output_shape_6,
            is_ignored_dynamic_output_shape_6,
            get_examples_dynamic_output_shape_6());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_relaxed_6(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_6();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_6) {
    execute(CreateModel_dynamic_output_shape_relaxed_6,
            is_ignored_dynamic_output_shape_relaxed_6,
            get_examples_dynamic_output_shape_relaxed_6());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_quant8_6(Model *model);
bool is_ignored_dynamic_output_shape_quant8_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_6();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_6) {
    execute(CreateModel_dynamic_output_shape_quant8_6,
            is_ignored_dynamic_output_shape_quant8_6,
            get_examples_dynamic_output_shape_quant8_6());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_int32_6(Model *model);
bool is_ignored_dynamic_output_shape_int32_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_6();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_6) {
    execute(CreateModel_dynamic_output_shape_int32_6,
            is_ignored_dynamic_output_shape_int32_6,
            get_examples_dynamic_output_shape_int32_6());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_float16_6(Model *model);
bool is_ignored_dynamic_output_shape_float16_6(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_6();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_6) {
    execute(CreateModel_dynamic_output_shape_float16_6,
            is_ignored_dynamic_output_shape_float16_6,
            get_examples_dynamic_output_shape_float16_6());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_7(Model *model);
bool is_ignored_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_7();

TEST_F(GeneratedTests, gather_7) {
    execute(CreateModel_7,
            is_ignored_7,
            get_examples_7());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_7, generated_tests::gather::CreateModel_7)

namespace generated_tests::gather {

void CreateModel_relaxed_7(Model *model);
bool is_ignored_relaxed_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_7();

TEST_F(GeneratedTests, gather_relaxed_7) {
    execute(CreateModel_relaxed_7,
            is_ignored_relaxed_7,
            get_examples_relaxed_7());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_quant8_7(Model *model);
bool is_ignored_quant8_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_7();

TEST_F(GeneratedTests, gather_quant8_7) {
    execute(CreateModel_quant8_7,
            is_ignored_quant8_7,
            get_examples_quant8_7());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_quant8_7, generated_tests::gather::CreateModel_quant8_7)

namespace generated_tests::gather {

void CreateModel_int32_7(Model *model);
bool is_ignored_int32_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_int32_7();

TEST_F(GeneratedTests, gather_int32_7) {
    execute(CreateModel_int32_7,
            is_ignored_int32_7,
            get_examples_int32_7());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_int32_7, generated_tests::gather::CreateModel_int32_7)

namespace generated_tests::gather {

void CreateModel_float16_7(Model *model);
bool is_ignored_float16_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_7();

TEST_F(GeneratedTests, gather_float16_7) {
    execute(CreateModel_float16_7,
            is_ignored_float16_7,
            get_examples_float16_7());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_float16_7, generated_tests::gather::CreateModel_float16_7)

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_7(Model *model);
bool is_ignored_dynamic_output_shape_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_7();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_7) {
    execute(CreateModel_dynamic_output_shape_7,
            is_ignored_dynamic_output_shape_7,
            get_examples_dynamic_output_shape_7());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_relaxed_7(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_7();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_7) {
    execute(CreateModel_dynamic_output_shape_relaxed_7,
            is_ignored_dynamic_output_shape_relaxed_7,
            get_examples_dynamic_output_shape_relaxed_7());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_quant8_7(Model *model);
bool is_ignored_dynamic_output_shape_quant8_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_7();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_7) {
    execute(CreateModel_dynamic_output_shape_quant8_7,
            is_ignored_dynamic_output_shape_quant8_7,
            get_examples_dynamic_output_shape_quant8_7());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_int32_7(Model *model);
bool is_ignored_dynamic_output_shape_int32_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_7();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_7) {
    execute(CreateModel_dynamic_output_shape_int32_7,
            is_ignored_dynamic_output_shape_int32_7,
            get_examples_dynamic_output_shape_int32_7());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_float16_7(Model *model);
bool is_ignored_dynamic_output_shape_float16_7(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_7();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_7) {
    execute(CreateModel_dynamic_output_shape_float16_7,
            is_ignored_dynamic_output_shape_float16_7,
            get_examples_dynamic_output_shape_float16_7());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_8(Model *model);
bool is_ignored_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_8();

TEST_F(GeneratedTests, gather_8) {
    execute(CreateModel_8,
            is_ignored_8,
            get_examples_8());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_8, generated_tests::gather::CreateModel_8)

namespace generated_tests::gather {

void CreateModel_relaxed_8(Model *model);
bool is_ignored_relaxed_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_8();

TEST_F(GeneratedTests, gather_relaxed_8) {
    execute(CreateModel_relaxed_8,
            is_ignored_relaxed_8,
            get_examples_relaxed_8());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_quant8_8(Model *model);
bool is_ignored_quant8_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_8();

TEST_F(GeneratedTests, gather_quant8_8) {
    execute(CreateModel_quant8_8,
            is_ignored_quant8_8,
            get_examples_quant8_8());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_quant8_8, generated_tests::gather::CreateModel_quant8_8)

namespace generated_tests::gather {

void CreateModel_int32_8(Model *model);
bool is_ignored_int32_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_int32_8();

TEST_F(GeneratedTests, gather_int32_8) {
    execute(CreateModel_int32_8,
            is_ignored_int32_8,
            get_examples_int32_8());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_int32_8, generated_tests::gather::CreateModel_int32_8)

namespace generated_tests::gather {

void CreateModel_float16_8(Model *model);
bool is_ignored_float16_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_8();

TEST_F(GeneratedTests, gather_float16_8) {
    execute(CreateModel_float16_8,
            is_ignored_float16_8,
            get_examples_float16_8());
}

} // namespace generated_tests::gather
TEST_AVAILABLE_SINCE(V1_2, gather_float16_8, generated_tests::gather::CreateModel_float16_8)

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_8(Model *model);
bool is_ignored_dynamic_output_shape_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_8();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_8) {
    execute(CreateModel_dynamic_output_shape_8,
            is_ignored_dynamic_output_shape_8,
            get_examples_dynamic_output_shape_8());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_relaxed_8(Model *model);
bool is_ignored_dynamic_output_shape_relaxed_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_8();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_8) {
    execute(CreateModel_dynamic_output_shape_relaxed_8,
            is_ignored_dynamic_output_shape_relaxed_8,
            get_examples_dynamic_output_shape_relaxed_8());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_quant8_8(Model *model);
bool is_ignored_dynamic_output_shape_quant8_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_8();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_8) {
    execute(CreateModel_dynamic_output_shape_quant8_8,
            is_ignored_dynamic_output_shape_quant8_8,
            get_examples_dynamic_output_shape_quant8_8());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_int32_8(Model *model);
bool is_ignored_dynamic_output_shape_int32_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_8();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_8) {
    execute(CreateModel_dynamic_output_shape_int32_8,
            is_ignored_dynamic_output_shape_int32_8,
            get_examples_dynamic_output_shape_int32_8());
}

} // namespace generated_tests::gather

namespace generated_tests::gather {

void CreateModel_dynamic_output_shape_float16_8(Model *model);
bool is_ignored_dynamic_output_shape_float16_8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_8();

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_8) {
    execute(CreateModel_dynamic_output_shape_float16_8,
            is_ignored_dynamic_output_shape_float16_8,
            get_examples_dynamic_output_shape_float16_8());
}

} // namespace generated_tests::gather

