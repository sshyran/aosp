// clang-format off
// Generated file (from: resize_bilinear.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace resize_bilinear {
// Generated resize_bilinear test
#include "generated/examples/resize_bilinear.example.cpp"
// Generated model constructor
#include "generated/models/resize_bilinear.model.cpp"
} // namespace resize_bilinear

TEST_F(GeneratedTests, resize_bilinear) {
    execute(resize_bilinear::CreateModel,
            resize_bilinear::is_ignored,
            resize_bilinear::examples);
}

