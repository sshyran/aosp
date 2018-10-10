// clang-format off
// Generated file (from: svdf2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace svdf2 {
// Generated svdf2 test
#include "generated/examples/svdf2.example.cpp"
// Generated model constructor
#include "generated/models/svdf2.model.cpp"
} // namespace svdf2

TEST_F(GeneratedTests, svdf2) {
    execute(svdf2::CreateModel,
            svdf2::is_ignored,
            svdf2::examples);
}

