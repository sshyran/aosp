// Generated from topk_v2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model());
}

TEST_F(DynamicOutputShapeTest, topk_v2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model(), true);
}

TEST_F(ValidationTest, topk_v2) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, topk_v2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, topk_v2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16(), true);
}

TEST_F(ValidationTest, topk_v2_float16) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, topk_v2_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, topk_v2_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_2(), true);
}

TEST_F(ValidationTest, topk_v2_2) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_2());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_2();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, topk_v2_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, topk_v2_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_2) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, topk_v2_float16_2) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_2();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_2());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_all_inputs_as_internal_2) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_2(), true);
}

TEST_F(ValidationTest, topk_v2_float16_all_inputs_as_internal_2) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_2());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, topk_v2_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_3(), true);
}

TEST_F(ValidationTest, topk_v2_3) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_3());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_3();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, topk_v2_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, topk_v2_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_3();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_3(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_3) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_3());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_3();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_3());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_3(), true);
}

TEST_F(ValidationTest, topk_v2_float16_3) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_3());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_3();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_3());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_all_inputs_as_internal_3) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_3(), true);
}

TEST_F(ValidationTest, topk_v2_float16_all_inputs_as_internal_3) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_3());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_4();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_4());
}

TEST_F(DynamicOutputShapeTest, topk_v2_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_4(), true);
}

TEST_F(ValidationTest, topk_v2_4) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_4());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_4();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, topk_v2_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, topk_v2_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_4();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_4(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_4) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_4());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_4();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_4());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_4(), true);
}

TEST_F(ValidationTest, topk_v2_float16_4) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_4());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_4();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_4());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_all_inputs_as_internal_4) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_4(), true);
}

TEST_F(ValidationTest, topk_v2_float16_all_inputs_as_internal_4) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_4());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_5();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_5());
}

TEST_F(DynamicOutputShapeTest, topk_v2_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_5(), true);
}

TEST_F(ValidationTest, topk_v2_5) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_5());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal_5();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, topk_v2_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, topk_v2_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_5();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_5());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_5(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_5) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_5());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_5();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_5());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_5(), true);
}

TEST_F(ValidationTest, topk_v2_float16_5) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_5());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal_5();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_5());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_all_inputs_as_internal_5) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_5(), true);
}

TEST_F(ValidationTest, topk_v2_float16_all_inputs_as_internal_5) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_5());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_all_inputs_as_internal_5());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_6();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_6) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_6());
}

TEST_F(DynamicOutputShapeTest, topk_v2_6) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_6(), true);
}

TEST_F(ValidationTest, topk_v2_6) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_6());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_relaxed_6();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_relaxed_6) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_6());
}

TEST_F(DynamicOutputShapeTest, topk_v2_relaxed_6) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_relaxed_6(), true);
}

TEST_F(ValidationTest, topk_v2_relaxed_6) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_relaxed_6());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_relaxed_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2


namespace generated_tests::topk_v2 {

const ::test_helper::TestModel& get_test_model_float16_6();

} // namespace generated_tests::topk_v2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2 {

TEST_F(GeneratedTest, topk_v2_float16_6) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_6());
}

TEST_F(DynamicOutputShapeTest, topk_v2_float16_6) {
    Execute(device, ::generated_tests::topk_v2::get_test_model_float16_6(), true);
}

TEST_F(ValidationTest, topk_v2_float16_6) {
    const Model model = createModel(::generated_tests::topk_v2::get_test_model_float16_6());
    const Request request = createRequest(::generated_tests::topk_v2::get_test_model_float16_6());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::topk_v2

