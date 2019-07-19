// Generated from conv_1_h3_w2_SAME.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::conv_1_h3_w2_SAME {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::conv_1_h3_w2_SAME

namespace android::hardware::neuralnetworks::V1_1::generated_tests::conv_1_h3_w2_SAME {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, conv_1_h3_w2_SAME) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::conv_1_h3_w2_SAME::get_examples());
}

TEST_F(ValidationTest, conv_1_h3_w2_SAME) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_1_h3_w2_SAME::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::conv_1_h3_w2_SAME

namespace generated_tests::conv_1_h3_w2_SAME {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::conv_1_h3_w2_SAME

namespace android::hardware::neuralnetworks::V1_1::generated_tests::conv_1_h3_w2_SAME {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, conv_1_h3_w2_SAME_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::conv_1_h3_w2_SAME::get_examples_2());
}

TEST_F(ValidationTest, conv_1_h3_w2_SAME_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::conv_1_h3_w2_SAME::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::conv_1_h3_w2_SAME

