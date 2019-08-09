// Generated from lstm2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::lstm2 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, lstm2) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, lstm2) { execute(get_test_model()); }

} // namespace generated_tests::lstm2

TEST_AVAILABLE_SINCE(V1_0, lstm2, generated_tests::lstm2::get_test_model());


namespace generated_tests::lstm2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, lstm2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, lstm2_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::lstm2

TEST_AVAILABLE_SINCE(V1_0, lstm2_all_inputs_as_internal, generated_tests::lstm2::get_test_model_all_inputs_as_internal());

