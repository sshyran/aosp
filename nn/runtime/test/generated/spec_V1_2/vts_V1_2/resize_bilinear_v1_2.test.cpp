// Generated from resize_bilinear_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_nchw_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_nchw_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_float16(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_float16) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_float16());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_quant8(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_quant8) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_quant8());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_shape_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_shape_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_shape_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_shape_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_float16(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_float16) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_float16());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_quant8(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_quant8) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_quant8());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_scale_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_scale_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_scale_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_scale_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nhwc) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_quant8(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_quant8());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_float16(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_float16) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_float16());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nchw) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_relaxed(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_relaxed());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_quant8(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_quant8) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_quant8());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_float16(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_float16) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_float16());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2


namespace generated_tests::resize_bilinear_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

TEST_F(GeneratedTest, resize_bilinear_v1_2_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_float16_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_float16_2) {
    const Model model = createModel(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_float16_2());
    const Request request = createRequest(::generated_tests::resize_bilinear_v1_2::get_test_model_zero_sized_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

