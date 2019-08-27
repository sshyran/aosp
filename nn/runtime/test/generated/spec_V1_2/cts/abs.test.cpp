// Generated from abs.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::abs {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, abs) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, abs) { execute(get_test_model()); }

} // namespace generated_tests::abs

TEST_AVAILABLE_SINCE(V1_2, abs, generated_tests::abs::get_test_model());


namespace generated_tests::abs {

const ::test_helper::TestModel& get_test_model_relaxed();

TEST_F(GeneratedTests, abs_relaxed) { execute(get_test_model_relaxed()); }

TEST_F(DynamicOutputShapeTest, abs_relaxed) { execute(get_test_model_relaxed()); }

} // namespace generated_tests::abs


namespace generated_tests::abs {

const ::test_helper::TestModel& get_test_model_float16();

TEST_F(GeneratedTests, abs_float16) { execute(get_test_model_float16()); }

TEST_F(DynamicOutputShapeTest, abs_float16) { execute(get_test_model_float16()); }

} // namespace generated_tests::abs

TEST_AVAILABLE_SINCE(V1_2, abs_float16, generated_tests::abs::get_test_model_float16());

