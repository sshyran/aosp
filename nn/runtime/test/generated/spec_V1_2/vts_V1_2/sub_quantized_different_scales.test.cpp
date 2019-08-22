// Generated from sub_quantized_different_scales.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_2) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_2) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_2(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_2) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_2());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_3) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_3) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_3(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_3) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_3());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_3();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_4();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_4) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_4());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_4) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_4(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_4) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_4());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_4();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_5();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_5) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_5());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_5) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_5(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_5) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_5());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_5();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_6();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_6) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_6());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_6) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_6(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_6) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_6());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_6();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_6());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_6) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_6(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_6) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_6());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_7();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_7) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_7());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_7) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_7(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_7) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_7());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_7();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_7());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_7) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_7(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_7) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_7());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_7());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_8();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_8) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_8());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_8) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_8(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_8) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_8());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_8();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_8());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_8) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_8(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_8) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_8());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_9();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_9) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_9());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_9) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_9(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_9) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_9());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_9());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_9();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_9) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_9());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_9) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_9(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_9) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_9());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_9());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_10();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_10) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_10());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_10) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_10(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_10) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_10());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_10());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_10();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_10) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_10());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_10) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_10(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_10) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_10());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_10());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_11();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_11) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_11());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_11) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_11(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_11) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_11());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_11());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_11();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_11) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_11());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_11) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_11(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_11) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_11());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_11());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_12();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_12) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_12());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_12) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_12(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_12) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_12());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_12());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_12();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_12) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_12());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_12) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_12(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_12) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_12());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_12());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_13();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_13) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_13());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_13) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_13(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_13) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_13());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_13());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_13();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_13) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_13());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_13) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_13(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_13) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_13());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_13());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_14();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_14) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_14());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_14) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_14(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_14) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_14());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_14());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_14();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_14) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_14());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_14) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_14(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_14) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_14());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_14());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_15();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_15) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_15());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_15) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_15(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_15) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_15());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_15());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_15();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_15) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_15());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_15) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_15(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_15) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_15());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_15());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_16();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_16) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_16());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_16) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_16(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_16) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_16());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_16();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_16) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_16());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_16) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_16(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_16) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_16());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_17();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_17) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_17());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_17) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_17(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_17) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_17());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_17());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_17();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_17) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_17());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_17) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_17(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_17) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_17());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_17());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_18();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_18) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_18());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_18) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_18(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_18) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_18());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_18());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_18();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_18) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_18());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_18) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_18(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_18) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_18());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_18());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_19();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_19) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_19());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_19) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_19(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_19) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_19());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_19());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_19();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_19) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_19());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_19) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_19(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_19) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_19());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_19());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_20();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_20) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_20());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_20) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_20(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_20) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_20());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_20());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_20();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_20) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_20());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_20) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_20(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_20) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_20());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_20());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_21();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_21) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_21());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_21) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_21(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_21) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_21());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_21());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_21();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_21) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_21());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_21) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_21(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_21) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_21());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_21());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_22();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_22) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_22());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_22) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_22(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_22) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_22());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_22());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_22();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_22) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_22());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_22) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_22(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_22) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_22());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_22());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_23();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_23) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_23());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_23) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_23(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_23) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_23());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_23());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_23();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_23) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_23());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_23) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_23(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_23) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_23());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_23());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_24();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_24) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_24());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_24) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_24(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_24) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_24());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_24());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_24();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_24) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_24());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_24) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_24(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_24) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_24());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_24());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_25();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_25) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_25());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_25) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_25(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_25) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_25());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_25());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_25();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_25) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_25());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_25) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_25(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_25) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_25());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_25());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_26();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_26) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_26());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_26) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_26(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_26) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_26());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_26());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_26();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_26) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_26());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_26) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_26(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_26) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_26());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_26());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_27();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_27) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_27());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_27) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_27(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_27) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_27());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_27());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_27();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_27) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_27());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_27) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_27(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_27) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_27());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_27());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_28();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_28) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_28());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_28) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_28(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_28) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_28());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_28());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_28();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_28) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_28());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_28) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_28(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_28) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_28());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_28());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_29();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_29) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_29());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_29) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_29(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_29) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_29());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_29());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_29();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_29) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_29());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_29) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_29(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_29) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_29());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_29());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_30();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_30) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_30());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_30) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_30(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_30) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_30());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_30());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_30();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_30) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_30());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_30) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_30(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_30) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_30());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_30());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_31();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_31) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_31());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_31) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_31(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_31) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_31());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_31());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_31();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_31) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_31());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_31) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_31(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_31) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_31());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_31());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_32();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_32) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_32());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_32) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_32(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_32) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_32());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_32();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_32) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_32());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_32) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_32(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_32) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_32());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_33();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_33) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_33());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_33) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_33(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_33) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_33());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_33());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_33();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_33) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_33());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_33) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_33(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_33) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_33());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_33());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_34();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_34) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_34());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_34) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_34(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_34) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_34());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_34());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_34();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_34) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_34());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_34) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_34(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_34) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_34());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_34());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_35();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_35) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_35());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_35) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_35(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_35) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_35());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_35());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_35();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_35) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_35());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_35) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_35(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_35) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_35());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_35());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_36();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_36) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_36());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_36) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_36(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_36) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_36());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_36());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_36();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_36) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_36());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_36) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_36(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_36) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_36());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_36());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_37();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_37) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_37());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_37) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_37(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_37) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_37());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_37());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_37();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_37) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_37());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_37) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_37(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_37) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_37());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_37());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_38();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_38) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_38());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_38) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_38(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_38) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_38());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_38());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_38();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_38) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_38());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_38) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_38(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_38) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_38());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_38());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_39();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_39) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_39());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_39) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_39(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_39) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_39());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_39());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_39();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_39) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_39());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_39) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_39(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_39) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_39());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_39());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_40();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_40) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_40());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_40) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_40(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_40) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_40());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_40());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_40();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_40) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_40());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_40) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_40(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_40) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_40());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_40());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_41();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_41) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_41());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_41) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_41(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_41) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_41());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_41());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_41();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_41) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_41());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_41) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_41(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_41) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_41());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_41());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_42();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_42) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_42());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_42) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_42(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_42) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_42());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_42());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_42();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_42) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_42());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_42) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_42(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_42) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_42());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_42());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_43();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_43) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_43());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_43) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_43(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_43) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_43());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_43());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_43();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_43) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_43());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_43) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_43(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_43) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_43());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_43());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_44();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_44) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_44());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_44) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_44(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_44) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_44());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_44());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_44();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_44) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_44());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_44) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_44(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_44) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_44());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_44());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_45();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_45) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_45());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_45) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_45(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_45) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_45());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_45());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_45();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_45) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_45());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_45) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_45(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_45) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_45());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_45());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_46();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_46) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_46());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_46) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_46(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_46) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_46());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_46());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_46();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_46) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_46());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_46) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_46(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_46) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_46());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_46());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_47();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_47) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_47());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_47) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_47(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_47) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_47());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_47());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_47();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_47) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_47());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_47) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_47(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_47) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_47());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_47());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_48();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_48) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_48());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_48) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_48(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_48) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_48());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_48());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_48();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_48) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_48());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_48) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_48(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_48) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_48());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_48());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_49();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_49) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_49());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_49) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_49(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_49) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_49());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_49());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_49();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_49) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_49());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_49) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_49(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_49) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_49());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_49());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_50();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_50) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_50());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_50) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_50(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_50) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_50());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_50());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_50();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_50) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_50());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_50) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_50(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_50) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_50());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_50());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_51();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_51) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_51());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_51) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_51(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_51) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_51());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_51());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_51();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_51) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_51());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_51) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_51(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_51) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_51());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_51());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_52();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_52) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_52());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_52) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_52(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_52) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_52());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_52());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_52();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_52) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_52());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_52) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_52(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_52) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_52());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_52());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_53();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_53) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_53());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_53) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_53(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_53) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_53());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_53());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_53();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_53) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_53());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_53) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_53(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_53) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_53());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_53());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_54();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_54) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_54());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_54) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_54(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_54) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_54());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_54());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_54();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_54) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_54());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_54) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_54(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_54) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_54());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_54());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_55();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_55) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_55());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_55) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_55(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_55) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_55());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_55());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_55();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_55) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_55());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_55) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_55(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_55) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_55());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_55());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_56();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_56) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_56());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_56) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_56(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_56) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_56());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_56());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_56();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_56) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_56());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_56) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_56(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_56) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_56());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_56());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_57();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_57) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_57());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_57) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_57(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_57) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_57());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_57());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_57();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_57) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_57());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_57) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_57(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_57) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_57());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_57());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_58();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_58) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_58());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_58) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_58(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_58) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_58());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_58());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_58();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_58) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_58());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_58) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_58(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_58) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_58());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_58());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_59();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_59) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_59());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_59) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_59(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_59) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_59());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_59());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_59();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_59) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_59());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_59) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_59(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_59) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_59());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_59());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_60();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_60) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_60());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_60) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_60(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_60) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_60());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_60());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_60();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_60) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_60());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_60) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_60(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_60) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_60());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_60());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_61();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_61) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_61());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_61) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_61(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_61) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_61());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_61());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_61();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_61) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_61());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_61) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_61(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_61) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_61());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_61());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_62();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_62) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_62());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_62) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_62(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_62) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_62());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_62());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_62();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_62) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_62());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_62) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_62(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_62) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_62());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_62());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_63();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_63) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_63());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_63) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_63(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_63) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_63());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_63());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_63();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_63) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_63());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_63) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_63(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_63) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_63());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_63());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_64();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_64) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_64());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_64) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_64(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_64) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_64());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_64());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales


namespace generated_tests::sub_quantized_different_scales {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_64();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

TEST_F(GeneratedTest, sub_quantized_different_scales_all_inputs_as_internal_64) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_64());
}

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_all_inputs_as_internal_64) {
    Execute(device, ::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_64(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_all_inputs_as_internal_64) {
    const Model model = createModel(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_64());
    const Request request = createRequest(::generated_tests::sub_quantized_different_scales::get_test_model_all_inputs_as_internal_64());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

