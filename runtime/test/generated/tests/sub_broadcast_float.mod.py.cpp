// clang-format off
// Generated file (from: sub_broadcast_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sub_broadcast_float {
// Generated sub_broadcast_float test
#include "generated/examples/sub_broadcast_float.example.cpp"
// Generated model constructor
#include "generated/models/sub_broadcast_float.model.cpp"
} // namespace sub_broadcast_float

TEST_F(GeneratedTests, sub_broadcast_float) {
    execute(sub_broadcast_float::CreateModel,
            sub_broadcast_float::is_ignored,
            sub_broadcast_float::examples);
}

