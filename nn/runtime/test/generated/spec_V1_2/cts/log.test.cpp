// Generated from log.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::log {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, log) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, log) { execute(get_test_model()); }

} // namespace generated_tests::log

TEST_AVAILABLE_SINCE(V1_2, log, generated_tests::log::get_test_model());


namespace generated_tests::log {

const ::test_helper::TestModel& get_test_model_relaxed();

TEST_F(GeneratedTests, log_relaxed) { execute(get_test_model_relaxed()); }

TEST_F(DynamicOutputShapeTest, log_relaxed) { execute(get_test_model_relaxed()); }

} // namespace generated_tests::log


namespace generated_tests::log {

const ::test_helper::TestModel& get_test_model_float16();

TEST_F(GeneratedTests, log_float16) { execute(get_test_model_float16()); }

TEST_F(DynamicOutputShapeTest, log_float16) { execute(get_test_model_float16()); }

} // namespace generated_tests::log

TEST_AVAILABLE_SINCE(V1_2, log_float16, generated_tests::log::get_test_model_float16());

