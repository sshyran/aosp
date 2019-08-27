// Generated from not_equal.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_simple();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_simple) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple());
}

TEST_F(DynamicOutputShapeTest, not_equal_simple) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple(), true);
}

TEST_F(ValidationTest, not_equal_simple) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_simple());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_simple());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_simple_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_simple_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_simple_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_simple_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_simple_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_simple_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_simple_int32();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_simple_int32) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_int32());
}

TEST_F(DynamicOutputShapeTest, not_equal_simple_int32) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_int32(), true);
}

TEST_F(ValidationTest, not_equal_simple_int32) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_simple_int32());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_simple_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_simple_float16();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_simple_float16) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_float16());
}

TEST_F(DynamicOutputShapeTest, not_equal_simple_float16) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_float16(), true);
}

TEST_F(ValidationTest, not_equal_simple_float16) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_simple_float16());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_simple_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_simple_float16_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_simple_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_simple_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_simple_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_simple_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_simple_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_simple_relaxed();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_simple_relaxed) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_relaxed());
}

TEST_F(DynamicOutputShapeTest, not_equal_simple_relaxed) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_relaxed(), true);
}

TEST_F(ValidationTest, not_equal_simple_relaxed) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_simple_relaxed());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_simple_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_simple_relaxed_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_simple_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_simple_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_simple_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_simple_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_simple_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_simple_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_broadcast();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_broadcast) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast());
}

TEST_F(DynamicOutputShapeTest, not_equal_broadcast) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast(), true);
}

TEST_F(ValidationTest, not_equal_broadcast) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_broadcast());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_broadcast());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_broadcast_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_broadcast_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_broadcast_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_broadcast_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_broadcast_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_broadcast_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_broadcast_int32();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_broadcast_int32) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_int32());
}

TEST_F(DynamicOutputShapeTest, not_equal_broadcast_int32) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_int32(), true);
}

TEST_F(ValidationTest, not_equal_broadcast_int32) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_broadcast_int32());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_broadcast_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_broadcast_float16();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_broadcast_float16) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_float16());
}

TEST_F(DynamicOutputShapeTest, not_equal_broadcast_float16) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_float16(), true);
}

TEST_F(ValidationTest, not_equal_broadcast_float16) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_broadcast_float16());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_broadcast_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_broadcast_float16_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_broadcast_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_broadcast_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_broadcast_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_broadcast_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_broadcast_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_broadcast_relaxed();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_broadcast_relaxed) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_relaxed());
}

TEST_F(DynamicOutputShapeTest, not_equal_broadcast_relaxed) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_relaxed(), true);
}

TEST_F(ValidationTest, not_equal_broadcast_relaxed) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_broadcast_relaxed());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_broadcast_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_broadcast_relaxed_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_broadcast_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_broadcast_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_broadcast_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_broadcast_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_broadcast_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_broadcast_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_quantized_different_scale();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_quantized_different_scale) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_different_scale());
}

TEST_F(DynamicOutputShapeTest, not_equal_quantized_different_scale) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_different_scale(), true);
}

TEST_F(ValidationTest, not_equal_quantized_different_scale) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_quantized_different_scale());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_quantized_different_scale());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_quantized_different_scale_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_quantized_different_scale_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_different_scale_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_quantized_different_scale_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_different_scale_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_quantized_different_scale_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_quantized_different_scale_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_quantized_different_scale_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_quantized_different_zero_point();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_quantized_different_zero_point) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_different_zero_point());
}

TEST_F(DynamicOutputShapeTest, not_equal_quantized_different_zero_point) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_different_zero_point(), true);
}

TEST_F(ValidationTest, not_equal_quantized_different_zero_point) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_quantized_different_zero_point());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_quantized_different_zero_point());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_quantized_different_zero_point_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_quantized_different_zero_point_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_different_zero_point_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_quantized_different_zero_point_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_different_zero_point_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_quantized_different_zero_point_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_quantized_different_zero_point_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_quantized_different_zero_point_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_quantized_overflow_second_input_if_requantized();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_quantized_overflow_second_input_if_requantized) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_overflow_second_input_if_requantized());
}

TEST_F(DynamicOutputShapeTest, not_equal_quantized_overflow_second_input_if_requantized) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_overflow_second_input_if_requantized(), true);
}

TEST_F(ValidationTest, not_equal_quantized_overflow_second_input_if_requantized) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_quantized_overflow_second_input_if_requantized());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_quantized_overflow_second_input_if_requantized());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_quantized_overflow_second_input_if_requantized_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_quantized_overflow_second_input_if_requantized_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_overflow_second_input_if_requantized_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_quantized_overflow_second_input_if_requantized_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_overflow_second_input_if_requantized_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_quantized_overflow_second_input_if_requantized_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_quantized_overflow_second_input_if_requantized_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_quantized_overflow_second_input_if_requantized_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_quantized_overflow_first_input_if_requantized();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_quantized_overflow_first_input_if_requantized) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_overflow_first_input_if_requantized());
}

TEST_F(DynamicOutputShapeTest, not_equal_quantized_overflow_first_input_if_requantized) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_overflow_first_input_if_requantized(), true);
}

TEST_F(ValidationTest, not_equal_quantized_overflow_first_input_if_requantized) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_quantized_overflow_first_input_if_requantized());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_quantized_overflow_first_input_if_requantized());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_quantized_overflow_first_input_if_requantized_all_inputs_as_internal();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_quantized_overflow_first_input_if_requantized_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_overflow_first_input_if_requantized_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, not_equal_quantized_overflow_first_input_if_requantized_all_inputs_as_internal) {
    Execute(device, ::generated_tests::not_equal::get_test_model_quantized_overflow_first_input_if_requantized_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, not_equal_quantized_overflow_first_input_if_requantized_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_quantized_overflow_first_input_if_requantized_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_quantized_overflow_first_input_if_requantized_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal


namespace generated_tests::not_equal {

const ::test_helper::TestModel& get_test_model_boolean();

} // namespace generated_tests::not_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal {

TEST_F(GeneratedTest, not_equal_boolean) {
    Execute(device, ::generated_tests::not_equal::get_test_model_boolean());
}

TEST_F(DynamicOutputShapeTest, not_equal_boolean) {
    Execute(device, ::generated_tests::not_equal::get_test_model_boolean(), true);
}

TEST_F(ValidationTest, not_equal_boolean) {
    const Model model = createModel(::generated_tests::not_equal::get_test_model_boolean());
    const Request request = createRequest(::generated_tests::not_equal::get_test_model_boolean());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::not_equal

