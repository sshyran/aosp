// Generated from cast.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_float16();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_float16) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float16());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_float16) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float16(), true);
}

TEST_F(ValidationTest, cast_float16_to_float16) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_float16());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_float16_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float16_to_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_float32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_float32) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float32());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_float32) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float32(), true);
}

TEST_F(ValidationTest, cast_float16_to_float32) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_float32());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_float32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_float32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_float32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float32_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_float32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float32_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float16_to_float32_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_float32_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_float32_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_float32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_float32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float32_relaxed());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_float32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float32_relaxed(), true);
}

TEST_F(ValidationTest, cast_float16_to_float32_relaxed) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_float32_relaxed());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_float32_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_float32_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_float32_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float32_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_float32_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_float32_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float16_to_float32_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_float32_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_float32_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_int32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_int32) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_int32());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_int32) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_int32(), true);
}

TEST_F(ValidationTest, cast_float16_to_int32) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_int32());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_int32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_int32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_int32_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_int32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_int32_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float16_to_int32_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_int32_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_int32_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_quant8();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_quant8) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_quant8());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_quant8) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_quant8(), true);
}

TEST_F(ValidationTest, cast_float16_to_quant8) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_quant8());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_quant8_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float16_to_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_float16();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_float16) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float16());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_float16) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float16(), true);
}

TEST_F(ValidationTest, cast_float32_to_float16) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_float16());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_float16_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_float16_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_float16_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float16_relaxed());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_float16_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float16_relaxed(), true);
}

TEST_F(ValidationTest, cast_float32_to_float16_relaxed) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_float16_relaxed());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_float16_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_float16_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_float16_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float16_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_float16_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float16_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_float16_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_float16_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_float16_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_float32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_float32) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float32());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_float32) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float32(), true);
}

TEST_F(ValidationTest, cast_float32_to_float32) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_float32());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_float32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_float32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_float32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float32_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_float32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float32_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_float32_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_float32_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_float32_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_float32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_float32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float32_relaxed());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_float32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float32_relaxed(), true);
}

TEST_F(ValidationTest, cast_float32_to_float32_relaxed) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_float32_relaxed());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_float32_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_float32_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_float32_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float32_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_float32_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_float32_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_float32_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_float32_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_float32_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_int32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_int32) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_int32());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_int32) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_int32(), true);
}

TEST_F(ValidationTest, cast_float32_to_int32) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_int32());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_int32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_int32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_int32_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_int32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_int32_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_int32_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_int32_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_int32_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_int32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_int32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_int32_relaxed());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_int32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_int32_relaxed(), true);
}

TEST_F(ValidationTest, cast_float32_to_int32_relaxed) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_int32_relaxed());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_int32_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_int32_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_int32_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_int32_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_int32_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_int32_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_int32_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_int32_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_int32_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_quant8();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_quant8) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_quant8());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_quant8_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_quant8_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_quant8_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_relaxed());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_relaxed(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_relaxed) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_quant8_relaxed());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_quant8_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_quant8_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_quant8_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_quant8_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_quant8_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_int32_to_float16();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_int32_to_float16) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_float16());
}

TEST_F(DynamicOutputShapeTest, cast_int32_to_float16) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_float16(), true);
}

TEST_F(ValidationTest, cast_int32_to_float16) {
    const Model model = createModel(::generated_tests::cast::get_test_model_int32_to_float16());
    const Request request = createRequest(::generated_tests::cast::get_test_model_int32_to_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_int32_to_float32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_int32_to_float32) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_float32());
}

TEST_F(DynamicOutputShapeTest, cast_int32_to_float32) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_float32(), true);
}

TEST_F(ValidationTest, cast_int32_to_float32) {
    const Model model = createModel(::generated_tests::cast::get_test_model_int32_to_float32());
    const Request request = createRequest(::generated_tests::cast::get_test_model_int32_to_float32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_int32_to_float32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_int32_to_float32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_float32_relaxed());
}

TEST_F(DynamicOutputShapeTest, cast_int32_to_float32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_float32_relaxed(), true);
}

