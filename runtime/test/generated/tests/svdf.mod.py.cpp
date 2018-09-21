// clang-format off
// Generated file (from: svdf.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace svdf {
// Generated svdf test
#include "generated/examples/svdf.example.cpp"
// Generated model constructor
#include "generated/models/svdf.model.cpp"
} // namespace svdf

TEST_F(GeneratedTests, svdf) {
    execute(svdf::CreateModel,
            svdf::is_ignored,
            svdf::examples);
}

