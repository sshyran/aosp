// Generated from bbox_graph.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

Model createTestModel_zero_sized();
bool is_ignored_zero_sized(int);

TEST_F(NeuralnetworksHidlTest, bbox_graph_zero_sized) {
  Execute(device,
          createTestModel_zero_sized,
          is_ignored_zero_sized,
          ::generated_tests::bbox_graph::get_examples_zero_sized());
}

TEST_F(ValidationTest, bbox_graph_zero_sized) {
  const Model model = createTestModel_zero_sized();
  const std::vector<Request> requests = createRequests(::generated_tests::bbox_graph::get_examples_zero_sized());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph

namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

Model createTestModel_zero_sized_relaxed();
bool is_ignored_zero_sized_relaxed(int);

TEST_F(NeuralnetworksHidlTest, bbox_graph_zero_sized_relaxed) {
  Execute(device,
          createTestModel_zero_sized_relaxed,
          is_ignored_zero_sized_relaxed,
          ::generated_tests::bbox_graph::get_examples_zero_sized_relaxed());
}

TEST_F(ValidationTest, bbox_graph_zero_sized_relaxed) {
  const Model model = createTestModel_zero_sized_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::bbox_graph::get_examples_zero_sized_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph

namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

Model createTestModel_zero_sized_float16();
bool is_ignored_zero_sized_float16(int);

TEST_F(NeuralnetworksHidlTest, bbox_graph_zero_sized_float16) {
  Execute(device,
          createTestModel_zero_sized_float16,
          is_ignored_zero_sized_float16,
          ::generated_tests::bbox_graph::get_examples_zero_sized_float16());
}

TEST_F(ValidationTest, bbox_graph_zero_sized_float16) {
  const Model model = createTestModel_zero_sized_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::bbox_graph::get_examples_zero_sized_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph

namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_quant8();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

Model createTestModel_zero_sized_quant8();
bool is_ignored_zero_sized_quant8(int);

TEST_F(NeuralnetworksHidlTest, bbox_graph_zero_sized_quant8) {
  Execute(device,
          createTestModel_zero_sized_quant8,
          is_ignored_zero_sized_quant8,
          ::generated_tests::bbox_graph::get_examples_zero_sized_quant8());
}

TEST_F(ValidationTest, bbox_graph_zero_sized_quant8) {
  const Model model = createTestModel_zero_sized_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::bbox_graph::get_examples_zero_sized_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph

namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

Model createTestModel_zero_sized_dynamic_output_shape();
bool is_ignored_zero_sized_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, bbox_graph_zero_sized_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape,
          is_ignored_zero_sized_dynamic_output_shape,
          ::generated_tests::bbox_graph::get_examples_zero_sized_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, bbox_graph_zero_sized_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::bbox_graph::get_examples_zero_sized_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph

namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_relaxed();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

Model createTestModel_zero_sized_dynamic_output_shape_relaxed();
bool is_ignored_zero_sized_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, bbox_graph_zero_sized_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_relaxed,
          is_ignored_zero_sized_dynamic_output_shape_relaxed,
          ::generated_tests::bbox_graph::get_examples_zero_sized_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, bbox_graph_zero_sized_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::bbox_graph::get_examples_zero_sized_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph

namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_float16();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

Model createTestModel_zero_sized_dynamic_output_shape_float16();
bool is_ignored_zero_sized_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, bbox_graph_zero_sized_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_float16,
          is_ignored_zero_sized_dynamic_output_shape_float16,
          ::generated_tests::bbox_graph::get_examples_zero_sized_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, bbox_graph_zero_sized_dynamic_output_shape_float16) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::bbox_graph::get_examples_zero_sized_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph

namespace generated_tests::bbox_graph {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_quant8();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

Model createTestModel_zero_sized_dynamic_output_shape_quant8();
bool is_ignored_zero_sized_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, bbox_graph_zero_sized_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_quant8,
          is_ignored_zero_sized_dynamic_output_shape_quant8,
          ::generated_tests::bbox_graph::get_examples_zero_sized_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, bbox_graph_zero_sized_dynamic_output_shape_quant8) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::bbox_graph::get_examples_zero_sized_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph

