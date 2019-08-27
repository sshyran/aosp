// Generated from slice.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice) {
    Execute(device, ::generated_tests::slice::get_test_model());
}

TEST_F(DynamicOutputShapeTest, slice) {
    Execute(device, ::generated_tests::slice::get_test_model(), true);
}

TEST_F(ValidationTest, slice) {
    const Model model = createModel(::generated_tests::slice::get_test_model());
    const Request request = createRequest(::generated_tests::slice::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_all_inputs_as_internal) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, slice_all_inputs_as_internal) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, slice_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::slice::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::slice::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, slice_relaxed) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, slice_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16) {
    Execute(device, ::generated_tests::slice::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, slice_float16) {
    Execute(device, ::generated_tests::slice::get_test_model_float16(), true);
}

TEST_F(ValidationTest, slice_float16) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, slice_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, slice_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_2) {
    Execute(device, ::generated_tests::slice::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, slice_2) {
    Execute(device, ::generated_tests::slice::get_test_model_2(), true);
}

TEST_F(ValidationTest, slice_2) {
    const Model model = createModel(::generated_tests::slice::get_test_model_2());
    const Request request = createRequest(::generated_tests::slice::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, slice_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, slice_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::slice::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::slice::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_2) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_2) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, slice_relaxed_2) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, slice_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_2) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, slice_float16_2) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, slice_float16_2) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_2();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, slice_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, slice_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_3) {
    Execute(device, ::generated_tests::slice::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, slice_3) {
    Execute(device, ::generated_tests::slice::get_test_model_3(), true);
}

TEST_F(ValidationTest, slice_3) {
    const Model model = createModel(::generated_tests::slice::get_test_model_3());
    const Request request = createRequest(::generated_tests::slice::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_3();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, slice_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, slice_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::slice::get_test_model_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::slice::get_test_model_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_3();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_3) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_3) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_3(), true);
}

TEST_F(ValidationTest, slice_relaxed_3) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_3());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, slice_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_3();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_3) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_3());
}

TEST_F(DynamicOutputShapeTest, slice_float16_3) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_3(), true);
}

TEST_F(ValidationTest, slice_float16_3) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_3());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_3();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, slice_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, slice_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_4();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_4) {
    Execute(device, ::generated_tests::slice::get_test_model_4());
}

TEST_F(DynamicOutputShapeTest, slice_4) {
    Execute(device, ::generated_tests::slice::get_test_model_4(), true);
}

TEST_F(ValidationTest, slice_4) {
    const Model model = createModel(::generated_tests::slice::get_test_model_4());
    const Request request = createRequest(::generated_tests::slice::get_test_model_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_4();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, slice_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, slice_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::slice::get_test_model_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::slice::get_test_model_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_4();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_4) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_4) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_4(), true);
}

TEST_F(ValidationTest, slice_relaxed_4) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_4());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, slice_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_4();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_4) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_4());
}

TEST_F(DynamicOutputShapeTest, slice_float16_4) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_4(), true);
}

TEST_F(ValidationTest, slice_float16_4) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_4());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_4();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, slice_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, slice_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_5();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_5) {
    Execute(device, ::generated_tests::slice::get_test_model_5());
}

TEST_F(DynamicOutputShapeTest, slice_5) {
    Execute(device, ::generated_tests::slice::get_test_model_5(), true);
}

TEST_F(ValidationTest, slice_5) {
    const Model model = createModel(::generated_tests::slice::get_test_model_5());
    const Request request = createRequest(::generated_tests::slice::get_test_model_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_5();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_5) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_5());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_5) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_5(), true);
}

TEST_F(ValidationTest, slice_relaxed_5) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_5());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_5();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_5) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_5());
}

TEST_F(DynamicOutputShapeTest, slice_float16_5) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_5(), true);
}

TEST_F(ValidationTest, slice_float16_5) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_5());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_6();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_6) {
    Execute(device, ::generated_tests::slice::get_test_model_6());
}

TEST_F(DynamicOutputShapeTest, slice_6) {
    Execute(device, ::generated_tests::slice::get_test_model_6(), true);
}

TEST_F(ValidationTest, slice_6) {
    const Model model = createModel(::generated_tests::slice::get_test_model_6());
    const Request request = createRequest(::generated_tests::slice::get_test_model_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_6();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_6) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_6());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_6) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_6(), true);
}

TEST_F(ValidationTest, slice_relaxed_6) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_6());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_6();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_6) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_6());
}

TEST_F(DynamicOutputShapeTest, slice_float16_6) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_6(), true);
}

TEST_F(ValidationTest, slice_float16_6) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_6());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_7();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_7) {
    Execute(device, ::generated_tests::slice::get_test_model_7());
}

