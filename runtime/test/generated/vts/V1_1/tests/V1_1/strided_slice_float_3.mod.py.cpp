// Generated from strided_slice_float_3.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::strided_slice_float_3 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::strided_slice_float_3

namespace android::hardware::neuralnetworks::V1_1::generated_tests::strided_slice_float_3 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, strided_slice_float_3) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::strided_slice_float_3::get_examples());
}

TEST_F(ValidationTest, strided_slice_float_3) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::strided_slice_float_3::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::strided_slice_float_3

