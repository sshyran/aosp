// Generated from lstm3_state2_float16.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::lstm3_state2_float16 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, lstm3_state2_float16) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, lstm3_state2_float16) { execute(get_test_model()); }

} // namespace generated_tests::lstm3_state2_float16

TEST_AVAILABLE_SINCE(V1_2, lstm3_state2_float16, generated_tests::lstm3_state2_float16::get_test_model());


namespace generated_tests::lstm3_state2_float16 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, lstm3_state2_float16_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, lstm3_state2_float16_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::lstm3_state2_float16

TEST_AVAILABLE_SINCE(V1_2, lstm3_state2_float16_all_inputs_as_internal, generated_tests::lstm3_state2_float16::get_test_model_all_inputs_as_internal());

