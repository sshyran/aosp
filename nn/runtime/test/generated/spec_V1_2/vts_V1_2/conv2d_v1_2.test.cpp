// Generated from conv2d_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_quant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_channelQuant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_quant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_channelQuant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_quant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_channelQuant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_channelQuant8_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_quant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_channelQuant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_channelQuant8_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_quant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_quant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_channelQuant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_channelQuant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_quant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_quant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_channelQuant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_channelQuant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_quant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_quant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_quant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_channelQuant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_channelQuant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_channelQuant8_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_quant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_quant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_quant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_channelQuant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_channelQuant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_channelQuant8_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_quant_output_multiplier_gt_1();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_quant_output_multiplier_gt_1) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_quant_output_multiplier_gt_1) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_quant_output_multiplier_gt_1_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_quant_output_multiplier_gt_1_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nhwc) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_quant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_quant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nhwc_quant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_quant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nhwc_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nchw) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_relaxed(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nchw_relaxed) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_relaxed());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_quant8();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_quant8(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nchw_quant8) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_quant8());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_float16(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nchw_float16) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_float16());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nhwc_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_quant8_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nhwc_quant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_quant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nchw_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_quant8_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nchw_quant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_quant8_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2


namespace generated_tests::conv2d_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16_2();

} // namespace generated_tests::conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2 {

TEST_F(GeneratedTest, conv2d_v1_2_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_float16_2(), true);
}

TEST_F(ValidationTest, conv2d_v1_2_zero_sized_nchw_float16_2) {
    const Model model = createModel(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_float16_2());
    const Request request = createRequest(::generated_tests::conv2d_v1_2::get_test_model_zero_sized_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::conv2d_v1_2

