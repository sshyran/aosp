// clang-format off
// Generated file (from: resize_bilinear_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace resize_bilinear_relaxed {
// Generated resize_bilinear_relaxed test
#include "generated/examples/resize_bilinear_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/resize_bilinear_relaxed.model.cpp"
} // namespace resize_bilinear_relaxed

TEST_F(GeneratedTests, resize_bilinear_relaxed) {
    execute(resize_bilinear_relaxed::CreateModel,
            resize_bilinear_relaxed::is_ignored,
            resize_bilinear_relaxed::examples);
}