TEST_F(ValidationTest, cast_int32_to_float32_relaxed) {
    const Model model = createModel(::generated_tests::cast::get_test_model_int32_to_float32_relaxed());
    const Request request = createRequest(::generated_tests::cast::get_test_model_int32_to_float32_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_int32_to_int32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_int32_to_int32) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_int32());
}

TEST_F(DynamicOutputShapeTest, cast_int32_to_int32) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_int32(), true);
}

TEST_F(ValidationTest, cast_int32_to_int32) {
    const Model model = createModel(::generated_tests::cast::get_test_model_int32_to_int32());
    const Request request = createRequest(::generated_tests::cast::get_test_model_int32_to_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_int32_to_quant8();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_int32_to_quant8) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_quant8());
}

TEST_F(DynamicOutputShapeTest, cast_int32_to_quant8) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_quant8(), true);
}

TEST_F(ValidationTest, cast_int32_to_quant8) {
    const Model model = createModel(::generated_tests::cast::get_test_model_int32_to_quant8());
    const Request request = createRequest(::generated_tests::cast::get_test_model_int32_to_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_float16();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_float16) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float16());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float16) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float16(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float16) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_float16());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_float16_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_float32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_float32) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float32());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float32) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float32(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float32) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_float32());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_float32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_float32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_float32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float32_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float32_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float32_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_float32_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_float32_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_float32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_float32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float32_relaxed());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float32_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float32_relaxed(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float32_relaxed) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_float32_relaxed());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_float32_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_float32_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_float32_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float32_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float32_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_float32_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float32_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_float32_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_float32_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_int32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_int32) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_int32());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_int32) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_int32(), true);
}

TEST_F(ValidationTest, cast_quant8_to_int32) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_int32());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_int32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_int32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_int32_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_int32_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_int32_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_quant8_to_int32_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_int32_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_int32_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_quant8();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_quant8) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_quant8());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_quant8) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_quant8(), true);
}

TEST_F(ValidationTest, cast_quant8_to_quant8) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_quant8());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_quant8_to_quant8_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_quant8_to_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_quant8_to_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_quant8_to_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_quant8_to_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_quant8_to_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_quant8_to_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_quant8_overflow();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_quant8_overflow) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_quant8_overflow());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_quant8_overflow) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_quant8_overflow(), true);
}

TEST_F(ValidationTest, cast_float16_to_quant8_overflow) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_quant8_overflow());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_quant8_overflow());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float16_to_quant8_overflow_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float16_to_quant8_overflow_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_quant8_overflow_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float16_to_quant8_overflow_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float16_to_quant8_overflow_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float16_to_quant8_overflow_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float16_to_quant8_overflow_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float16_to_quant8_overflow_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_quant8_overflow();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_quant8_overflow) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_overflow());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_overflow) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_overflow(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_quant8_overflow());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_quant8_overflow());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_quant8_overflow_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_quant8_overflow_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_overflow_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_overflow_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_overflow_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_quant8_overflow_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_quant8_overflow_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_quant8_overflow_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_quant8_overflow_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_overflow_relaxed());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_overflow_relaxed) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_overflow_relaxed(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_relaxed) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_quant8_overflow_relaxed());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_quant8_overflow_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_float32_to_quant8_overflow_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_float32_to_quant8_overflow_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_overflow_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_overflow_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::cast::get_test_model_float32_to_quant8_overflow_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::cast::get_test_model_float32_to_quant8_overflow_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::cast::get_test_model_float32_to_quant8_overflow_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast


namespace generated_tests::cast {

const ::test_helper::TestModel& get_test_model_int32_to_quant8_overflow();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

TEST_F(GeneratedTest, cast_int32_to_quant8_overflow) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_quant8_overflow());
}

TEST_F(DynamicOutputShapeTest, cast_int32_to_quant8_overflow) {
    Execute(device, ::generated_tests::cast::get_test_model_int32_to_quant8_overflow(), true);
}

TEST_F(ValidationTest, cast_int32_to_quant8_overflow) {
    const Model model = createModel(::generated_tests::cast::get_test_model_int32_to_quant8_overflow());
    const Request request = createRequest(::generated_tests::cast::get_test_model_int32_to_quant8_overflow());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

