// Generated from channel_shuffle.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim4_axis0();
bool is_ignored_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim4_axis0) {
  Execute(device,
          createTestModel_dim4_axis0,
          is_ignored_dim4_axis0,
          ::generated_tests::channel_shuffle::get_examples_dim4_axis0());
}

TEST_F(ValidationTest, channel_shuffle_dim4_axis0) {
  const Model model = createTestModel_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim4_axis0_neg();
bool is_ignored_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim4_axis0_neg) {
  Execute(device,
          createTestModel_dim4_axis0_neg,
          is_ignored_dim4_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dim4_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim4_axis0_neg) {
  const Model model = createTestModel_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim4_axis1();
bool is_ignored_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim4_axis1) {
  Execute(device,
          createTestModel_dim4_axis1,
          is_ignored_dim4_axis1,
          ::generated_tests::channel_shuffle::get_examples_dim4_axis1());
}

TEST_F(ValidationTest, channel_shuffle_dim4_axis1) {
  const Model model = createTestModel_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim4_axis1_neg();
bool is_ignored_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim4_axis1_neg) {
  Execute(device,
          createTestModel_dim4_axis1_neg,
          is_ignored_dim4_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dim4_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim4_axis1_neg) {
  const Model model = createTestModel_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim4_axis2();
bool is_ignored_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim4_axis2) {
  Execute(device,
          createTestModel_dim4_axis2,
          is_ignored_dim4_axis2,
          ::generated_tests::channel_shuffle::get_examples_dim4_axis2());
}

TEST_F(ValidationTest, channel_shuffle_dim4_axis2) {
  const Model model = createTestModel_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim4_axis2_neg();
bool is_ignored_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim4_axis2_neg) {
  Execute(device,
          createTestModel_dim4_axis2_neg,
          is_ignored_dim4_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dim4_axis2_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim4_axis2_neg) {
  const Model model = createTestModel_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim4_axis3();
bool is_ignored_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim4_axis3) {
  Execute(device,
          createTestModel_dim4_axis3,
          is_ignored_dim4_axis3,
          ::generated_tests::channel_shuffle::get_examples_dim4_axis3());
}

TEST_F(ValidationTest, channel_shuffle_dim4_axis3) {
  const Model model = createTestModel_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim4_axis3_neg();
bool is_ignored_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim4_axis3_neg) {
  Execute(device,
          createTestModel_dim4_axis3_neg,
          is_ignored_dim4_axis3_neg,
          ::generated_tests::channel_shuffle::get_examples_dim4_axis3_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim4_axis3_neg) {
  const Model model = createTestModel_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim3_axis0();
bool is_ignored_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim3_axis0) {
  Execute(device,
          createTestModel_dim3_axis0,
          is_ignored_dim3_axis0,
          ::generated_tests::channel_shuffle::get_examples_dim3_axis0());
}

TEST_F(ValidationTest, channel_shuffle_dim3_axis0) {
  const Model model = createTestModel_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim3_axis0_neg();
bool is_ignored_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim3_axis0_neg) {
  Execute(device,
          createTestModel_dim3_axis0_neg,
          is_ignored_dim3_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dim3_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim3_axis0_neg) {
  const Model model = createTestModel_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim3_axis1();
bool is_ignored_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim3_axis1) {
  Execute(device,
          createTestModel_dim3_axis1,
          is_ignored_dim3_axis1,
          ::generated_tests::channel_shuffle::get_examples_dim3_axis1());
}

TEST_F(ValidationTest, channel_shuffle_dim3_axis1) {
  const Model model = createTestModel_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim3_axis1_neg();
bool is_ignored_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim3_axis1_neg) {
  Execute(device,
          createTestModel_dim3_axis1_neg,
          is_ignored_dim3_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dim3_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim3_axis1_neg) {
  const Model model = createTestModel_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim3_axis2();
bool is_ignored_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim3_axis2) {
  Execute(device,
          createTestModel_dim3_axis2,
          is_ignored_dim3_axis2,
          ::generated_tests::channel_shuffle::get_examples_dim3_axis2());
}

TEST_F(ValidationTest, channel_shuffle_dim3_axis2) {
  const Model model = createTestModel_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim3_axis2_neg();
bool is_ignored_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim3_axis2_neg) {
  Execute(device,
          createTestModel_dim3_axis2_neg,
          is_ignored_dim3_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dim3_axis2_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim3_axis2_neg) {
  const Model model = createTestModel_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim2_axis0();
bool is_ignored_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim2_axis0) {
  Execute(device,
          createTestModel_dim2_axis0,
          is_ignored_dim2_axis0,
          ::generated_tests::channel_shuffle::get_examples_dim2_axis0());
}

TEST_F(ValidationTest, channel_shuffle_dim2_axis0) {
  const Model model = createTestModel_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim2_axis0_neg();
bool is_ignored_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim2_axis0_neg) {
  Execute(device,
          createTestModel_dim2_axis0_neg,
          is_ignored_dim2_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dim2_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim2_axis0_neg) {
  const Model model = createTestModel_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim2_axis1();
bool is_ignored_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim2_axis1) {
  Execute(device,
          createTestModel_dim2_axis1,
          is_ignored_dim2_axis1,
          ::generated_tests::channel_shuffle::get_examples_dim2_axis1());
}

TEST_F(ValidationTest, channel_shuffle_dim2_axis1) {
  const Model model = createTestModel_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim2_axis1_neg();
bool is_ignored_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim2_axis1_neg) {
  Execute(device,
          createTestModel_dim2_axis1_neg,
          is_ignored_dim2_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dim2_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim2_axis1_neg) {
  const Model model = createTestModel_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim1_axis0();
bool is_ignored_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim1_axis0) {
  Execute(device,
          createTestModel_dim1_axis0,
          is_ignored_dim1_axis0,
          ::generated_tests::channel_shuffle::get_examples_dim1_axis0());
}

TEST_F(ValidationTest, channel_shuffle_dim1_axis0) {
  const Model model = createTestModel_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dim1_axis0_neg();
bool is_ignored_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_dim1_axis0_neg) {
  Execute(device,
          createTestModel_dim1_axis0_neg,
          is_ignored_dim1_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dim1_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_dim1_axis0_neg) {
  const Model model = createTestModel_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim4_axis0();
bool is_ignored_relaxed_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim4_axis0) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0,
          is_ignored_relaxed_dim4_axis0,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis0());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim4_axis0) {
  const Model model = createTestModel_relaxed_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim4_axis0_neg();
bool is_ignored_relaxed_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim4_axis0_neg) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg,
          is_ignored_relaxed_dim4_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim4_axis0_neg) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim4_axis1();
bool is_ignored_relaxed_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim4_axis1) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1,
          is_ignored_relaxed_dim4_axis1,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis1());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim4_axis1) {
  const Model model = createTestModel_relaxed_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim4_axis1_neg();
bool is_ignored_relaxed_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim4_axis1_neg) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg,
          is_ignored_relaxed_dim4_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim4_axis1_neg) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim4_axis2();
bool is_ignored_relaxed_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim4_axis2) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2,
          is_ignored_relaxed_dim4_axis2,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis2());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim4_axis2) {
  const Model model = createTestModel_relaxed_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim4_axis2_neg();
bool is_ignored_relaxed_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim4_axis2_neg) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg,
          is_ignored_relaxed_dim4_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis2_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim4_axis2_neg) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim4_axis3();
