#include "../include/solution.hpp"

class MaxNumberOfKSumPairs : public ::testing::Test {
protected:
    ~MaxNumberOfKSumPairs() override = default;
};

TEST_F(MaxNumberOfKSumPairs, FirstTest) {
    std::vector<int32_t> nums = {1, 2, 3, 4};

    size_t result = Solution::max_operations(nums, 5);
    size_t expected = 2;

    ASSERT_EQ(result, expected);
}

TEST_F(MaxNumberOfKSumPairs, SecondTest) {
    std::vector<int32_t> nums = {3, 1, 3, 4, 3};

    size_t result = Solution::max_operations(nums, 6);
    size_t expected = 1;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
