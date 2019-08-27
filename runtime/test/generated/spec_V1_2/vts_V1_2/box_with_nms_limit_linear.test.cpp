// Generated from box_with_nms_limit_linear.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_all_inputs_as_internal) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_all_inputs_as_internal) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_relaxed) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_relaxed) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_relaxed) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_float16) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_float16) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_float16(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_float16) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_float16());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_quant8) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_quant8) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_quant8) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_2) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_2());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_relaxed_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_relaxed_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_relaxed_2) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_float16_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_float16_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_float16_2) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_2();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_quant8_2();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_quant8_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_2());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_quant8_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_quant8_2) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_2());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear


namespace generated_tests::box_with_nms_limit_linear {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::box_with_nms_limit_linear

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear {

TEST_F(GeneratedTest, box_with_nms_limit_linear_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_linear_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_linear_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::box_with_nms_limit_linear::get_test_model_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_linear

