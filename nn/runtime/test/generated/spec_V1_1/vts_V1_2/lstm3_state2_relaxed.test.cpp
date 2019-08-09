// Generated from lstm3_state2_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::lstm3_state2_relaxed {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::lstm3_state2_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lstm3_state2_relaxed {

TEST_F(GeneratedTest, lstm3_state2_relaxed) {
    Execute(device, ::generated_tests::lstm3_state2_relaxed::get_test_model());
}

TEST_F(DynamicOutputShapeTest, lstm3_state2_relaxed) {
    Execute(device, ::generated_tests::lstm3_state2_relaxed::get_test_model(), true);
}

TEST_F(ValidationTest, lstm3_state2_relaxed) {
    const Model model = createModel(::generated_tests::lstm3_state2_relaxed::get_test_model());
    const Request request = createRequest(::generated_tests::lstm3_state2_relaxed::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lstm3_state2_relaxed


namespace generated_tests::lstm3_state2_relaxed {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::lstm3_state2_relaxed

namespace android::hardware::neuralnetworks::V1_2::generated_tests::lstm3_state2_relaxed {

TEST_F(GeneratedTest, lstm3_state2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::lstm3_state2_relaxed::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, lstm3_state2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::lstm3_state2_relaxed::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, lstm3_state2_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::lstm3_state2_relaxed::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::lstm3_state2_relaxed::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::lstm3_state2_relaxed

