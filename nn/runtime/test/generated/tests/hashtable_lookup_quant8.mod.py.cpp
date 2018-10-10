// clang-format off
// Generated file (from: hashtable_lookup_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace hashtable_lookup_quant8 {
// Generated hashtable_lookup_quant8 test
#include "generated/examples/hashtable_lookup_quant8.example.cpp"
// Generated model constructor
#include "generated/models/hashtable_lookup_quant8.model.cpp"
} // namespace hashtable_lookup_quant8

TEST_F(GeneratedTests, hashtable_lookup_quant8) {
    execute(hashtable_lookup_quant8::CreateModel,
            hashtable_lookup_quant8::is_ignored,
            hashtable_lookup_quant8::examples);
}

