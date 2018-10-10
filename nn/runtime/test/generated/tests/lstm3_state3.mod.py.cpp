// clang-format off
// Generated file (from: lstm3_state3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm3_state3 {
// Generated lstm3_state3 test
#include "generated/examples/lstm3_state3.example.cpp"
// Generated model constructor
#include "generated/models/lstm3_state3.model.cpp"
} // namespace lstm3_state3

TEST_F(GeneratedTests, lstm3_state3) {
    execute(lstm3_state3::CreateModel,
            lstm3_state3::is_ignored,
            lstm3_state3::examples);
}

