// Generated from lstm.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::lstm {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, lstm) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, lstm) { execute(get_test_model()); }

} // namespace generated_tests::lstm

TEST_AVAILABLE_SINCE(V1_0, lstm, generated_tests::lstm::get_test_model());


namespace generated_tests::lstm {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, lstm_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, lstm_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::lstm

TEST_AVAILABLE_SINCE(V1_0, lstm_all_inputs_as_internal, generated_tests::lstm::get_test_model_all_inputs_as_internal());