bool is_ignored_relaxed_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim4_axis3) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3,
          is_ignored_relaxed_dim4_axis3,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis3());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim4_axis3) {
  const Model model = createTestModel_relaxed_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim4_axis3_neg();
bool is_ignored_relaxed_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim4_axis3_neg) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg,
          is_ignored_relaxed_dim4_axis3_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis3_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim4_axis3_neg) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim3_axis0();
bool is_ignored_relaxed_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim3_axis0) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0,
          is_ignored_relaxed_dim3_axis0,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis0());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim3_axis0) {
  const Model model = createTestModel_relaxed_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim3_axis0_neg();
bool is_ignored_relaxed_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim3_axis0_neg) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg,
          is_ignored_relaxed_dim3_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim3_axis0_neg) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim3_axis1();
bool is_ignored_relaxed_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim3_axis1) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1,
          is_ignored_relaxed_dim3_axis1,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis1());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim3_axis1) {
  const Model model = createTestModel_relaxed_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim3_axis1_neg();
bool is_ignored_relaxed_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim3_axis1_neg) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg,
          is_ignored_relaxed_dim3_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim3_axis1_neg) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim3_axis2();
bool is_ignored_relaxed_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim3_axis2) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2,
          is_ignored_relaxed_dim3_axis2,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis2());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim3_axis2) {
  const Model model = createTestModel_relaxed_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim3_axis2_neg();
bool is_ignored_relaxed_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim3_axis2_neg) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg,
          is_ignored_relaxed_dim3_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis2_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim3_axis2_neg) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim2_axis0();
bool is_ignored_relaxed_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim2_axis0) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0,
          is_ignored_relaxed_dim2_axis0,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim2_axis0());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim2_axis0) {
  const Model model = createTestModel_relaxed_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim2_axis0_neg();
bool is_ignored_relaxed_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim2_axis0_neg) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg,
          is_ignored_relaxed_dim2_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim2_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim2_axis0_neg) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim2_axis1();
bool is_ignored_relaxed_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim2_axis1) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1,
          is_ignored_relaxed_dim2_axis1,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim2_axis1());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim2_axis1) {
  const Model model = createTestModel_relaxed_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim2_axis1_neg();
bool is_ignored_relaxed_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim2_axis1_neg) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg,
          is_ignored_relaxed_dim2_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim2_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim2_axis1_neg) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim1_axis0();
bool is_ignored_relaxed_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim1_axis0) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0,
          is_ignored_relaxed_dim1_axis0,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim1_axis0());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim1_axis0) {
  const Model model = createTestModel_relaxed_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_relaxed_dim1_axis0_neg();
bool is_ignored_relaxed_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_relaxed_dim1_axis0_neg) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg,
          is_ignored_relaxed_dim1_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_relaxed_dim1_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_relaxed_dim1_axis0_neg) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_relaxed_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim4_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim4_axis0();
