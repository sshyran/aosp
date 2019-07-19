// Generated from add_quant8.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::add_quant8 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::add_quant8

namespace android::hardware::neuralnetworks::V1_1::generated_tests::add_quant8 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, add_quant8) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::add_quant8::get_examples());
}

TEST_F(ValidationTest, add_quant8) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::add_quant8::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::add_quant8

