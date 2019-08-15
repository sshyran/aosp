// Generated from sub_broadcast_float_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::sub_broadcast_float_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::sub_broadcast_float_relaxed

namespace android::hardware::neuralnetworks::V1_1::generated_tests::sub_broadcast_float_relaxed {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, sub_broadcast_float_relaxed) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::sub_broadcast_float_relaxed::get_examples());
}

TEST_F(ValidationTest, sub_broadcast_float_relaxed) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_broadcast_float_relaxed::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::sub_broadcast_float_relaxed

