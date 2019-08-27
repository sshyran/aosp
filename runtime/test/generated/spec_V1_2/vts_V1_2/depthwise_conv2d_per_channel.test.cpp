// Generated from depthwise_conv2d_per_channel.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_same();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_same) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_same());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_same) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_same(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_same());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_same());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_same_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_same_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_same_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_same_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_same_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_same_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_different();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_different) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_different());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_different) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_different(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_different());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_different());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_different_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_different_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_different_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_different_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_different_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_different_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layout_nhwc();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_layout_nhwc) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nhwc) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layout_nhwc_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_layout_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layout_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layout_nchw();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_layout_nchw) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nchw) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layout_nchw_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_layout_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layout_nchw_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel


namespace generated_tests::depthwise_conv2d_per_channel {

const ::test_helper::TestModel& get_test_model_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

TEST_F(GeneratedTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_per_channel::get_test_model_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

