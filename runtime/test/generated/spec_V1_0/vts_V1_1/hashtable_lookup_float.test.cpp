// Generated from hashtable_lookup_float.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::hashtable_lookup_float {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::hashtable_lookup_float

namespace android::hardware::neuralnetworks::V1_1::generated_tests::hashtable_lookup_float {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, hashtable_lookup_float) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::hashtable_lookup_float::get_examples());
}

TEST_F(ValidationTest, hashtable_lookup_float) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::hashtable_lookup_float::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::hashtable_lookup_float

