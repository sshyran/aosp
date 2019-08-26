// Generated from depth_to_space_quant8_1.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::depth_to_space_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::depth_to_space_quant8_1

namespace android::hardware::neuralnetworks::V1_1::generated_tests::depth_to_space_quant8_1 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, depth_to_space_quant8_1) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::depth_to_space_quant8_1::get_examples());
}

TEST_F(ValidationTest, depth_to_space_quant8_1) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::depth_to_space_quant8_1::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::depth_to_space_quant8_1

