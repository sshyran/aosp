// Generated from rnn.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::rnn {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, rnn) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, rnn) { execute(get_test_model()); }

} // namespace generated_tests::rnn

TEST_AVAILABLE_SINCE(V1_0, rnn, generated_tests::rnn::get_test_model());


namespace generated_tests::rnn {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, rnn_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, rnn_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::rnn

TEST_AVAILABLE_SINCE(V1_0, rnn_all_inputs_as_internal, generated_tests::rnn::get_test_model_all_inputs_as_internal());

