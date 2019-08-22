// Generated from neg.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::neg {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::neg

namespace android::hardware::neuralnetworks::V1_2::generated_tests::neg {

TEST_F(GeneratedTest, neg) {
    Execute(device, ::generated_tests::neg::get_test_model());
}

TEST_F(DynamicOutputShapeTest, neg) {
    Execute(device, ::generated_tests::neg::get_test_model(), true);
}

TEST_F(ValidationTest, neg) {
    const Model model = createModel(::generated_tests::neg::get_test_model());
    const Request request = createRequest(::generated_tests::neg::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::neg


namespace generated_tests::neg {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::neg

namespace android::hardware::neuralnetworks::V1_2::generated_tests::neg {

TEST_F(GeneratedTest, neg_relaxed) {
    Execute(device, ::generated_tests::neg::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, neg_relaxed) {
    Execute(device, ::generated_tests::neg::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, neg_relaxed) {
    const Model model = createModel(::generated_tests::neg::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::neg::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::neg


namespace generated_tests::neg {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::neg

namespace android::hardware::neuralnetworks::V1_2::generated_tests::neg {

TEST_F(GeneratedTest, neg_float16) {
    Execute(device, ::generated_tests::neg::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, neg_float16) {
    Execute(device, ::generated_tests::neg::get_test_model_float16(), true);
}

TEST_F(ValidationTest, neg_float16) {
    const Model model = createModel(::generated_tests::neg::get_test_model_float16());
    const Request request = createRequest(::generated_tests::neg::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::neg


namespace generated_tests::neg {

const ::test_helper::TestModel& get_test_model_int32();

} // namespace generated_tests::neg

namespace android::hardware::neuralnetworks::V1_2::generated_tests::neg {

TEST_F(GeneratedTest, neg_int32) {
    Execute(device, ::generated_tests::neg::get_test_model_int32());
}

TEST_F(DynamicOutputShapeTest, neg_int32) {
    Execute(device, ::generated_tests::neg::get_test_model_int32(), true);
}

TEST_F(ValidationTest, neg_int32) {
    const Model model = createModel(::generated_tests::neg::get_test_model_int32());
    const Request request = createRequest(::generated_tests::neg::get_test_model_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::neg

