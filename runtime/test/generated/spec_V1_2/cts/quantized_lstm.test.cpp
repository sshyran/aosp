// Generated from quantized_lstm.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::quantized_lstm {

void CreateModel(Model *model);
bool is_ignored(int);
std::vector<::test_helper::MixedTypedExample>& get_examples();

TEST_F(GeneratedTests, quantized_lstm) {
    execute(CreateModel,
            is_ignored,
            get_examples());
}

} // namespace generated_tests::quantized_lstm
TEST_AVAILABLE_SINCE(V1_2, quantized_lstm, generated_tests::quantized_lstm::CreateModel)

namespace generated_tests::quantized_lstm {

void CreateModel_dynamic_output_shape(Model *model);
bool is_ignored_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape,
            is_ignored_dynamic_output_shape,
            get_examples_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_all_inputs_as_internal(Model *model);
bool is_ignored_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

TEST_F(GeneratedTests, quantized_lstm_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal,
            is_ignored_all_inputs_as_internal,
            get_examples_all_inputs_as_internal());
}

} // namespace generated_tests::quantized_lstm
TEST_AVAILABLE_SINCE(V1_2, quantized_lstm_all_inputs_as_internal, generated_tests::quantized_lstm::CreateModel_all_inputs_as_internal)

namespace generated_tests::quantized_lstm {

void CreateModel_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_inputs_as_internal_dynamic_output_shape,
            get_examples_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed(Model *model);
bool is_ignored_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

TEST_F(GeneratedTests, quantized_lstm_relaxed) {
    execute(CreateModel_relaxed,
            is_ignored_relaxed,
            get_examples_relaxed());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_relaxed_dynamic_output_shape) {
    execute(CreateModel_relaxed_dynamic_output_shape,
            is_ignored_relaxed_dynamic_output_shape,
            get_examples_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, quantized_lstm_relaxed_all_inputs_as_internal) {
    execute(CreateModel_relaxed_all_inputs_as_internal,
            is_ignored_relaxed_all_inputs_as_internal,
            get_examples_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_2(Model *model);
bool is_ignored_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights();

TEST_F(GeneratedTests, quantized_lstm_constant_weights) {
    execute(CreateModel_2,
            is_ignored_2,
            get_examples_constant_weights());
}

} // namespace generated_tests::quantized_lstm
TEST_AVAILABLE_SINCE(V1_2, quantized_lstm_constant_weights, generated_tests::quantized_lstm::CreateModel_2)

namespace generated_tests::quantized_lstm {

void CreateModel_dynamic_output_shape_2(Model *model);
bool is_ignored_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_dynamic_output_shape) {
    execute(CreateModel_dynamic_output_shape_2,
            is_ignored_dynamic_output_shape_2,
            get_examples_constant_weights_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_all_inputs_as_internal_2(Model *model);
bool is_ignored_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_inputs_as_internal();

TEST_F(GeneratedTests, quantized_lstm_constant_weights_all_inputs_as_internal) {
    execute(CreateModel_all_inputs_as_internal_2,
            is_ignored_all_inputs_as_internal_2,
            get_examples_constant_weights_all_inputs_as_internal());
}

} // namespace generated_tests::quantized_lstm
TEST_AVAILABLE_SINCE(V1_2, quantized_lstm_constant_weights_all_inputs_as_internal, generated_tests::quantized_lstm::CreateModel_all_inputs_as_internal_2)

namespace generated_tests::quantized_lstm {

void CreateModel_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_constant_weights_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_all_tensors_as_inputs(Model *model);
bool is_ignored_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_tensors_as_inputs();

TEST_F(GeneratedTests, quantized_lstm_constant_weights_all_tensors_as_inputs) {
    execute(CreateModel_all_tensors_as_inputs,
            is_ignored_all_tensors_as_inputs,
            get_examples_constant_weights_all_tensors_as_inputs());
}

} // namespace generated_tests::quantized_lstm
TEST_AVAILABLE_SINCE(V1_2, quantized_lstm_constant_weights_all_tensors_as_inputs, generated_tests::quantized_lstm::CreateModel_all_tensors_as_inputs)

namespace generated_tests::quantized_lstm {

void CreateModel_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_constant_weights_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::quantized_lstm
TEST_AVAILABLE_SINCE(V1_2, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::quantized_lstm::CreateModel_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::quantized_lstm {

void CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_constant_weights_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_2(Model *model);
bool is_ignored_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed();

TEST_F(GeneratedTests, quantized_lstm_constant_weights_relaxed) {
    execute(CreateModel_relaxed_2,
            is_ignored_relaxed_2,
            get_examples_constant_weights_relaxed());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_dynamic_output_shape) {
    execute(CreateModel_relaxed_dynamic_output_shape_2,
            is_ignored_relaxed_dynamic_output_shape_2,
            get_examples_constant_weights_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, quantized_lstm_constant_weights_relaxed_all_inputs_as_internal) {
    execute(CreateModel_relaxed_all_inputs_as_internal_2,
            is_ignored_relaxed_all_inputs_as_internal_2,
            get_examples_constant_weights_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_constant_weights_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_relaxed_all_tensors_as_inputs,
            is_ignored_relaxed_all_tensors_as_inputs,
            get_examples_constant_weights_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_constant_weights_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::quantized_lstm

namespace generated_tests::quantized_lstm {

void CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, quantized_lstm_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_constant_weights_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::quantized_lstm

