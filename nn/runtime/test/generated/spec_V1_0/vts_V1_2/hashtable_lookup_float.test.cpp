// Generated from hashtable_lookup_float.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::hashtable_lookup_float {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::hashtable_lookup_float

namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float {

TEST_F(GeneratedTest, hashtable_lookup_float) {
    Execute(device, ::generated_tests::hashtable_lookup_float::get_test_model());
}

TEST_F(DynamicOutputShapeTest, hashtable_lookup_float) {
    Execute(device, ::generated_tests::hashtable_lookup_float::get_test_model(), true);
}

TEST_F(ValidationTest, hashtable_lookup_float) {
    const Model model = createModel(::generated_tests::hashtable_lookup_float::get_test_model());
    const Request request = createRequest(::generated_tests::hashtable_lookup_float::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float


namespace generated_tests::hashtable_lookup_float {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::hashtable_lookup_float

namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float {

TEST_F(GeneratedTest, hashtable_lookup_float_all_inputs_as_internal) {
    Execute(device, ::generated_tests::hashtable_lookup_float::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, hashtable_lookup_float_all_inputs_as_internal) {
    Execute(device, ::generated_tests::hashtable_lookup_float::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, hashtable_lookup_float_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::hashtable_lookup_float::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::hashtable_lookup_float::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float

