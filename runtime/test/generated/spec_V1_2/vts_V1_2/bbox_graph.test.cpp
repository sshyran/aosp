// Generated from bbox_graph.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::bbox_graph {

const ::test_helper::TestModel& get_test_model_zero_sized();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

TEST_F(GeneratedTest, bbox_graph_zero_sized) {
    Execute(device, ::generated_tests::bbox_graph::get_test_model_zero_sized());
}

TEST_F(DynamicOutputShapeTest, bbox_graph_zero_sized) {
    Execute(device, ::generated_tests::bbox_graph::get_test_model_zero_sized(), true);
}

TEST_F(ValidationTest, bbox_graph_zero_sized) {
    const Model model = createModel(::generated_tests::bbox_graph::get_test_model_zero_sized());
    const Request request = createRequest(::generated_tests::bbox_graph::get_test_model_zero_sized());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph


namespace generated_tests::bbox_graph {

const ::test_helper::TestModel& get_test_model_zero_sized_relaxed();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

TEST_F(GeneratedTest, bbox_graph_zero_sized_relaxed) {
    Execute(device, ::generated_tests::bbox_graph::get_test_model_zero_sized_relaxed());
}

TEST_F(DynamicOutputShapeTest, bbox_graph_zero_sized_relaxed) {
    Execute(device, ::generated_tests::bbox_graph::get_test_model_zero_sized_relaxed(), true);
}

TEST_F(ValidationTest, bbox_graph_zero_sized_relaxed) {
    const Model model = createModel(::generated_tests::bbox_graph::get_test_model_zero_sized_relaxed());
    const Request request = createRequest(::generated_tests::bbox_graph::get_test_model_zero_sized_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph


namespace generated_tests::bbox_graph {

const ::test_helper::TestModel& get_test_model_zero_sized_float16();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

TEST_F(GeneratedTest, bbox_graph_zero_sized_float16) {
    Execute(device, ::generated_tests::bbox_graph::get_test_model_zero_sized_float16());
}

TEST_F(DynamicOutputShapeTest, bbox_graph_zero_sized_float16) {
    Execute(device, ::generated_tests::bbox_graph::get_test_model_zero_sized_float16(), true);
}

TEST_F(ValidationTest, bbox_graph_zero_sized_float16) {
    const Model model = createModel(::generated_tests::bbox_graph::get_test_model_zero_sized_float16());
    const Request request = createRequest(::generated_tests::bbox_graph::get_test_model_zero_sized_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph


namespace generated_tests::bbox_graph {

const ::test_helper::TestModel& get_test_model_zero_sized_quant8();

} // namespace generated_tests::bbox_graph

namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph {

TEST_F(GeneratedTest, bbox_graph_zero_sized_quant8) {
    Execute(device, ::generated_tests::bbox_graph::get_test_model_zero_sized_quant8());
}

TEST_F(DynamicOutputShapeTest, bbox_graph_zero_sized_quant8) {
    Execute(device, ::generated_tests::bbox_graph::get_test_model_zero_sized_quant8(), true);
}

TEST_F(ValidationTest, bbox_graph_zero_sized_quant8) {
    const Model model = createModel(::generated_tests::bbox_graph::get_test_model_zero_sized_quant8());
    const Request request = createRequest(::generated_tests::bbox_graph::get_test_model_zero_sized_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::bbox_graph

