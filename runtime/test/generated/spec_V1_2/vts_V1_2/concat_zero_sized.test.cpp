// Generated from concat_zero_sized.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::concat_zero_sized {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

TEST_F(GeneratedTest, concat_zero_sized) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model());
}

TEST_F(DynamicOutputShapeTest, concat_zero_sized) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model(), true);
}

TEST_F(ValidationTest, concat_zero_sized) {
    const Model model = createModel(::generated_tests::concat_zero_sized::get_test_model());
    const Request request = createRequest(::generated_tests::concat_zero_sized::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized


namespace generated_tests::concat_zero_sized {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

TEST_F(GeneratedTest, concat_zero_sized_relaxed) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, concat_zero_sized_relaxed) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, concat_zero_sized_relaxed) {
    const Model model = createModel(::generated_tests::concat_zero_sized::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::concat_zero_sized::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized


namespace generated_tests::concat_zero_sized {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

TEST_F(GeneratedTest, concat_zero_sized_quant8) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, concat_zero_sized_quant8) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, concat_zero_sized_quant8) {
    const Model model = createModel(::generated_tests::concat_zero_sized::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::concat_zero_sized::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized


namespace generated_tests::concat_zero_sized {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

TEST_F(GeneratedTest, concat_zero_sized_float16) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, concat_zero_sized_float16) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_float16(), true);
}

TEST_F(ValidationTest, concat_zero_sized_float16) {
    const Model model = createModel(::generated_tests::concat_zero_sized::get_test_model_float16());
    const Request request = createRequest(::generated_tests::concat_zero_sized::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized


namespace generated_tests::concat_zero_sized {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

TEST_F(GeneratedTest, concat_zero_sized_2) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, concat_zero_sized_2) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_2(), true);
}

TEST_F(ValidationTest, concat_zero_sized_2) {
    const Model model = createModel(::generated_tests::concat_zero_sized::get_test_model_2());
    const Request request = createRequest(::generated_tests::concat_zero_sized::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized


namespace generated_tests::concat_zero_sized {

const ::test_helper::TestModel& get_test_model_relaxed_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

TEST_F(GeneratedTest, concat_zero_sized_relaxed_2) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_relaxed_2());
}

TEST_F(DynamicOutputShapeTest, concat_zero_sized_relaxed_2) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_relaxed_2(), true);
}

TEST_F(ValidationTest, concat_zero_sized_relaxed_2) {
    const Model model = createModel(::generated_tests::concat_zero_sized::get_test_model_relaxed_2());
    const Request request = createRequest(::generated_tests::concat_zero_sized::get_test_model_relaxed_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized


namespace generated_tests::concat_zero_sized {

const ::test_helper::TestModel& get_test_model_quant8_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

TEST_F(GeneratedTest, concat_zero_sized_quant8_2) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_quant8_2());
}

TEST_F(DynamicOutputShapeTest, concat_zero_sized_quant8_2) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_quant8_2(), true);
}

TEST_F(ValidationTest, concat_zero_sized_quant8_2) {
    const Model model = createModel(::generated_tests::concat_zero_sized::get_test_model_quant8_2());
    const Request request = createRequest(::generated_tests::concat_zero_sized::get_test_model_quant8_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized


namespace generated_tests::concat_zero_sized {

const ::test_helper::TestModel& get_test_model_float16_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

TEST_F(GeneratedTest, concat_zero_sized_float16_2) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_float16_2());
}

TEST_F(DynamicOutputShapeTest, concat_zero_sized_float16_2) {
    Execute(device, ::generated_tests::concat_zero_sized::get_test_model_float16_2(), true);
}

TEST_F(ValidationTest, concat_zero_sized_float16_2) {
    const Model model = createModel(::generated_tests::concat_zero_sized::get_test_model_float16_2());
    const Request request = createRequest(::generated_tests::concat_zero_sized::get_test_model_float16_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

