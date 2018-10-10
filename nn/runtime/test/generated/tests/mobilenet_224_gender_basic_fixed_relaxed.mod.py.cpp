// clang-format off
// Generated file (from: mobilenet_224_gender_basic_fixed_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mobilenet_224_gender_basic_fixed_relaxed {
// Generated mobilenet_224_gender_basic_fixed_relaxed test
#include "generated/examples/mobilenet_224_gender_basic_fixed_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/mobilenet_224_gender_basic_fixed_relaxed.model.cpp"
} // namespace mobilenet_224_gender_basic_fixed_relaxed

TEST_F(GeneratedTests, mobilenet_224_gender_basic_fixed_relaxed) {
    execute(mobilenet_224_gender_basic_fixed_relaxed::CreateModel,
            mobilenet_224_gender_basic_fixed_relaxed::is_ignored,
            mobilenet_224_gender_basic_fixed_relaxed::examples);
}

