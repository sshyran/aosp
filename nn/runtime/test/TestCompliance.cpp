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

#include "ModelBuilder.h"
#include "NeuralNetworksWrapper.h"
#include "Utils.h"

#include <gtest/gtest.h>

namespace compliance_test {

using namespace ::android::nn;

class ComplianceTest : public ::testing::Test {
   protected:
    virtual void SetUp() {}
};

void CreateHidlModel(std::function<void(wrapper::Model*)> CreateModel, Model* model) {
    wrapper::Model wrapperModel;
    CreateModel(&wrapperModel);
    ModelBuilder* modelBuilder = reinterpret_cast<ModelBuilder*>(wrapperModel.getHandle());
    modelBuilder->setHidlModel(model);
}

}  // namespace compliance_test

#define FORWARD_DECLARE_GENERATED_OBJECTS(NamespaceName, FunctionName) \
    namespace NamespaceName {                                          \
    void FunctionName(android::nn::wrapper::Model* model);             \
    }

#define TEST_AVAILABLE_SINCE_V1_2(NamespaceName, FunctionName)     \
    FORWARD_DECLARE_GENERATED_OBJECTS(NamespaceName, FunctionName) \
    namespace compliance_test {                                    \
    TEST_F(ComplianceTest, NamespaceName) {                        \
        Model model;                                               \
        CreateHidlModel(NamespaceName::FunctionName, &model);      \
        ASSERT_FALSE(compliantWithV1_1(model));                    \
        ASSERT_FALSE(compliantWithV1_0(model));                    \
    }                                                              \
    }

TEST_AVAILABLE_SINCE_V1_2(tanh_quantized, CreateModel)
TEST_AVAILABLE_SINCE_V1_2(sub_quantized, CreateModel)
TEST_AVAILABLE_SINCE_V1_2(conv2d_v1_2, CreateModel_nchw)
TEST_AVAILABLE_SINCE_V1_2(depthwise_conv2d_v1_2, CreateModel_nchw)
TEST_AVAILABLE_SINCE_V1_2(avg_pool_v1_2, CreateModel_nchw)
TEST_AVAILABLE_SINCE_V1_2(l2_pool_v1_2, CreateModel_nchw)
TEST_AVAILABLE_SINCE_V1_2(max_pool_v1_2, CreateModel_nchw)
TEST_AVAILABLE_SINCE_V1_2(resize_bilinear_v1_2, CreateModel_nchw)
TEST_AVAILABLE_SINCE_V1_2(depth_to_space_v1_2, CreateModel_nchw)
TEST_AVAILABLE_SINCE_V1_2(space_to_depth_v1_2, CreateModel_nchw)
TEST_AVAILABLE_SINCE_V1_2(batch_to_space_v1_2, CreateModel_nchw)
TEST_AVAILABLE_SINCE_V1_2(space_to_batch_v1_2, CreateModel_nchw)

#undef TEST_AVAILABLE_SINCE_V1_2
#undef FORWARD_DECLARE_GENERATED_OBJECTS
