#include "../include/solution.hpp"

class FindPivotIndex : public ::testing::Test {
protected:
    ~FindPivotIndex() override = default;
};

TEST_F(FindPivotIndex, FirstTest) {
    std::vector<int32_t> nums = {1, 7, 3, 6, 5, 6};

    int32_t result = Solution::pivot_index(nums);
    int32_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(FindPivotIndex, SecondTest) {
    std::vector<int32_t> nums = {1, 2, 3};

    int32_t result = Solution::pivot_index(nums);
    int32_t expected = -1;

    ASSERT_EQ(result, expected);
}

TEST_F(FindPivotIndex, ThirdTest) {
    std::vector<int32_t> nums = {2, 1, -1};

    int32_t result = Solution::pivot_index(nums);
    int32_t expected = 0;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
