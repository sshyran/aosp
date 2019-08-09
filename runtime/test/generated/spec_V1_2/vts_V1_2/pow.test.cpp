// Generated from pow.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow) {
    Execute(device, ::generated_tests::pow::get_test_model());
}

TEST_F(DynamicOutputShapeTest, pow) {
    Execute(device, ::generated_tests::pow::get_test_model(), true);
}

TEST_F(ValidationTest, pow) {
    const Model model = createModel(::generated_tests::pow::get_test_model());
    const Request request = createRequest(::generated_tests::pow::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pow::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, pow_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pow::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, pow_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::pow::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::pow::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_relaxed) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, pow_relaxed) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, pow_relaxed) {
    const Model model = createModel(::generated_tests::pow::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::pow::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, pow_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, pow_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_float16) {
    Execute(device, ::generated_tests::pow::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, pow_float16) {
    Execute(device, ::generated_tests::pow::get_test_model_float16(), true);
}

TEST_F(ValidationTest, pow_float16) {
    const Model model = createModel(::generated_tests::pow::get_test_model_float16());
    const Request request = createRequest(::generated_tests::pow::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, pow_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, pow_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::pow::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::pow::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_2) {
    Execute(device, ::generated_tests::pow::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, pow_2) {
    Execute(device, ::generated_tests::pow::get_test_model_2(), true);
}

TEST_F(ValidationTest, pow_2) {
    const Model model = createModel(::generated_tests::pow::get_test_model_2());
    const Request request = createRequest(::generated_tests::pow::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::pow::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, pow_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::pow::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, pow_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::pow::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::pow::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_relaxed_2) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, pow_relaxed_2) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, pow_relaxed_2) {
    const Model model = createModel(::generated_tests::pow::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::pow::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, pow_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, pow_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_float16_2) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, pow_float16_2) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, pow_float16_2) {
    const Model model = createModel(::generated_tests::pow::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::pow::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, pow_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, pow_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::pow::get_test_model_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::pow::get_test_model_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_3) {
    Execute(device, ::generated_tests::pow::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, pow_3) {
    Execute(device, ::generated_tests::pow::get_test_model_3(), true);
}

TEST_F(ValidationTest, pow_3) {
    const Model model = createModel(::generated_tests::pow::get_test_model_3());
    const Request request = createRequest(::generated_tests::pow::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::pow::get_test_model_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, pow_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::pow::get_test_model_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, pow_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::pow::get_test_model_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::pow::get_test_model_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_relaxed_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_relaxed_3) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, pow_relaxed_3) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_3(), true);
}

TEST_F(ValidationTest, pow_relaxed_3) {
    const Model model = createModel(::generated_tests::pow::get_test_model_relaxed_3());
    const Request request = createRequest(::generated_tests::pow::get_test_model_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, pow_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, pow_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::pow::get_test_model_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_float16_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_float16_3) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_3());
}

TEST_F(DynamicOutputShapeTest, pow_float16_3) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_3(), true);
}

TEST_F(ValidationTest, pow_float16_3) {
    const Model model = createModel(::generated_tests::pow::get_test_model_float16_3());
    const Request request = createRequest(::generated_tests::pow::get_test_model_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow


namespace generated_tests::pow {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

TEST_F(GeneratedTest, pow_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, pow_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::pow::get_test_model_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, pow_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::pow::get_test_model_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::pow::get_test_model_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

