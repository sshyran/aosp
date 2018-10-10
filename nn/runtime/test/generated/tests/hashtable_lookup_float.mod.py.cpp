// clang-format off
// Generated file (from: hashtable_lookup_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace hashtable_lookup_float {
// Generated hashtable_lookup_float test
#include "generated/examples/hashtable_lookup_float.example.cpp"
// Generated model constructor
#include "generated/models/hashtable_lookup_float.model.cpp"
} // namespace hashtable_lookup_float

TEST_F(GeneratedTests, hashtable_lookup_float) {
    execute(hashtable_lookup_float::CreateModel,
            hashtable_lookup_float::is_ignored,
            hashtable_lookup_float::examples);
}

