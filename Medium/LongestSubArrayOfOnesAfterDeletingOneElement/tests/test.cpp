#include "../include/solution.hpp"

class LongestSubArrayOfOnesAfterDeletingOneElement : public ::testing::Test {
protected:
    ~LongestSubArrayOfOnesAfterDeletingOneElement() override = default;
};

TEST_F(LongestSubArrayOfOnesAfterDeletingOneElement, FirstTest) {
    std::vector<int32_t> nums = {1, 1, 0, 1};

    size_t result = Solution::longest_subarray(nums);
    size_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(LongestSubArrayOfOnesAfterDeletingOneElement, SecondTest) {
    std::vector<int32_t> nums = {0, 1, 1, 1, 0, 1, 1, 0, 1};

    size_t result = Solution::longest_subarray(nums);
    size_t expected = 5;

    ASSERT_EQ(result, expected);
}

TEST_F(LongestSubArrayOfOnesAfterDeletingOneElement, ThirdTest) {
    std::vector<int32_t> nums = {1, 1, 1};

    size_t result = Solution::longest_subarray(nums);
    size_t expected = 2;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
