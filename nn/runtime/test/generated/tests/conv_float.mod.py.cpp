// clang-format off
// Generated file (from: conv_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_float {
// Generated conv_float test
#include "generated/examples/conv_float.example.cpp"
// Generated model constructor
#include "generated/models/conv_float.model.cpp"
} // namespace conv_float

TEST_F(GeneratedTests, conv_float) {
    execute(conv_float::CreateModel,
            conv_float::is_ignored,
            conv_float::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, conv_float_dynamic_output_shape) {
    execute(conv_float::CreateModel_dynamic_output_shape,
            conv_float::is_ignored_dynamic_output_shape,
            conv_float::get_examples_dynamic_output_shape());
}

#endif
