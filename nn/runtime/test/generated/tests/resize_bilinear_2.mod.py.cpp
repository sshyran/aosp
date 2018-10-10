// clang-format off
// Generated file (from: resize_bilinear_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace resize_bilinear_2 {
// Generated resize_bilinear_2 test
#include "generated/examples/resize_bilinear_2.example.cpp"
// Generated model constructor
#include "generated/models/resize_bilinear_2.model.cpp"
} // namespace resize_bilinear_2

TEST_F(GeneratedTests, resize_bilinear_2) {
    execute(resize_bilinear_2::CreateModel,
            resize_bilinear_2::is_ignored,
            resize_bilinear_2::examples);
}

