// Generated from svdf_bias_present.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::svdf_bias_present {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, svdf_bias_present) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, svdf_bias_present) { execute(get_test_model()); }

} // namespace generated_tests::svdf_bias_present

TEST_AVAILABLE_SINCE(V1_0, svdf_bias_present, generated_tests::svdf_bias_present::get_test_model());


namespace generated_tests::svdf_bias_present {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, svdf_bias_present_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, svdf_bias_present_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::svdf_bias_present

TEST_AVAILABLE_SINCE(V1_0, svdf_bias_present_all_inputs_as_internal, generated_tests::svdf_bias_present::get_test_model_all_inputs_as_internal());

