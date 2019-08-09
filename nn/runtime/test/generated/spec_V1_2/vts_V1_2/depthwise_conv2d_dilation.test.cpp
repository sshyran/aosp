// Generated from depthwise_conv2d_dilation.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_float16();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_float16) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_quant8();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_quant8) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_relaxed();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_relaxed) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_float16();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_float16) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_quant8();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_quant8) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_relaxed();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_float16();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_quant8();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_relaxed();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_float16();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_float16) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_quant8();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_valid_padding_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_relaxed();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_quant8();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_float16();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_relaxed();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_quant8();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_float16();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation


namespace generated_tests::depthwise_conv2d_dilation {

const ::test_helper::TestModel& get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_dilation

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation {

TEST_F(GeneratedTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_dilation_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::depthwise_conv2d_dilation::get_test_model_same_padding_stride_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_dilation

