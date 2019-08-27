// Generated from prelu.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::prelu {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, prelu) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu, generated_tests::prelu::CreateModel)

namespace generated_tests::prelu {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, prelu_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_all_inputs_as_internal, generated_tests::prelu::CreateModel_all_inputs_as_internal)

namespace generated_tests::prelu {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_all_tensors_as_inputs(Model *model);
bool is_ignored_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

TEST_F(GeneratedTests, prelu_all_tensors_as_inputs) {
    execute(CreateModel_all_tensors_as_inputs,
            is_ignored_all_tensors_as_inputs,
            get_examples_all_tensors_as_inputs());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_all_tensors_as_inputs, generated_tests::prelu::CreateModel_all_tensors_as_inputs)

namespace generated_tests::prelu {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, prelu_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::prelu::CreateModel_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::prelu {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

TEST_F(GeneratedTests, prelu_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_relaxed());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_relaxed_dynamic_output_shape) {
    execute(CreateModel_relaxed_dynamic_output_shape,
            is_ignored_relaxed_dynamic_output_shape,
            get_examples_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, prelu_relaxed_all_inputs_as_internal) {
    execute(CreateModel_relaxed_all_inputs_as_internal,
            is_ignored_relaxed_all_inputs_as_internal,
            get_examples_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, prelu_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_relaxed_all_tensors_as_inputs,
            is_ignored_relaxed_all_tensors_as_inputs,
            get_examples_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, prelu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8(Model *model);
bool is_ignored_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

TEST_F(GeneratedTests, prelu_quant8) {
    execute(CreateModel_quant8,
            is_ignored_quant8,
            get_examples_quant8());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8, generated_tests::prelu::CreateModel_quant8)

namespace generated_tests::prelu {

void CreateModel_quant8_dynamic_output_shape(Model *model);
bool is_ignored_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_quant8_dynamic_output_shape) {
    execute(CreateModel_quant8_dynamic_output_shape,
            is_ignored_quant8_dynamic_output_shape,
            get_examples_quant8_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, prelu_quant8_all_inputs_as_internal) {
    execute(CreateModel_quant8_all_inputs_as_internal,
            is_ignored_quant8_all_inputs_as_internal,
            get_examples_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_inputs_as_internal, generated_tests::prelu::CreateModel_quant8_all_inputs_as_internal)

namespace generated_tests::prelu {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, prelu_quant8_all_tensors_as_inputs) {
    execute(CreateModel_quant8_all_tensors_as_inputs,
            is_ignored_quant8_all_tensors_as_inputs,
            get_examples_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_tensors_as_inputs, generated_tests::prelu::CreateModel_quant8_all_tensors_as_inputs)

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::prelu::CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_2(Model *model);
bool is_ignored_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

TEST_F(GeneratedTests, prelu_quant8_2) {
    execute(CreateModel_quant8_2,
            is_ignored_quant8_2,
            get_examples_quant8_2());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_2, generated_tests::prelu::CreateModel_quant8_2)

namespace generated_tests::prelu {

void CreateModel_quant8_dynamic_output_shape_2(Model *model);
bool is_ignored_quant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, prelu_quant8_dynamic_output_shape_2) {
    execute(CreateModel_quant8_dynamic_output_shape_2,
            is_ignored_quant8_dynamic_output_shape_2,
            get_examples_quant8_dynamic_output_shape_2());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_inputs_as_internal_2(Model *model);
bool is_ignored_quant8_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_2();

TEST_F(GeneratedTests, prelu_quant8_all_inputs_as_internal_2) {
    execute(CreateModel_quant8_all_inputs_as_internal_2,
            is_ignored_quant8_all_inputs_as_internal_2,
            get_examples_quant8_all_inputs_as_internal_2());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_inputs_as_internal_2, generated_tests::prelu::CreateModel_quant8_all_inputs_as_internal_2)

namespace generated_tests::prelu {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_2(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, prelu_quant8_all_tensors_as_inputs_2) {
    execute(CreateModel_quant8_all_tensors_as_inputs_2,
            is_ignored_quant8_all_tensors_as_inputs_2,
            get_examples_quant8_all_tensors_as_inputs_2());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_tensors_as_inputs_2, generated_tests::prelu::CreateModel_quant8_all_tensors_as_inputs_2)

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::prelu::CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_3(Model *model);
bool is_ignored_quant8_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_3();

TEST_F(GeneratedTests, prelu_quant8_3) {
    execute(CreateModel_quant8_3,
            is_ignored_quant8_3,
            get_examples_quant8_3());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_3, generated_tests::prelu::CreateModel_quant8_3)

namespace generated_tests::prelu {

void CreateModel_quant8_dynamic_output_shape_3(Model *model);
bool is_ignored_quant8_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_3();

TEST_F(DynamicOutputShapeTest, prelu_quant8_dynamic_output_shape_3) {
    execute(CreateModel_quant8_dynamic_output_shape_3,
            is_ignored_quant8_dynamic_output_shape_3,
            get_examples_quant8_dynamic_output_shape_3());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_inputs_as_internal_3(Model *model);
bool is_ignored_quant8_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_3();

TEST_F(GeneratedTests, prelu_quant8_all_inputs_as_internal_3) {
    execute(CreateModel_quant8_all_inputs_as_internal_3,
            is_ignored_quant8_all_inputs_as_internal_3,
            get_examples_quant8_all_inputs_as_internal_3());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_inputs_as_internal_3, generated_tests::prelu::CreateModel_quant8_all_inputs_as_internal_3)

namespace generated_tests::prelu {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_3();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
    execute(CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_3());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_3(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_3();

TEST_F(GeneratedTests, prelu_quant8_all_tensors_as_inputs_3) {
    execute(CreateModel_quant8_all_tensors_as_inputs_3,
            is_ignored_quant8_all_tensors_as_inputs_3,
            get_examples_quant8_all_tensors_as_inputs_3());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_tensors_as_inputs_3, generated_tests::prelu::CreateModel_quant8_all_tensors_as_inputs_3)

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape_3(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_3();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape_3) {
    execute(CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape_3,
            is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_3,
            get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_3());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_3();

TEST_F(GeneratedTests, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_3,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_3,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_3, generated_tests::prelu::CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_3)

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_4(Model *model);
bool is_ignored_quant8_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_4();

TEST_F(GeneratedTests, prelu_quant8_4) {
    execute(CreateModel_quant8_4,
            is_ignored_quant8_4,
            get_examples_quant8_4());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_4, generated_tests::prelu::CreateModel_quant8_4)

namespace generated_tests::prelu {

void CreateModel_quant8_dynamic_output_shape_4(Model *model);
bool is_ignored_quant8_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_4();

TEST_F(DynamicOutputShapeTest, prelu_quant8_dynamic_output_shape_4) {
    execute(CreateModel_quant8_dynamic_output_shape_4,
            is_ignored_quant8_dynamic_output_shape_4,
            get_examples_quant8_dynamic_output_shape_4());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_inputs_as_internal_4(Model *model);
bool is_ignored_quant8_all_inputs_as_internal_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_4();

TEST_F(GeneratedTests, prelu_quant8_all_inputs_as_internal_4) {
    execute(CreateModel_quant8_all_inputs_as_internal_4,
            is_ignored_quant8_all_inputs_as_internal_4,
            get_examples_quant8_all_inputs_as_internal_4());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_inputs_as_internal_4, generated_tests::prelu::CreateModel_quant8_all_inputs_as_internal_4)

namespace generated_tests::prelu {

void CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_4(Model *model);
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_4();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
    execute(CreateModel_quant8_all_inputs_as_internal_dynamic_output_shape_4,
            is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_4,
            get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_4());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_4(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_4();

TEST_F(GeneratedTests, prelu_quant8_all_tensors_as_inputs_4) {
    execute(CreateModel_quant8_all_tensors_as_inputs_4,
            is_ignored_quant8_all_tensors_as_inputs_4,
            get_examples_quant8_all_tensors_as_inputs_4());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_tensors_as_inputs_4, generated_tests::prelu::CreateModel_quant8_all_tensors_as_inputs_4)

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape_4(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_4();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape_4) {
    execute(CreateModel_quant8_all_tensors_as_inputs_dynamic_output_shape_4,
            is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_4,
            get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_4());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_4();

TEST_F(GeneratedTests, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_4,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_4,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_4, generated_tests::prelu::CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_4)

namespace generated_tests::prelu {

void CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(Model *model);
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4();

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4) {
    execute(CreateModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4,
            is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4,
            get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_float16(Model *model);
bool is_ignored_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

TEST_F(GeneratedTests, prelu_float16) {
    execute(CreateModel_float16,
            is_ignored_float16,
            get_examples_float16());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_float16, generated_tests::prelu::CreateModel_float16)

namespace generated_tests::prelu {

void CreateModel_float16_dynamic_output_shape(Model *model);
bool is_ignored_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_float16_dynamic_output_shape) {
    execute(CreateModel_float16_dynamic_output_shape,
            is_ignored_float16_dynamic_output_shape,
            get_examples_float16_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_float16_all_inputs_as_internal(Model *model);
bool is_ignored_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, prelu_float16_all_inputs_as_internal) {
    execute(CreateModel_float16_all_inputs_as_internal,
            is_ignored_float16_all_inputs_as_internal,
            get_examples_float16_all_inputs_as_internal());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_float16_all_inputs_as_internal, generated_tests::prelu::CreateModel_float16_all_inputs_as_internal)

namespace generated_tests::prelu {

void CreateModel_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, prelu_float16_all_tensors_as_inputs) {
    execute(CreateModel_float16_all_tensors_as_inputs,
            is_ignored_float16_all_tensors_as_inputs,
            get_examples_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_float16_all_tensors_as_inputs, generated_tests::prelu::CreateModel_float16_all_tensors_as_inputs)

namespace generated_tests::prelu {

void CreateModel_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::prelu

namespace generated_tests::prelu {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::prelu
TEST_AVAILABLE_SINCE(V1_2, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::prelu::CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::prelu {

void CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::prelu

