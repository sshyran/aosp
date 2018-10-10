// clang-format off
// Generated file (from: embedding_lookup.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace embedding_lookup {
// Generated embedding_lookup test
#include "generated/examples/embedding_lookup.example.cpp"
// Generated model constructor
#include "generated/models/embedding_lookup.model.cpp"
} // namespace embedding_lookup

TEST_F(GeneratedTests, embedding_lookup) {
    execute(embedding_lookup::CreateModel,
            embedding_lookup::is_ignored,
            embedding_lookup::examples);
}

