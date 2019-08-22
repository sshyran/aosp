// Generated from lstm_state2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::lstm_state2 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, lstm_state2) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, lstm_state2) { execute(get_test_model()); }

} // namespace generated_tests::lstm_state2

TEST_AVAILABLE_SINCE(V1_0, lstm_state2, generated_tests::lstm_state2::get_test_model());


namespace generated_tests::lstm_state2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, lstm_state2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, lstm_state2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::lstm_state2

TEST_AVAILABLE_SINCE(V1_0, lstm_state2_all_inputs_as_internal, generated_tests::lstm_state2::get_test_model_all_inputs_as_internal());

