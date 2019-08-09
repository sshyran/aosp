// Generated from svdf2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::svdf2 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, svdf2) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, svdf2) { execute(get_test_model()); }

} // namespace generated_tests::svdf2

TEST_AVAILABLE_SINCE(V1_0, svdf2, generated_tests::svdf2::get_test_model());


namespace generated_tests::svdf2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, svdf2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, svdf2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::svdf2

TEST_AVAILABLE_SINCE(V1_0, svdf2_all_inputs_as_internal, generated_tests::svdf2::get_test_model_all_inputs_as_internal());

