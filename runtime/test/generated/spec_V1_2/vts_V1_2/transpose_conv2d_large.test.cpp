// Generated from transpose_conv2d_large.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::transpose_conv2d_large {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

TEST_F(GeneratedTest, transpose_conv2d_large_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d_large::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d_large::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large


namespace generated_tests::transpose_conv2d_large {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

TEST_F(GeneratedTest, transpose_conv2d_large_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large


namespace generated_tests::transpose_conv2d_large {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

TEST_F(GeneratedTest, transpose_conv2d_large_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large


namespace generated_tests::transpose_conv2d_large {

const ::test_helper::TestModel& get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

TEST_F(GeneratedTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d_large::get_test_model_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large


namespace generated_tests::transpose_conv2d_large {

const ::test_helper::TestModel& get_test_model_channelQuant8();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

TEST_F(GeneratedTest, transpose_conv2d_large_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8) {
    const Model model = createModel(::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8());
    const Request request = createRequest(::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large


namespace generated_tests::transpose_conv2d_large {

const ::test_helper::TestModel& get_test_model_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

TEST_F(GeneratedTest, transpose_conv2d_large_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large


namespace generated_tests::transpose_conv2d_large {

const ::test_helper::TestModel& get_test_model_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

TEST_F(GeneratedTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large


namespace generated_tests::transpose_conv2d_large {

const ::test_helper::TestModel& get_test_model_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

TEST_F(GeneratedTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::transpose_conv2d_large::get_test_model_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

