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

#define CONCAT_NAME_1(name) name
#define CONCAT_NAME_2(name, suffix) name##_##suffix
#define GET_CONCAT_NAME(_0, _1, macro, ...) macro
#define CONCAT_NAME(...) GET_CONCAT_NAME(__VA_ARGS__, CONCAT_NAME_2, CONCAT_NAME_1)(__VA_ARGS__)

#define FORWARD_DECLARE_GENERATED_OBJECTS(NamespaceName, ...)                          \
    namespace NamespaceName {                                                          \
    void CONCAT_NAME(CreateModel, ##__VA_ARGS__)(android::nn::wrapper::Model * model); \
    }

#define TEST_AVAILABLE_SINCE_V1_2(NamespaceName, ...)                                    \
    FORWARD_DECLARE_GENERATED_OBJECTS(NamespaceName, ##__VA_ARGS__)                      \
    namespace compliance_test {                                                          \
    TEST_F(ComplianceTest, CONCAT_NAME(NamespaceName, ##__VA_ARGS__)) {                  \
        Model model;                                                                     \
        CreateHidlModel(NamespaceName::CONCAT_NAME(CreateModel, ##__VA_ARGS__), &model); \
        ASSERT_FALSE(compliantWithV1_1(model));                                          \
        ASSERT_FALSE(compliantWithV1_0(model));                                          \
    }                                                                                    \
    }

TEST_AVAILABLE_SINCE_V1_2(tanh_quantized)
TEST_AVAILABLE_SINCE_V1_2(sub_quantized)
TEST_AVAILABLE_SINCE_V1_2(conv2d_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(depthwise_conv2d_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(avg_pool_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(l2_pool_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(max_pool_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(resize_bilinear_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(depth_to_space_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(space_to_depth_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(batch_to_space_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(space_to_batch_v1_2, nchw)
TEST_AVAILABLE_SINCE_V1_2(l2_normalization_v1_2, dim2_axis1)
TEST_AVAILABLE_SINCE_V1_2(l2_normalization_v1_2, axis_dim4_axis0)
TEST_AVAILABLE_SINCE_V1_2(local_response_normalization_v1_2, dim2_axis1)
TEST_AVAILABLE_SINCE_V1_2(local_response_normalization_v1_2, axis_dim4_axis0)
TEST_AVAILABLE_SINCE_V1_2(softmax_v1_2, dim1_axis0)
TEST_AVAILABLE_SINCE_V1_2(softmax_v1_2, axis_dim4_axis0)

#undef TEST_AVAILABLE_SINCE_V1_2
#undef FORWARD_DECLARE_GENERATED_OBJECTS
#undef CONCAT_NAME
#undef GET_CONCAT_NAME
#undef CONCAT_NAME_2
#undef CONCAT_NAME_1
