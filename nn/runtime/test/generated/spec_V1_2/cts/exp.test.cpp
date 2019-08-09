// Generated from exp.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::exp {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, exp) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, exp) { execute(get_test_model()); }

} // namespace generated_tests::exp

TEST_AVAILABLE_SINCE(V1_2, exp, generated_tests::exp::get_test_model());


namespace generated_tests::exp {

const ::test_helper::TestModel& get_test_model_relaxed();

TEST_F(GeneratedTests, exp_relaxed) { execute(get_test_model_relaxed()); }

TEST_F(DynamicOutputShapeTest, exp_relaxed) { execute(get_test_model_relaxed()); }

} // namespace generated_tests::exp


namespace generated_tests::exp {

const ::test_helper::TestModel& get_test_model_float16();

TEST_F(GeneratedTests, exp_float16) { execute(get_test_model_float16()); }

TEST_F(DynamicOutputShapeTest, exp_float16) { execute(get_test_model_float16()); }

} // namespace generated_tests::exp

TEST_AVAILABLE_SINCE(V1_2, exp_float16, generated_tests::exp::get_test_model_float16());

