// Generated from mobilenet_quantized.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::mobilenet_quantized {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, mobilenet_quantized) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, mobilenet_quantized) { execute(get_test_model()); }

} // namespace generated_tests::mobilenet_quantized

TEST_AVAILABLE_SINCE(V1_0, mobilenet_quantized, generated_tests::mobilenet_quantized::get_test_model());

