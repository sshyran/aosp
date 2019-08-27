// Generated from log_softmax.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax) {
    Execute(device, ::generated_tests::log_softmax::get_test_model());
}

TEST_F(DynamicOutputShapeTest, log_softmax) {
    Execute(device, ::generated_tests::log_softmax::get_test_model(), true);
}

TEST_F(ValidationTest, log_softmax) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_relaxed) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, log_softmax_relaxed) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, log_softmax_relaxed) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_float16) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, log_softmax_float16) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_float16(), true);
}

TEST_F(ValidationTest, log_softmax_float16) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_float16());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_2) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, log_softmax_2) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_2(), true);
}

TEST_F(ValidationTest, log_softmax_2) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_2());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_relaxed_2) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, log_softmax_relaxed_2) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, log_softmax_relaxed_2) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_float16_2) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, log_softmax_float16_2) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, log_softmax_float16_2) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_3) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, log_softmax_3) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_3(), true);
}

TEST_F(ValidationTest, log_softmax_3) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_3());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_relaxed_3();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_relaxed_3) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_relaxed_3());
}

TEST_F(DynamicOutputShapeTest, log_softmax_relaxed_3) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_relaxed_3(), true);
}

TEST_F(ValidationTest, log_softmax_relaxed_3) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_relaxed_3());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_relaxed_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_float16_3();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_float16_3) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_float16_3());
}

TEST_F(DynamicOutputShapeTest, log_softmax_float16_3) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_float16_3(), true);
}

TEST_F(ValidationTest, log_softmax_float16_3) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_float16_3());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_float16_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_4();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_4) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_4());
}

TEST_F(DynamicOutputShapeTest, log_softmax_4) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_4(), true);
}

TEST_F(ValidationTest, log_softmax_4) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_4());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_relaxed_4();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_relaxed_4) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_relaxed_4());
}

TEST_F(DynamicOutputShapeTest, log_softmax_relaxed_4) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_relaxed_4(), true);
}

TEST_F(ValidationTest, log_softmax_relaxed_4) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_relaxed_4());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_relaxed_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax


namespace generated_tests::log_softmax {

const ::test_helper::TestModel& get_test_model_float16_4();

} // namespace generated_tests::log_softmax

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax {

TEST_F(GeneratedTest, log_softmax_float16_4) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_float16_4());
}

TEST_F(DynamicOutputShapeTest, log_softmax_float16_4) {
    Execute(device, ::generated_tests::log_softmax::get_test_model_float16_4(), true);
}

TEST_F(ValidationTest, log_softmax_float16_4) {
    const Model model = createModel(::generated_tests::log_softmax::get_test_model_float16_4());
    const Request request = createRequest(::generated_tests::log_softmax::get_test_model_float16_4());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log_softmax

