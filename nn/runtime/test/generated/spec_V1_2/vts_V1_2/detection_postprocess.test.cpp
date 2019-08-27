// Generated from detection_postprocess.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_regular();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_regular) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_regular) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular(), true);
}

TEST_F(ValidationTest, detection_postprocess_regular) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_regular());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_regular());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_regular_all_inputs_as_internal();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_regular_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_regular_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, detection_postprocess_regular_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_regular_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_regular_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_regular_relaxed();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_regular_relaxed) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_relaxed());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_regular_relaxed) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_relaxed(), true);
}

TEST_F(ValidationTest, detection_postprocess_regular_relaxed) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_regular_relaxed());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_regular_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_regular_relaxed_all_inputs_as_internal();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_regular_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_regular_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, detection_postprocess_regular_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_regular_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_regular_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_regular_float16();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_regular_float16) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_float16());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_regular_float16) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_float16(), true);
}

TEST_F(ValidationTest, detection_postprocess_regular_float16) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_regular_float16());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_regular_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_regular_float16_all_inputs_as_internal();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_regular_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_regular_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_regular_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, detection_postprocess_regular_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_regular_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_regular_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model(), true);
}

TEST_F(ValidationTest, detection_postprocess) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, detection_postprocess_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_relaxed) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_relaxed) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, detection_postprocess_relaxed) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, detection_postprocess_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_float16) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_float16) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16(), true);
}

TEST_F(ValidationTest, detection_postprocess_float16) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_float16());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, detection_postprocess_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_2(), true);
}

TEST_F(ValidationTest, detection_postprocess_2) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_2());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, detection_postprocess_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_relaxed_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_relaxed_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, detection_postprocess_relaxed_2) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, detection_postprocess_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_float16_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_float16_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, detection_postprocess_float16_2) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, detection_postprocess_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_3(), true);
}

TEST_F(ValidationTest, detection_postprocess_3) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_3());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, detection_postprocess_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_relaxed_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_relaxed_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_relaxed_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_3(), true);
}

TEST_F(ValidationTest, detection_postprocess_relaxed_3) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_relaxed_3());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, detection_postprocess_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_float16_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_float16_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_3());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_float16_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_3(), true);
}

TEST_F(ValidationTest, detection_postprocess_float16_3) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_float16_3());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess


namespace generated_tests::detection_postprocess {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

TEST_F(GeneratedTest, detection_postprocess_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, detection_postprocess_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, detection_postprocess_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::detection_postprocess::get_test_model_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

