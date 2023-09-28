#include "../include/solution.hpp"

class MaximumSubArray : public ::testing::Test {
protected:
    ~MaximumSubArray() override = default;
};

TEST_F(MaximumSubArray, FirstTest) {
    std::vector<int32_t> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int32_t result = Solution::max_sub_array(nums);

    int32_t expected = 6;
    ASSERT_EQ(result, expected);
}

TEST_F(MaximumSubArray, SecondTest) {
    std::vector<int32_t> nums = {1};

    int32_t result = Solution::max_sub_array(nums);

    int32_t expected = 1;
    ASSERT_EQ(result, expected);
}

TEST_F(MaximumSubArray, ThirdTest) {
    std::vector<int32_t> nums = {5, 4, -1, 7, 8};

    int32_t result = Solution::max_sub_array(nums);

    int32_t expected = 23;
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
