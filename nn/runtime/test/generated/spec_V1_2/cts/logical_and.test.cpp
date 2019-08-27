// Generated from logical_and.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::logical_and {

const ::test_helper::TestModel& get_test_model_simple();

TEST_F(GeneratedTests, logical_and_simple) { execute(get_test_model_simple()); }

TEST_F(DynamicOutputShapeTest, logical_and_simple) { execute(get_test_model_simple()); }

} // namespace generated_tests::logical_and

TEST_AVAILABLE_SINCE(V1_2, logical_and_simple, generated_tests::logical_and::get_test_model_simple());


namespace generated_tests::logical_and {

const ::test_helper::TestModel& get_test_model_broadcast();

TEST_F(GeneratedTests, logical_and_broadcast) { execute(get_test_model_broadcast()); }

TEST_F(DynamicOutputShapeTest, logical_and_broadcast) { execute(get_test_model_broadcast()); }

} // namespace generated_tests::logical_and

TEST_AVAILABLE_SINCE(V1_2, logical_and_broadcast, generated_tests::logical_and::get_test_model_broadcast());

