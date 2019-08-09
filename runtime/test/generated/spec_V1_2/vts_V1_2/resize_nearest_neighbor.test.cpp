// Generated from resize_nearest_neighbor.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_relaxed_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_quant8_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nhwc_float16_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc_float16_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_relaxed_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_relaxed_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_quant8_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_shape_nchw_float16_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_shape_nchw_float16_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_relaxed_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_quant8_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nhwc_float16_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nhwc_float16_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_relaxed_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_relaxed_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_quant8_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_scale_nchw_float16_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_scale_nchw_float16_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nhwc) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_relaxed());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_quant8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_quant8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_quant8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_float16());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_float16(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_float16) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_float16());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nchw) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_relaxed());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_relaxed) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_relaxed(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_relaxed) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_relaxed());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_quant8());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_quant8) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_quant8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_quant8) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_quant8());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_float16());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_float16) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_float16(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_float16) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_float16());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_quant8_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_quant8_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nhwc_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_float16_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_float16_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nhwc_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_relaxed_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_relaxed_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_relaxed_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_quant8_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_quant8_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_quant8_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_quant8_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor


namespace generated_tests::resize_nearest_neighbor {

const ::test_helper::TestModel& get_test_model_zero_sized_nchw_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

TEST_F(GeneratedTest, resize_nearest_neighbor_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_float16_2());
}

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_float16_2) {
    Execute(device, ::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_float16_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_float16_2) {
    const Model model = createModel(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_float16_2());
    const Request request = createRequest(::generated_tests::resize_nearest_neighbor::get_test_model_zero_sized_nchw_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

