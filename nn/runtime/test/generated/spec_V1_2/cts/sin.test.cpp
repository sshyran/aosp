// Generated from sin.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::sin {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, sin) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, sin) { execute(get_test_model()); }

} // namespace generated_tests::sin

TEST_AVAILABLE_SINCE(V1_2, sin, generated_tests::sin::get_test_model());


namespace generated_tests::sin {

const ::test_helper::TestModel& get_test_model_relaxed();

TEST_F(GeneratedTests, sin_relaxed) { execute(get_test_model_relaxed()); }

TEST_F(DynamicOutputShapeTest, sin_relaxed) { execute(get_test_model_relaxed()); }

} // namespace generated_tests::sin


namespace generated_tests::sin {

const ::test_helper::TestModel& get_test_model_float16();

TEST_F(GeneratedTests, sin_float16) { execute(get_test_model_float16()); }

TEST_F(DynamicOutputShapeTest, sin_float16) { execute(get_test_model_float16()); }

} // namespace generated_tests::sin

TEST_AVAILABLE_SINCE(V1_2, sin_float16, generated_tests::sin::get_test_model_float16());

