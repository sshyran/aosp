// clang-format off
// Generated file (from: hashtable_lookup_float_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace hashtable_lookup_float_relaxed {
// Generated hashtable_lookup_float_relaxed test
#include "generated/examples/hashtable_lookup_float_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/hashtable_lookup_float_relaxed.model.cpp"
} // namespace hashtable_lookup_float_relaxed

TEST_F(GeneratedTests, hashtable_lookup_float_relaxed) {
    execute(hashtable_lookup_float_relaxed::CreateModel,
            hashtable_lookup_float_relaxed::is_ignored,
            hashtable_lookup_float_relaxed::examples);
}

