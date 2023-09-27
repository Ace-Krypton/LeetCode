#include "../include/solution.hpp"

class MoveZeroes : public ::testing::Test {
protected:
    ~MoveZeroes() override = default;
};

TEST_F(MoveZeroes, FirstTest) {
    std::vector<int32_t> nums = {0, 1, 0, 3, 12};

    Solution::move_zeroes(nums);
    std::vector<int32_t> expected = {1, 3, 12, 0, 0};

    ASSERT_EQ(nums, expected);
}

TEST_F(MoveZeroes, SecondTest) {
    std::vector<int32_t> nums = {0};

    Solution::move_zeroes(nums);
    std::vector<int32_t> expected = {0};

    ASSERT_EQ(nums, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
