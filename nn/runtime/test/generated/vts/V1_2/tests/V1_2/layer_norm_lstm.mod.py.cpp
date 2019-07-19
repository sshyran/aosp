// Generated from layer_norm_lstm.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm());
}

TEST_F(ValidationTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_2();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_2());
}

TEST_F(ValidationTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_3();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_3) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_3());
}

TEST_F(ValidationTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_3) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, layer_norm_lstm_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_NoCifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm());
}

TEST_F(ValidationTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_2();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_5();
bool is_ignored_5(int);

TEST_F(NeuralnetworksHidlTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_2) {
  Execute(device,
          createTestModel_5,
          is_ignored_5,
          ::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_2());
}

TEST_F(ValidationTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_2) {
  const Model model = createTestModel_5();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_dynamic_output_shape_5();
bool is_ignored_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_5,
          is_ignored_dynamic_output_shape_5,
          ::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_3();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_6();
bool is_ignored_6(int);

TEST_F(NeuralnetworksHidlTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_3) {
  Execute(device,
          createTestModel_6,
          is_ignored_6,
          ::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_3());
}

TEST_F(ValidationTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_3) {
  const Model model = createTestModel_6();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

namespace generated_tests::layer_norm_lstm {

std::vector<::test_helper::MixedTypedExample>& get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3();

} // namespace generated_tests::layer_norm_lstm

namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm {

Model createTestModel_dynamic_output_shape_6();
bool is_ignored_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_6,
          is_ignored_dynamic_output_shape_6,
          ::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, layer_norm_lstm_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3) {
  const Model model = createTestModel_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::layer_norm_lstm::get_examples_CifgPeepholeProjectionNoClippingLayerNormLstm_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::layer_norm_lstm

