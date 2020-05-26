// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "random.h"

#include <gtest/gtest.h>

#include <iostream>

#include "guarded_philox_random.h"
#include "philox_random.h"
#include "simple_philox.h"

// Tests simple random functionality is compilable and linkable.
TEST(RandomTest, SimpleRandomTest) {
    // Tests that does not produce ten 0's in a row.
    // Unlikely to fail in my lifetime.
    uint64_t num = 0;
    for (size_t i = 0; i < 10; i++) {
        num |= tensorflow::random::New64();
    }
    ASSERT_NE(num, 0);
}

// Tests Philox random functionality is compilable and linkable.
TEST(RandomTest, PhiloxTest) {
    // From a GuardedPhiloxRandom, reserve some samples.
    tensorflow::GuardedPhiloxRandom guarded;
    guarded.Init(1, 2);
    const size_t NUM_64BIT_SAMPLES = 100;
    tensorflow::random::PhiloxRandom reserved = guarded.ReserveSamples128(NUM_64BIT_SAMPLES / 2);

    // Wrap the reserved samples generator in a simple generator, and get some
    // output. Ensure output is not all zeros.
    tensorflow::random::SimplePhilox simple(&reserved);
    uint64_t num = 0;
    for (size_t i = 0; i < NUM_64BIT_SAMPLES; i++) {
        num |= simple.Rand64();
    }
    ASSERT_NE(num, 0);
}
