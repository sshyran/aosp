// clang-format off
// Generated file (from: tile_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace tile_1 {
// Generated tile_1 test
#include "generated/examples/tile_1.example.cpp"
// Generated model constructor
#include "generated/models/tile_1.model.cpp"
} // namespace tile_1

TEST_F(GeneratedTests, tile_1) {
    execute(tile_1::CreateModel,
            tile_1::is_ignored,
            tile_1::examples);
}

TEST_F(GeneratedTests, tile_1_relaxed) {
    execute(tile_1::CreateModel_relaxed,
            tile_1::is_ignored_relaxed,
            tile_1::examples_relaxed);
}

TEST_F(GeneratedTests, tile_1_quant8) {
    execute(tile_1::CreateModel_quant8,
            tile_1::is_ignored_quant8,
            tile_1::examples_quant8);
}

