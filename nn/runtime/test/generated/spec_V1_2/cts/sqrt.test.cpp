// Generated from sqrt.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::sqrt {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, sqrt) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, sqrt) { execute(get_test_model()); }

} // namespace generated_tests::sqrt

TEST_AVAILABLE_SINCE(V1_2, sqrt, generated_tests::sqrt::get_test_model());


namespace generated_tests::sqrt {

const ::test_helper::TestModel& get_test_model_relaxed();

TEST_F(GeneratedTests, sqrt_relaxed) { execute(get_test_model_relaxed()); }

TEST_F(DynamicOutputShapeTest, sqrt_relaxed) { execute(get_test_model_relaxed()); }

} // namespace generated_tests::sqrt


namespace generated_tests::sqrt {

const ::test_helper::TestModel& get_test_model_float16();

TEST_F(GeneratedTests, sqrt_float16) { execute(get_test_model_float16()); }

TEST_F(DynamicOutputShapeTest, sqrt_float16) { execute(get_test_model_float16()); }

} // namespace generated_tests::sqrt

TEST_AVAILABLE_SINCE(V1_2, sqrt_float16, generated_tests::sqrt::get_test_model_float16());

