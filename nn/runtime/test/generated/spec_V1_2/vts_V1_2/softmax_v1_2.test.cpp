// Generated from softmax_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model(), true);
}

TEST_F(ValidationTest, softmax_v1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim1_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim1_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_dim1_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_dim1_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim3_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim3_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_dim3_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_dim3_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim1_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_dim1_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_dim3_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_dim3_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim1_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim1_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_relaxed_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_relaxed_dim3_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_relaxed_dim3_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim1_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_dim1_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_float16_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_float16_dim3_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_float16_dim3_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim1_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_dim1_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_quant8_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_quant8_dim3_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_quant8_dim3_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis3();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis3) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis3_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis3_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim1_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim1_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis3();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis3) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis3_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim1_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis3();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis3) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis3_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis3_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim1_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim1_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis3();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis3) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis3_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis3_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis2_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis1();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis1_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim1_axis0();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim1_axis0_neg();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim1_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_neg) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis2_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis2_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis3_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis3_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis3_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis3_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis3_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim4_axis3_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim4_axis3_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim3_axis2_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim3_axis2_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim2_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim2_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim1_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim1_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_dim1_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_dim1_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis3_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis3_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis3_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim1_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis2_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis3_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis3_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis3_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis3_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim4_axis3_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim3_axis2_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim2_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim1_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim1_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_float16_dim1_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis2_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis3_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis3_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis3_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim4_axis3_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis2_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis2_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim3_axis2_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis1_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis1_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim2_axis1_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim1_axis0_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim1_axis0_neg_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, softmax_v1_2_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_axis_quant8_dim1_axis0_neg_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_zero_sized) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_zero_sized());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_zero_sized) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_zero_sized(), true);
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_zero_sized());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_zero_sized());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_relaxed();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_zero_sized_relaxed) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_zero_sized_relaxed());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_zero_sized_relaxed) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_zero_sized_relaxed(), true);
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_relaxed) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_zero_sized_relaxed());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_zero_sized_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_quant8();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_zero_sized_quant8) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_zero_sized_quant8());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_zero_sized_quant8) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_zero_sized_quant8(), true);
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_quant8) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_zero_sized_quant8());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_zero_sized_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2


namespace generated_tests::softmax_v1_2 {

const ::test_helper::TestModel& get_test_model_zero_sized_float16();

} // namespace generated_tests::softmax_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2 {

TEST_F(GeneratedTest, softmax_v1_2_zero_sized_float16) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_zero_sized_float16());
}

TEST_F(DynamicOutputShapeTest, softmax_v1_2_zero_sized_float16) {
    Execute(device, ::generated_tests::softmax_v1_2::get_test_model_zero_sized_float16(), true);
}

TEST_F(ValidationTest, softmax_v1_2_zero_sized_float16) {
    const Model model = createModel(::generated_tests::softmax_v1_2::get_test_model_zero_sized_float16());
    const Request request = createRequest(::generated_tests::softmax_v1_2::get_test_model_zero_sized_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::softmax_v1_2

