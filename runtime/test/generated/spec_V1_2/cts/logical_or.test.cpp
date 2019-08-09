// Generated from logical_or.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::logical_or {

const ::test_helper::TestModel& get_test_model_simple();

TEST_F(GeneratedTests, logical_or_simple) { execute(get_test_model_simple()); }

TEST_F(DynamicOutputShapeTest, logical_or_simple) { execute(get_test_model_simple()); }

} // namespace generated_tests::logical_or

TEST_AVAILABLE_SINCE(V1_2, logical_or_simple, generated_tests::logical_or::get_test_model_simple());


namespace generated_tests::logical_or {

const ::test_helper::TestModel& get_test_model_broadcast();

TEST_F(GeneratedTests, logical_or_broadcast) { execute(get_test_model_broadcast()); }

TEST_F(DynamicOutputShapeTest, logical_or_broadcast) { execute(get_test_model_broadcast()); }

} // namespace generated_tests::logical_or

TEST_AVAILABLE_SINCE(V1_2, logical_or_broadcast, generated_tests::logical_or::get_test_model_broadcast());

