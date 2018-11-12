/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "OperationsUtils.cpp"

#include "gmock/gmock-matchers.h"
#include "gtest/gtest.h"

namespace android {
namespace nn {
namespace wrapper {

namespace {
using ::testing::ElementsAreArray;
}  // namespace

TEST(CalculateBroadcastedShapeTest, Basic) {
    Shape shape1;
    Shape shape2;
    shape1.dimensions = {4, 3, 2, 1};
    shape2.dimensions = {3, 1, 5};

    Shape expectedOutputShape;
    expectedOutputShape.dimensions = {4, 3, 2, 5};

    Shape actualOutputShape;
    EXPECT_TRUE(calculateBroadcastedShape(shape1, shape2, &actualOutputShape));
    EXPECT_THAT(actualOutputShape.dimensions, ElementsAreArray(expectedOutputShape.dimensions));

    EXPECT_TRUE(calculateBroadcastedShape(shape2, shape1, &actualOutputShape));
    EXPECT_THAT(actualOutputShape.dimensions, ElementsAreArray(expectedOutputShape.dimensions));
}

TEST(CalculateBroadcastedShapeTest, FailsOnIncompatible) {
    Shape shape1;
    Shape shape2;
    shape1.dimensions = {5};
    shape2.dimensions = {3};

    Shape actualOutputShape;
    EXPECT_FALSE(calculateBroadcastedShape(shape1, shape2, &actualOutputShape));
    EXPECT_FALSE(calculateBroadcastedShape(shape2, shape1, &actualOutputShape));
}

}  // namespace wrapper
}  // namespace nn
}  // namespace android
