// Generated from maximum.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_simple();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_simple) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple());
}

TEST_F(DynamicOutputShapeTest, maximum_simple) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple(), true);
}

TEST_F(ValidationTest, maximum_simple) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_simple());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_simple());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_simple_all_inputs_as_internal();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_simple_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, maximum_simple_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, maximum_simple_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_simple_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_simple_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_simple_relaxed();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_simple_relaxed) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_relaxed());
}

TEST_F(DynamicOutputShapeTest, maximum_simple_relaxed) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_relaxed(), true);
}

TEST_F(ValidationTest, maximum_simple_relaxed) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_simple_relaxed());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_simple_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_simple_relaxed_all_inputs_as_internal();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_simple_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, maximum_simple_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, maximum_simple_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_simple_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_simple_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_simple_float16();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_simple_float16) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_float16());
}

TEST_F(DynamicOutputShapeTest, maximum_simple_float16) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_float16(), true);
}

TEST_F(ValidationTest, maximum_simple_float16) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_simple_float16());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_simple_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_simple_float16_all_inputs_as_internal();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_simple_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, maximum_simple_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, maximum_simple_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_simple_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_simple_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_simple_int32();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_simple_int32) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_int32());
}

TEST_F(DynamicOutputShapeTest, maximum_simple_int32) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_int32(), true);
}

TEST_F(ValidationTest, maximum_simple_int32) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_simple_int32());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_simple_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_simple_quant8();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_simple_quant8) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_quant8());
}

TEST_F(DynamicOutputShapeTest, maximum_simple_quant8) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_quant8(), true);
}

TEST_F(ValidationTest, maximum_simple_quant8) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_simple_quant8());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_simple_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_simple_quant8_all_inputs_as_internal();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_simple_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, maximum_simple_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_simple_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, maximum_simple_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_simple_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_simple_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_broadcast();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_broadcast) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast());
}

TEST_F(DynamicOutputShapeTest, maximum_broadcast) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast(), true);
}

TEST_F(ValidationTest, maximum_broadcast) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_broadcast());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_broadcast());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_broadcast_all_inputs_as_internal();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_broadcast_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, maximum_broadcast_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, maximum_broadcast_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_broadcast_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_broadcast_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_broadcast_relaxed();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_broadcast_relaxed) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_relaxed());
}

TEST_F(DynamicOutputShapeTest, maximum_broadcast_relaxed) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_relaxed(), true);
}

TEST_F(ValidationTest, maximum_broadcast_relaxed) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_broadcast_relaxed());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_broadcast_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_broadcast_relaxed_all_inputs_as_internal();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_broadcast_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, maximum_broadcast_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, maximum_broadcast_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_broadcast_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_broadcast_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_broadcast_float16();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_broadcast_float16) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_float16());
}

TEST_F(DynamicOutputShapeTest, maximum_broadcast_float16) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_float16(), true);
}

TEST_F(ValidationTest, maximum_broadcast_float16) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_broadcast_float16());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_broadcast_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_broadcast_float16_all_inputs_as_internal();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_broadcast_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, maximum_broadcast_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, maximum_broadcast_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_broadcast_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_broadcast_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_broadcast_int32();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_broadcast_int32) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_int32());
}

TEST_F(DynamicOutputShapeTest, maximum_broadcast_int32) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_int32(), true);
}

TEST_F(ValidationTest, maximum_broadcast_int32) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_broadcast_int32());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_broadcast_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_broadcast_quant8();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_broadcast_quant8) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_quant8());
}

TEST_F(DynamicOutputShapeTest, maximum_broadcast_quant8) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_quant8(), true);
}

TEST_F(ValidationTest, maximum_broadcast_quant8) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_broadcast_quant8());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_broadcast_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_broadcast_quant8_all_inputs_as_internal();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_broadcast_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, maximum_broadcast_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_broadcast_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, maximum_broadcast_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_broadcast_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_broadcast_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_overflow();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_overflow) {
    Execute(device, ::generated_tests::maximum::get_test_model_overflow());
}

TEST_F(DynamicOutputShapeTest, maximum_overflow) {
    Execute(device, ::generated_tests::maximum::get_test_model_overflow(), true);
}

TEST_F(ValidationTest, maximum_overflow) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_overflow());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_overflow());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum


namespace generated_tests::maximum {

const ::test_helper::TestModel& get_test_model_overflow_all_inputs_as_internal();

} // namespace generated_tests::maximum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum {

TEST_F(GeneratedTest, maximum_overflow_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_overflow_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, maximum_overflow_all_inputs_as_internal) {
    Execute(device, ::generated_tests::maximum::get_test_model_overflow_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, maximum_overflow_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::maximum::get_test_model_overflow_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::maximum::get_test_model_overflow_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::maximum