TEST_F(DynamicOutputShapeTest, slice_7) {
    Execute(device, ::generated_tests::slice::get_test_model_7(), true);
}

TEST_F(ValidationTest, slice_7) {
    const Model model = createModel(::generated_tests::slice::get_test_model_7());
    const Request request = createRequest(::generated_tests::slice::get_test_model_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_5();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, slice_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::slice::get_test_model_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, slice_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::slice::get_test_model_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::slice::get_test_model_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_7();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_7) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_7());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_7) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_7(), true);
}

TEST_F(ValidationTest, slice_relaxed_7) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_7());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, slice_relaxed_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_7();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_7) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_7());
}

TEST_F(DynamicOutputShapeTest, slice_float16_7) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_7(), true);
}

TEST_F(ValidationTest, slice_float16_7) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_7());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_5();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, slice_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, slice_float16_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_8();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_8) {
    Execute(device, ::generated_tests::slice::get_test_model_8());
}

TEST_F(DynamicOutputShapeTest, slice_8) {
    Execute(device, ::generated_tests::slice::get_test_model_8(), true);
}

TEST_F(ValidationTest, slice_8) {
    const Model model = createModel(::generated_tests::slice::get_test_model_8());
    const Request request = createRequest(::generated_tests::slice::get_test_model_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_relaxed_8();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_relaxed_8) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_8());
}

TEST_F(DynamicOutputShapeTest, slice_relaxed_8) {
    Execute(device, ::generated_tests::slice::get_test_model_relaxed_8(), true);
}

TEST_F(ValidationTest, slice_relaxed_8) {
    const Model model = createModel(::generated_tests::slice::get_test_model_relaxed_8());
    const Request request = createRequest(::generated_tests::slice::get_test_model_relaxed_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_float16_8();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_float16_8) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_8());
}

TEST_F(DynamicOutputShapeTest, slice_float16_8) {
    Execute(device, ::generated_tests::slice::get_test_model_float16_8(), true);
}

TEST_F(ValidationTest, slice_float16_8) {
    const Model model = createModel(::generated_tests::slice::get_test_model_float16_8());
    const Request request = createRequest(::generated_tests::slice::get_test_model_float16_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_zero_sized();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_zero_sized) {
    Execute(device, ::generated_tests::slice::get_test_model_zero_sized());
}

TEST_F(DynamicOutputShapeTest, slice_zero_sized) {
    Execute(device, ::generated_tests::slice::get_test_model_zero_sized(), true);
}

TEST_F(ValidationTest, slice_zero_sized) {
    const Model model = createModel(::generated_tests::slice::get_test_model_zero_sized());
    const Request request = createRequest(::generated_tests::slice::get_test_model_zero_sized());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_zero_sized_relaxed();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_zero_sized_relaxed) {
    Execute(device, ::generated_tests::slice::get_test_model_zero_sized_relaxed());
}

TEST_F(DynamicOutputShapeTest, slice_zero_sized_relaxed) {
    Execute(device, ::generated_tests::slice::get_test_model_zero_sized_relaxed(), true);
}

TEST_F(ValidationTest, slice_zero_sized_relaxed) {
    const Model model = createModel(::generated_tests::slice::get_test_model_zero_sized_relaxed());
    const Request request = createRequest(::generated_tests::slice::get_test_model_zero_sized_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_zero_sized_quant8();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_zero_sized_quant8) {
    Execute(device, ::generated_tests::slice::get_test_model_zero_sized_quant8());
}

TEST_F(DynamicOutputShapeTest, slice_zero_sized_quant8) {
    Execute(device, ::generated_tests::slice::get_test_model_zero_sized_quant8(), true);
}

TEST_F(ValidationTest, slice_zero_sized_quant8) {
    const Model model = createModel(::generated_tests::slice::get_test_model_zero_sized_quant8());
    const Request request = createRequest(::generated_tests::slice::get_test_model_zero_sized_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice


namespace generated_tests::slice {

const ::test_helper::TestModel& get_test_model_zero_sized_float16();

} // namespace generated_tests::slice

namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice {

TEST_F(GeneratedTest, slice_zero_sized_float16) {
    Execute(device, ::generated_tests::slice::get_test_model_zero_sized_float16());
}

TEST_F(DynamicOutputShapeTest, slice_zero_sized_float16) {
    Execute(device, ::generated_tests::slice::get_test_model_zero_sized_float16(), true);
}

TEST_F(ValidationTest, slice_zero_sized_float16) {
    const Model model = createModel(::generated_tests::slice::get_test_model_zero_sized_float16());
    const Request request = createRequest(::generated_tests::slice::get_test_model_zero_sized_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::slice

