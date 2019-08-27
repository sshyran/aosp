// Generated from svdf_state.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::svdf_state {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, svdf_state) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, svdf_state) { execute(get_test_model()); }

} // namespace generated_tests::svdf_state

TEST_AVAILABLE_SINCE(V1_0, svdf_state, generated_tests::svdf_state::get_test_model());


namespace generated_tests::svdf_state {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, svdf_state_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, svdf_state_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::svdf_state

TEST_AVAILABLE_SINCE(V1_0, svdf_state_all_inputs_as_internal, generated_tests::svdf_state::get_test_model_all_inputs_as_internal());

