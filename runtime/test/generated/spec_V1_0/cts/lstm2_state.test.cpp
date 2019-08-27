// Generated from lstm2_state.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::lstm2_state {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, lstm2_state) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, lstm2_state) { execute(get_test_model()); }

} // namespace generated_tests::lstm2_state

TEST_AVAILABLE_SINCE(V1_0, lstm2_state, generated_tests::lstm2_state::get_test_model());


namespace generated_tests::lstm2_state {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, lstm2_state_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, lstm2_state_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::lstm2_state

TEST_AVAILABLE_SINCE(V1_0, lstm2_state_all_inputs_as_internal, generated_tests::lstm2_state::get_test_model_all_inputs_as_internal());

