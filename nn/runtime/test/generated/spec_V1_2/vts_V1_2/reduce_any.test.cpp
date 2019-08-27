// Generated from reduce_any.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::reduce_any {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::reduce_any

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any {

TEST_F(GeneratedTest, reduce_any) {
    Execute(device, ::generated_tests::reduce_any::get_test_model());
}

TEST_F(DynamicOutputShapeTest, reduce_any) {
    Execute(device, ::generated_tests::reduce_any::get_test_model(), true);
}

TEST_F(ValidationTest, reduce_any) {
    const Model model = createModel(::generated_tests::reduce_any::get_test_model());
    const Request request = createRequest(::generated_tests::reduce_any::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any


namespace generated_tests::reduce_any {

const ::test_helper::TestModel& get_test_model_2();

} // namespace generated_tests::reduce_any

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any {

TEST_F(GeneratedTest, reduce_any_2) {
    Execute(device, ::generated_tests::reduce_any::get_test_model_2());
}

TEST_F(DynamicOutputShapeTest, reduce_any_2) {
    Execute(device, ::generated_tests::reduce_any::get_test_model_2(), true);
}

TEST_F(ValidationTest, reduce_any_2) {
    const Model model = createModel(::generated_tests::reduce_any::get_test_model_2());
    const Request request = createRequest(::generated_tests::reduce_any::get_test_model_2());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any


namespace generated_tests::reduce_any {

const ::test_helper::TestModel& get_test_model_3();

} // namespace generated_tests::reduce_any

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any {

TEST_F(GeneratedTest, reduce_any_3) {
    Execute(device, ::generated_tests::reduce_any::get_test_model_3());
}

TEST_F(DynamicOutputShapeTest, reduce_any_3) {
    Execute(device, ::generated_tests::reduce_any::get_test_model_3(), true);
}

TEST_F(ValidationTest, reduce_any_3) {
    const Model model = createModel(::generated_tests::reduce_any::get_test_model_3());
    const Request request = createRequest(::generated_tests::reduce_any::get_test_model_3());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_any

