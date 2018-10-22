// clang-format off
// Generated file (from: tile_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace tile_3 {
// Generated tile_3 test
#include "generated/examples/tile_3.example.cpp"
// Generated model constructor
#include "generated/models/tile_3.model.cpp"
} // namespace tile_3

TEST_F(GeneratedTests, tile_3) {
    execute(tile_3::CreateModel,
            tile_3::is_ignored,
            tile_3::examples);
}

TEST_F(GeneratedTests, tile_3_relaxed) {
    execute(tile_3::CreateModel_relaxed,
            tile_3::is_ignored_relaxed,
            tile_3::examples_relaxed);
}

TEST_F(GeneratedTests, tile_3_quant8) {
    execute(tile_3::CreateModel_quant8,
            tile_3::is_ignored_quant8,
            tile_3::examples_quant8);
}

TEST_F(GeneratedTests, tile_3_int32) {
    execute(tile_3::CreateModel_int32,
            tile_3::is_ignored_int32,
            tile_3::examples_int32);
}

