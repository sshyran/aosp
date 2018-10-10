// clang-format off
// Generated file (from: lstm.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm {
// Generated lstm test
#include "generated/examples/lstm.example.cpp"
// Generated model constructor
#include "generated/models/lstm.model.cpp"
} // namespace lstm

TEST_F(GeneratedTests, lstm) {
    execute(lstm::CreateModel,
            lstm::is_ignored,
            lstm::examples);
}

