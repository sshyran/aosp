// Generated from conv_3_h3_w2_VALID.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::conv_3_h3_w2_VALID {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::conv_3_h3_w2_VALID

namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_3_h3_w2_VALID {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, conv_3_h3_w2_VALID) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::conv_3_h3_w2_VALID::get_examples());
}

TEST_F(ValidationTest, conv_3_h3_w2_VALID) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_3_h3_w2_VALID::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_3_h3_w2_VALID

namespace generated_tests::conv_3_h3_w2_VALID {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::conv_3_h3_w2_VALID

namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_3_h3_w2_VALID {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, conv_3_h3_w2_VALID_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::conv_3_h3_w2_VALID::get_examples_2());
}

TEST_F(ValidationTest, conv_3_h3_w2_VALID_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_3_h3_w2_VALID::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::conv_3_h3_w2_VALID

