// clang-format off
// Generated file (from: strided_slice_invalid_output_dims.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace strided_slice_invalid_output_dims {
// Generated strided_slice_invalid_output_dims test
#include "generated/examples/strided_slice_invalid_output_dims.example.cpp"
// Generated model constructor
#include "generated/models/strided_slice_invalid_output_dims.model.cpp"
} // namespace strided_slice_invalid_output_dims

TEST_F(GeneratedValidationTests, strided_slice_invalid_output_dims) {
    execute(strided_slice_invalid_output_dims::CreateModel,
            strided_slice_invalid_output_dims::is_ignored,
            strided_slice_invalid_output_dims::get_examples());
}

TEST_F(GeneratedValidationTests, strided_slice_invalid_output_dims_dynamic_output_shape) {
    execute(strided_slice_invalid_output_dims::CreateModel_dynamic_output_shape,
            strided_slice_invalid_output_dims::is_ignored_dynamic_output_shape,
            strided_slice_invalid_output_dims::get_examples_dynamic_output_shape());
}

