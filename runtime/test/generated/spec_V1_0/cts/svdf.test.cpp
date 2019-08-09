// Generated from svdf.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::svdf {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, svdf) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, svdf) { execute(get_test_model()); }

} // namespace generated_tests::svdf

TEST_AVAILABLE_SINCE(V1_0, svdf, generated_tests::svdf::get_test_model());


namespace generated_tests::svdf {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, svdf_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, svdf_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::svdf

TEST_AVAILABLE_SINCE(V1_0, svdf_all_inputs_as_internal, generated_tests::svdf::get_test_model_all_inputs_as_internal());