bool is_ignored_quant8_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim4_axis0) {
  Execute(device,
          createTestModel_quant8_dim4_axis0,
          is_ignored_quant8_dim4_axis0,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis0());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim4_axis0) {
  const Model model = createTestModel_quant8_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim4_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim4_axis0_neg();
bool is_ignored_quant8_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim4_axis0_neg) {
  Execute(device,
          createTestModel_quant8_dim4_axis0_neg,
          is_ignored_quant8_dim4_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim4_axis0_neg) {
  const Model model = createTestModel_quant8_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim4_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim4_axis1();
bool is_ignored_quant8_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim4_axis1) {
  Execute(device,
          createTestModel_quant8_dim4_axis1,
          is_ignored_quant8_dim4_axis1,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis1());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim4_axis1) {
  const Model model = createTestModel_quant8_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim4_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim4_axis1_neg();
bool is_ignored_quant8_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim4_axis1_neg) {
  Execute(device,
          createTestModel_quant8_dim4_axis1_neg,
          is_ignored_quant8_dim4_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim4_axis1_neg) {
  const Model model = createTestModel_quant8_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim4_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim4_axis2();
bool is_ignored_quant8_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim4_axis2) {
  Execute(device,
          createTestModel_quant8_dim4_axis2,
          is_ignored_quant8_dim4_axis2,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis2());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim4_axis2) {
  const Model model = createTestModel_quant8_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim4_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim4_axis2_neg();
bool is_ignored_quant8_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim4_axis2_neg) {
  Execute(device,
          createTestModel_quant8_dim4_axis2_neg,
          is_ignored_quant8_dim4_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis2_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim4_axis2_neg) {
  const Model model = createTestModel_quant8_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim4_axis3();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim4_axis3();
bool is_ignored_quant8_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim4_axis3) {
  Execute(device,
          createTestModel_quant8_dim4_axis3,
          is_ignored_quant8_dim4_axis3,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis3());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim4_axis3) {
  const Model model = createTestModel_quant8_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim4_axis3_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim4_axis3_neg();
bool is_ignored_quant8_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim4_axis3_neg) {
  Execute(device,
          createTestModel_quant8_dim4_axis3_neg,
          is_ignored_quant8_dim4_axis3_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis3_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim4_axis3_neg) {
  const Model model = createTestModel_quant8_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim3_axis0();
bool is_ignored_quant8_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim3_axis0) {
  Execute(device,
          createTestModel_quant8_dim3_axis0,
          is_ignored_quant8_dim3_axis0,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis0());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim3_axis0) {
  const Model model = createTestModel_quant8_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim3_axis0_neg();
bool is_ignored_quant8_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim3_axis0_neg) {
  Execute(device,
          createTestModel_quant8_dim3_axis0_neg,
          is_ignored_quant8_dim3_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim3_axis0_neg) {
  const Model model = createTestModel_quant8_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim3_axis1();
bool is_ignored_quant8_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim3_axis1) {
  Execute(device,
          createTestModel_quant8_dim3_axis1,
          is_ignored_quant8_dim3_axis1,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis1());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim3_axis1) {
  const Model model = createTestModel_quant8_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim3_axis1_neg();
bool is_ignored_quant8_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim3_axis1_neg) {
  Execute(device,
          createTestModel_quant8_dim3_axis1_neg,
          is_ignored_quant8_dim3_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim3_axis1_neg) {
  const Model model = createTestModel_quant8_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim3_axis2();
bool is_ignored_quant8_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim3_axis2) {
  Execute(device,
          createTestModel_quant8_dim3_axis2,
          is_ignored_quant8_dim3_axis2,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis2());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim3_axis2) {
  const Model model = createTestModel_quant8_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim3_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim3_axis2_neg();
bool is_ignored_quant8_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim3_axis2_neg) {
  Execute(device,
          createTestModel_quant8_dim3_axis2_neg,
          is_ignored_quant8_dim3_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis2_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim3_axis2_neg) {
  const Model model = createTestModel_quant8_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim2_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim2_axis0();
bool is_ignored_quant8_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim2_axis0) {
  Execute(device,
          createTestModel_quant8_dim2_axis0,
          is_ignored_quant8_dim2_axis0,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim2_axis0());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim2_axis0) {
  const Model model = createTestModel_quant8_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim2_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim2_axis0_neg();
bool is_ignored_quant8_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim2_axis0_neg) {
  Execute(device,
          createTestModel_quant8_dim2_axis0_neg,
          is_ignored_quant8_dim2_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim2_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim2_axis0_neg) {
  const Model model = createTestModel_quant8_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim2_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim2_axis1();
bool is_ignored_quant8_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim2_axis1) {
  Execute(device,
          createTestModel_quant8_dim2_axis1,
          is_ignored_quant8_dim2_axis1,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim2_axis1());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim2_axis1) {
  const Model model = createTestModel_quant8_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim2_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim2_axis1_neg();
bool is_ignored_quant8_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim2_axis1_neg) {
  Execute(device,
          createTestModel_quant8_dim2_axis1_neg,
          is_ignored_quant8_dim2_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim2_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim2_axis1_neg) {
  const Model model = createTestModel_quant8_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim1_axis0();
bool is_ignored_quant8_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim1_axis0) {
  Execute(device,
          createTestModel_quant8_dim1_axis0,
          is_ignored_quant8_dim1_axis0,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim1_axis0());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim1_axis0) {
  const Model model = createTestModel_quant8_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dim1_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_quant8_dim1_axis0_neg();
bool is_ignored_quant8_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_quant8_dim1_axis0_neg) {
  Execute(device,
          createTestModel_quant8_dim1_axis0_neg,
          is_ignored_quant8_dim1_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_quant8_dim1_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_quant8_dim1_axis0_neg) {
  const Model model = createTestModel_quant8_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_quant8_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim4_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim4_axis0();
bool is_ignored_float16_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim4_axis0) {
  Execute(device,
          createTestModel_float16_dim4_axis0,
          is_ignored_float16_dim4_axis0,
          ::generated_tests::channel_shuffle::get_examples_float16_dim4_axis0());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim4_axis0) {
  const Model model = createTestModel_float16_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim4_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim4_axis0_neg();
bool is_ignored_float16_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim4_axis0_neg) {
  Execute(device,
          createTestModel_float16_dim4_axis0_neg,
          is_ignored_float16_dim4_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim4_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim4_axis0_neg) {
  const Model model = createTestModel_float16_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim4_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim4_axis1();
bool is_ignored_float16_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim4_axis1) {
  Execute(device,
          createTestModel_float16_dim4_axis1,
          is_ignored_float16_dim4_axis1,
          ::generated_tests::channel_shuffle::get_examples_float16_dim4_axis1());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim4_axis1) {
  const Model model = createTestModel_float16_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim4_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim4_axis1_neg();
bool is_ignored_float16_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim4_axis1_neg) {
  Execute(device,
          createTestModel_float16_dim4_axis1_neg,
          is_ignored_float16_dim4_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim4_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim4_axis1_neg) {
  const Model model = createTestModel_float16_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim4_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim4_axis2();
bool is_ignored_float16_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim4_axis2) {
  Execute(device,
          createTestModel_float16_dim4_axis2,
          is_ignored_float16_dim4_axis2,
          ::generated_tests::channel_shuffle::get_examples_float16_dim4_axis2());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim4_axis2) {
  const Model model = createTestModel_float16_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim4_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim4_axis2_neg();
bool is_ignored_float16_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim4_axis2_neg) {
  Execute(device,
          createTestModel_float16_dim4_axis2_neg,
          is_ignored_float16_dim4_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim4_axis2_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim4_axis2_neg) {
  const Model model = createTestModel_float16_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim4_axis3();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim4_axis3();
bool is_ignored_float16_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim4_axis3) {
  Execute(device,
          createTestModel_float16_dim4_axis3,
          is_ignored_float16_dim4_axis3,
          ::generated_tests::channel_shuffle::get_examples_float16_dim4_axis3());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim4_axis3) {
  const Model model = createTestModel_float16_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim4_axis3_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim4_axis3_neg();
bool is_ignored_float16_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim4_axis3_neg) {
  Execute(device,
          createTestModel_float16_dim4_axis3_neg,
          is_ignored_float16_dim4_axis3_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim4_axis3_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim4_axis3_neg) {
  const Model model = createTestModel_float16_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim3_axis0();
bool is_ignored_float16_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim3_axis0) {
  Execute(device,
          createTestModel_float16_dim3_axis0,
          is_ignored_float16_dim3_axis0,
          ::generated_tests::channel_shuffle::get_examples_float16_dim3_axis0());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim3_axis0) {
  const Model model = createTestModel_float16_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim3_axis0_neg();
bool is_ignored_float16_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim3_axis0_neg) {
  Execute(device,
          createTestModel_float16_dim3_axis0_neg,
          is_ignored_float16_dim3_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim3_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim3_axis0_neg) {
  const Model model = createTestModel_float16_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim3_axis1();
bool is_ignored_float16_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim3_axis1) {
  Execute(device,
          createTestModel_float16_dim3_axis1,
          is_ignored_float16_dim3_axis1,
          ::generated_tests::channel_shuffle::get_examples_float16_dim3_axis1());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim3_axis1) {
  const Model model = createTestModel_float16_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim3_axis1_neg();
bool is_ignored_float16_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim3_axis1_neg) {
  Execute(device,
          createTestModel_float16_dim3_axis1_neg,
          is_ignored_float16_dim3_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim3_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim3_axis1_neg) {
  const Model model = createTestModel_float16_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim3_axis2();
bool is_ignored_float16_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim3_axis2) {
  Execute(device,
          createTestModel_float16_dim3_axis2,
          is_ignored_float16_dim3_axis2,
          ::generated_tests::channel_shuffle::get_examples_float16_dim3_axis2());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim3_axis2) {
  const Model model = createTestModel_float16_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim3_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim3_axis2_neg();
bool is_ignored_float16_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim3_axis2_neg) {
  Execute(device,
          createTestModel_float16_dim3_axis2_neg,
          is_ignored_float16_dim3_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim3_axis2_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim3_axis2_neg) {
  const Model model = createTestModel_float16_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim2_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim2_axis0();
bool is_ignored_float16_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim2_axis0) {
  Execute(device,
          createTestModel_float16_dim2_axis0,
          is_ignored_float16_dim2_axis0,
          ::generated_tests::channel_shuffle::get_examples_float16_dim2_axis0());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim2_axis0) {
  const Model model = createTestModel_float16_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim2_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim2_axis0_neg();
bool is_ignored_float16_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim2_axis0_neg) {
  Execute(device,
          createTestModel_float16_dim2_axis0_neg,
          is_ignored_float16_dim2_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim2_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim2_axis0_neg) {
  const Model model = createTestModel_float16_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim2_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim2_axis1();
bool is_ignored_float16_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim2_axis1) {
  Execute(device,
          createTestModel_float16_dim2_axis1,
          is_ignored_float16_dim2_axis1,
          ::generated_tests::channel_shuffle::get_examples_float16_dim2_axis1());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim2_axis1) {
  const Model model = createTestModel_float16_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim2_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim2_axis1_neg();
bool is_ignored_float16_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim2_axis1_neg) {
  Execute(device,
          createTestModel_float16_dim2_axis1_neg,
          is_ignored_float16_dim2_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim2_axis1_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim2_axis1_neg) {
  const Model model = createTestModel_float16_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim1_axis0();
bool is_ignored_float16_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim1_axis0) {
  Execute(device,
          createTestModel_float16_dim1_axis0,
          is_ignored_float16_dim1_axis0,
          ::generated_tests::channel_shuffle::get_examples_float16_dim1_axis0());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim1_axis0) {
  const Model model = createTestModel_float16_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dim1_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_float16_dim1_axis0_neg();
bool is_ignored_float16_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, channel_shuffle_float16_dim1_axis0_neg) {
  Execute(device,
          createTestModel_float16_dim1_axis0_neg,
          is_ignored_float16_dim1_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_float16_dim1_axis0_neg());
}

TEST_F(ValidationTest, channel_shuffle_float16_dim1_axis0_neg) {
  const Model model = createTestModel_float16_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_float16_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim4_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim4_axis0();
bool is_ignored_dynamic_output_shape_dim4_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim4_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim4_axis0,
          is_ignored_dynamic_output_shape_dim4_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim4_axis0) {
  const Model model = createTestModel_dynamic_output_shape_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim4_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim4_axis0_neg();
bool is_ignored_dynamic_output_shape_dim4_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim4_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim4_axis0_neg,
          is_ignored_dynamic_output_shape_dim4_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim4_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim4_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim4_axis1();
bool is_ignored_dynamic_output_shape_dim4_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim4_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim4_axis1,
          is_ignored_dynamic_output_shape_dim4_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim4_axis1) {
  const Model model = createTestModel_dynamic_output_shape_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim4_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim4_axis1_neg();
bool is_ignored_dynamic_output_shape_dim4_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim4_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim4_axis1_neg,
          is_ignored_dynamic_output_shape_dim4_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim4_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim4_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim4_axis2();
bool is_ignored_dynamic_output_shape_dim4_axis2(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim4_axis2) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim4_axis2,
          is_ignored_dynamic_output_shape_dim4_axis2,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis2(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim4_axis2) {
  const Model model = createTestModel_dynamic_output_shape_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim4_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim4_axis2_neg();
bool is_ignored_dynamic_output_shape_dim4_axis2_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim4_axis2_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim4_axis2_neg,
          is_ignored_dynamic_output_shape_dim4_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis2_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim4_axis2_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim4_axis3();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim4_axis3();
bool is_ignored_dynamic_output_shape_dim4_axis3(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim4_axis3) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim4_axis3,
          is_ignored_dynamic_output_shape_dim4_axis3,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis3(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim4_axis3) {
  const Model model = createTestModel_dynamic_output_shape_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim4_axis3_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim4_axis3_neg();
bool is_ignored_dynamic_output_shape_dim4_axis3_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim4_axis3_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim4_axis3_neg,
          is_ignored_dynamic_output_shape_dim4_axis3_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis3_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim4_axis3_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim3_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim3_axis0();
bool is_ignored_dynamic_output_shape_dim3_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim3_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim3_axis0,
          is_ignored_dynamic_output_shape_dim3_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim3_axis0) {
  const Model model = createTestModel_dynamic_output_shape_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim3_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim3_axis0_neg();
bool is_ignored_dynamic_output_shape_dim3_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim3_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim3_axis0_neg,
          is_ignored_dynamic_output_shape_dim3_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim3_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim3_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim3_axis1();
bool is_ignored_dynamic_output_shape_dim3_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim3_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim3_axis1,
          is_ignored_dynamic_output_shape_dim3_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim3_axis1) {
  const Model model = createTestModel_dynamic_output_shape_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim3_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim3_axis1_neg();
bool is_ignored_dynamic_output_shape_dim3_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim3_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim3_axis1_neg,
          is_ignored_dynamic_output_shape_dim3_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim3_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim3_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim3_axis2();
bool is_ignored_dynamic_output_shape_dim3_axis2(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim3_axis2) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim3_axis2,
          is_ignored_dynamic_output_shape_dim3_axis2,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis2(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim3_axis2) {
  const Model model = createTestModel_dynamic_output_shape_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim3_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim3_axis2_neg();
bool is_ignored_dynamic_output_shape_dim3_axis2_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim3_axis2_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim3_axis2_neg,
          is_ignored_dynamic_output_shape_dim3_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis2_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim3_axis2_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim2_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim2_axis0();
bool is_ignored_dynamic_output_shape_dim2_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim2_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim2_axis0,
          is_ignored_dynamic_output_shape_dim2_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim2_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim2_axis0) {
  const Model model = createTestModel_dynamic_output_shape_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim2_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim2_axis0_neg();
bool is_ignored_dynamic_output_shape_dim2_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim2_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim2_axis0_neg,
          is_ignored_dynamic_output_shape_dim2_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim2_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim2_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim2_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim2_axis1();
bool is_ignored_dynamic_output_shape_dim2_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim2_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim2_axis1,
          is_ignored_dynamic_output_shape_dim2_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim2_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim2_axis1) {
  const Model model = createTestModel_dynamic_output_shape_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim2_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim2_axis1_neg();
bool is_ignored_dynamic_output_shape_dim2_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim2_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim2_axis1_neg,
          is_ignored_dynamic_output_shape_dim2_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim2_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim2_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim1_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim1_axis0();
bool is_ignored_dynamic_output_shape_dim1_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim1_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim1_axis0,
          is_ignored_dynamic_output_shape_dim1_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim1_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim1_axis0) {
  const Model model = createTestModel_dynamic_output_shape_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_dim1_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_dim1_axis0_neg();
bool is_ignored_dynamic_output_shape_dim1_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_dim1_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_dim1_axis0_neg,
          is_ignored_dynamic_output_shape_dim1_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim1_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_dim1_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim4_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim4_axis0();
bool is_ignored_dynamic_output_shape_relaxed_dim4_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim4_axis0,
          is_ignored_dynamic_output_shape_relaxed_dim4_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis0) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim4_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim4_axis0_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim4_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim4_axis0_neg,
          is_ignored_dynamic_output_shape_relaxed_dim4_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim4_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim4_axis1();
bool is_ignored_dynamic_output_shape_relaxed_dim4_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim4_axis1,
          is_ignored_dynamic_output_shape_relaxed_dim4_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis1) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim4_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim4_axis1_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim4_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim4_axis1_neg,
          is_ignored_dynamic_output_shape_relaxed_dim4_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim4_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim4_axis2();
bool is_ignored_dynamic_output_shape_relaxed_dim4_axis2(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis2) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim4_axis2,
          is_ignored_dynamic_output_shape_relaxed_dim4_axis2,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis2(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis2) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim4_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim4_axis2_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim4_axis2_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis2_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim4_axis2_neg,
          is_ignored_dynamic_output_shape_relaxed_dim4_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis2_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis2_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim4_axis3();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim4_axis3();
bool is_ignored_dynamic_output_shape_relaxed_dim4_axis3(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis3) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim4_axis3,
          is_ignored_dynamic_output_shape_relaxed_dim4_axis3,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis3(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis3) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim4_axis3_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim4_axis3_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim4_axis3_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis3_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim4_axis3_neg,
          is_ignored_dynamic_output_shape_relaxed_dim4_axis3_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis3_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim4_axis3_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim3_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim3_axis0();
bool is_ignored_dynamic_output_shape_relaxed_dim3_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim3_axis0,
          is_ignored_dynamic_output_shape_relaxed_dim3_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis0) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim3_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim3_axis0_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim3_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim3_axis0_neg,
          is_ignored_dynamic_output_shape_relaxed_dim3_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim3_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim3_axis1();
bool is_ignored_dynamic_output_shape_relaxed_dim3_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim3_axis1,
          is_ignored_dynamic_output_shape_relaxed_dim3_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis1) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim3_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim3_axis1_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim3_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim3_axis1_neg,
          is_ignored_dynamic_output_shape_relaxed_dim3_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim3_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim3_axis2();
bool is_ignored_dynamic_output_shape_relaxed_dim3_axis2(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis2) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim3_axis2,
          is_ignored_dynamic_output_shape_relaxed_dim3_axis2,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis2(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis2) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim3_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim3_axis2_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim3_axis2_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis2_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim3_axis2_neg,
          is_ignored_dynamic_output_shape_relaxed_dim3_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis2_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim3_axis2_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim2_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim2_axis0();
bool is_ignored_dynamic_output_shape_relaxed_dim2_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim2_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim2_axis0,
          is_ignored_dynamic_output_shape_relaxed_dim2_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim2_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim2_axis0) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim2_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim2_axis0_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim2_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim2_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim2_axis0_neg,
          is_ignored_dynamic_output_shape_relaxed_dim2_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim2_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim2_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim2_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim2_axis1();
bool is_ignored_dynamic_output_shape_relaxed_dim2_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim2_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim2_axis1,
          is_ignored_dynamic_output_shape_relaxed_dim2_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim2_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim2_axis1) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim2_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim2_axis1_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim2_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim2_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim2_axis1_neg,
          is_ignored_dynamic_output_shape_relaxed_dim2_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim2_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim2_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim1_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim1_axis0();
bool is_ignored_dynamic_output_shape_relaxed_dim1_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim1_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim1_axis0,
          is_ignored_dynamic_output_shape_relaxed_dim1_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim1_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim1_axis0) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_dim1_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_relaxed_dim1_axis0_neg();
bool is_ignored_dynamic_output_shape_relaxed_dim1_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_relaxed_dim1_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_dim1_axis0_neg,
          is_ignored_dynamic_output_shape_relaxed_dim1_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim1_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_relaxed_dim1_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_relaxed_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim4_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim4_axis0();
bool is_ignored_dynamic_output_shape_quant8_dim4_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim4_axis0,
          is_ignored_dynamic_output_shape_quant8_dim4_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis0) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim4_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim4_axis0_neg();
bool is_ignored_dynamic_output_shape_quant8_dim4_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim4_axis0_neg,
          is_ignored_dynamic_output_shape_quant8_dim4_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim4_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim4_axis1();
bool is_ignored_dynamic_output_shape_quant8_dim4_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim4_axis1,
          is_ignored_dynamic_output_shape_quant8_dim4_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis1) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim4_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim4_axis1_neg();
bool is_ignored_dynamic_output_shape_quant8_dim4_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim4_axis1_neg,
          is_ignored_dynamic_output_shape_quant8_dim4_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim4_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim4_axis2();
bool is_ignored_dynamic_output_shape_quant8_dim4_axis2(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis2) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim4_axis2,
          is_ignored_dynamic_output_shape_quant8_dim4_axis2,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis2(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis2) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim4_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim4_axis2_neg();
bool is_ignored_dynamic_output_shape_quant8_dim4_axis2_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis2_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim4_axis2_neg,
          is_ignored_dynamic_output_shape_quant8_dim4_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis2_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis2_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim4_axis3();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim4_axis3();
bool is_ignored_dynamic_output_shape_quant8_dim4_axis3(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis3) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim4_axis3,
          is_ignored_dynamic_output_shape_quant8_dim4_axis3,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis3(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis3) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim4_axis3_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim4_axis3_neg();
bool is_ignored_dynamic_output_shape_quant8_dim4_axis3_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis3_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim4_axis3_neg,
          is_ignored_dynamic_output_shape_quant8_dim4_axis3_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis3_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim4_axis3_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim3_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim3_axis0();
bool is_ignored_dynamic_output_shape_quant8_dim3_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim3_axis0,
          is_ignored_dynamic_output_shape_quant8_dim3_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis0) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim3_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim3_axis0_neg();
bool is_ignored_dynamic_output_shape_quant8_dim3_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim3_axis0_neg,
          is_ignored_dynamic_output_shape_quant8_dim3_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim3_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim3_axis1();
bool is_ignored_dynamic_output_shape_quant8_dim3_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim3_axis1,
          is_ignored_dynamic_output_shape_quant8_dim3_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis1) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim3_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim3_axis1_neg();
bool is_ignored_dynamic_output_shape_quant8_dim3_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim3_axis1_neg,
          is_ignored_dynamic_output_shape_quant8_dim3_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim3_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim3_axis2();
bool is_ignored_dynamic_output_shape_quant8_dim3_axis2(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis2) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim3_axis2,
          is_ignored_dynamic_output_shape_quant8_dim3_axis2,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis2(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis2) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim3_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim3_axis2_neg();
bool is_ignored_dynamic_output_shape_quant8_dim3_axis2_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis2_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim3_axis2_neg,
          is_ignored_dynamic_output_shape_quant8_dim3_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis2_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim3_axis2_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim2_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim2_axis0();
bool is_ignored_dynamic_output_shape_quant8_dim2_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim2_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim2_axis0,
          is_ignored_dynamic_output_shape_quant8_dim2_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim2_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim2_axis0) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim2_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim2_axis0_neg();
bool is_ignored_dynamic_output_shape_quant8_dim2_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim2_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim2_axis0_neg,
          is_ignored_dynamic_output_shape_quant8_dim2_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim2_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim2_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim2_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim2_axis1();
bool is_ignored_dynamic_output_shape_quant8_dim2_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim2_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim2_axis1,
          is_ignored_dynamic_output_shape_quant8_dim2_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim2_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim2_axis1) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim2_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim2_axis1_neg();
bool is_ignored_dynamic_output_shape_quant8_dim2_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim2_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim2_axis1_neg,
          is_ignored_dynamic_output_shape_quant8_dim2_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim2_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim2_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim1_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim1_axis0();
bool is_ignored_dynamic_output_shape_quant8_dim1_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim1_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim1_axis0,
          is_ignored_dynamic_output_shape_quant8_dim1_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim1_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim1_axis0) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_dim1_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_quant8_dim1_axis0_neg();
bool is_ignored_dynamic_output_shape_quant8_dim1_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_quant8_dim1_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_dim1_axis0_neg,
          is_ignored_dynamic_output_shape_quant8_dim1_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim1_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_quant8_dim1_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_quant8_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_quant8_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim4_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim4_axis0();
bool is_ignored_dynamic_output_shape_float16_dim4_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim4_axis0,
          is_ignored_dynamic_output_shape_float16_dim4_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis0) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim4_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim4_axis0_neg();
bool is_ignored_dynamic_output_shape_float16_dim4_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim4_axis0_neg,
          is_ignored_dynamic_output_shape_float16_dim4_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim4_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim4_axis1();
bool is_ignored_dynamic_output_shape_float16_dim4_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim4_axis1,
          is_ignored_dynamic_output_shape_float16_dim4_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis1) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim4_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim4_axis1_neg();
bool is_ignored_dynamic_output_shape_float16_dim4_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim4_axis1_neg,
          is_ignored_dynamic_output_shape_float16_dim4_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim4_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim4_axis2();
bool is_ignored_dynamic_output_shape_float16_dim4_axis2(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis2) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim4_axis2,
          is_ignored_dynamic_output_shape_float16_dim4_axis2,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis2(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis2) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim4_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim4_axis2_neg();
bool is_ignored_dynamic_output_shape_float16_dim4_axis2_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis2_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim4_axis2_neg,
          is_ignored_dynamic_output_shape_float16_dim4_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis2_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis2_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim4_axis3();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim4_axis3();
bool is_ignored_dynamic_output_shape_float16_dim4_axis3(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis3) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim4_axis3,
          is_ignored_dynamic_output_shape_float16_dim4_axis3,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis3(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis3) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim4_axis3_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim4_axis3_neg();
bool is_ignored_dynamic_output_shape_float16_dim4_axis3_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis3_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim4_axis3_neg,
          is_ignored_dynamic_output_shape_float16_dim4_axis3_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis3_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim4_axis3_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim3_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim3_axis0();
bool is_ignored_dynamic_output_shape_float16_dim3_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim3_axis0,
          is_ignored_dynamic_output_shape_float16_dim3_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis0) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim3_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim3_axis0_neg();
bool is_ignored_dynamic_output_shape_float16_dim3_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim3_axis0_neg,
          is_ignored_dynamic_output_shape_float16_dim3_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim3_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim3_axis1();
bool is_ignored_dynamic_output_shape_float16_dim3_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim3_axis1,
          is_ignored_dynamic_output_shape_float16_dim3_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis1) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim3_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim3_axis1_neg();
bool is_ignored_dynamic_output_shape_float16_dim3_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim3_axis1_neg,
          is_ignored_dynamic_output_shape_float16_dim3_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim3_axis2();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim3_axis2();
bool is_ignored_dynamic_output_shape_float16_dim3_axis2(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis2) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim3_axis2,
          is_ignored_dynamic_output_shape_float16_dim3_axis2,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis2(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis2) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim3_axis2_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim3_axis2_neg();
bool is_ignored_dynamic_output_shape_float16_dim3_axis2_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis2_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim3_axis2_neg,
          is_ignored_dynamic_output_shape_float16_dim3_axis2_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis2_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim3_axis2_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim2_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim2_axis0();
bool is_ignored_dynamic_output_shape_float16_dim2_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim2_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim2_axis0,
          is_ignored_dynamic_output_shape_float16_dim2_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim2_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim2_axis0) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim2_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim2_axis0_neg();
bool is_ignored_dynamic_output_shape_float16_dim2_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim2_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim2_axis0_neg,
          is_ignored_dynamic_output_shape_float16_dim2_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim2_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim2_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim2_axis1();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim2_axis1();
bool is_ignored_dynamic_output_shape_float16_dim2_axis1(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim2_axis1) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim2_axis1,
          is_ignored_dynamic_output_shape_float16_dim2_axis1,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim2_axis1(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim2_axis1) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim2_axis1_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim2_axis1_neg();
bool is_ignored_dynamic_output_shape_float16_dim2_axis1_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim2_axis1_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim2_axis1_neg,
          is_ignored_dynamic_output_shape_float16_dim2_axis1_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim2_axis1_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim2_axis1_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim1_axis0();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim1_axis0();
bool is_ignored_dynamic_output_shape_float16_dim1_axis0(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim1_axis0) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim1_axis0,
          is_ignored_dynamic_output_shape_float16_dim1_axis0,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim1_axis0(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim1_axis0) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

namespace generated_tests::channel_shuffle {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_dim1_axis0_neg();

} // namespace generated_tests::channel_shuffle

namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle {

Model createTestModel_dynamic_output_shape_float16_dim1_axis0_neg();
bool is_ignored_dynamic_output_shape_float16_dim1_axis0_neg(int);

TEST_F(DynamicOutputShapeTest, channel_shuffle_dynamic_output_shape_float16_dim1_axis0_neg) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_dim1_axis0_neg,
          is_ignored_dynamic_output_shape_float16_dim1_axis0_neg,
          ::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim1_axis0_neg(), true);
}

TEST_F(ValidationTest, channel_shuffle_dynamic_output_shape_float16_dim1_axis0_neg) {
  const Model model = createTestModel_dynamic_output_shape_float16_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::channel_shuffle::get_examples_dynamic_output_shape_float16_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::channel_shuffle

