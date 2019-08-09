// Generated from lstm3_state.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::lstm3_state {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::lstm3_state

namespace android::hardware::neuralnetworks::V1_0::generated_tests::lstm3_state {

TEST_F(GeneratedTest, lstm3_state) {
    Execute(device, ::generated_tests::lstm3_state::get_test_model());
}

TEST_F(ValidationTest, lstm3_state) {
    const Model model = createModel(::generated_tests::lstm3_state::get_test_model());
    const Request request = createRequest(::generated_tests::lstm3_state::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::lstm3_state


namespace generated_tests::lstm3_state {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::lstm3_state

namespace android::hardware::neuralnetworks::V1_0::generated_tests::lstm3_state {

TEST_F(GeneratedTest, lstm3_state_all_inputs_as_internal) {
    Execute(device, ::generated_tests::lstm3_state::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, lstm3_state_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::lstm3_state::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::lstm3_state::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::lstm3_state

