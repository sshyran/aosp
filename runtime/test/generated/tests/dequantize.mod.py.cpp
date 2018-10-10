// clang-format off
// Generated file (from: dequantize.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace dequantize {
// Generated dequantize test
#include "generated/examples/dequantize.example.cpp"
// Generated model constructor
#include "generated/models/dequantize.model.cpp"
} // namespace dequantize

TEST_F(GeneratedTests, dequantize) {
    execute(dequantize::CreateModel,
            dequantize::is_ignored,
            dequantize::examples);
}

