#include "../include/solution.hpp"

class MaxConsecutiveOnesIII : public ::testing::Test {
protected:
    ~MaxConsecutiveOnesIII() override = default;
};

TEST_F(MaxConsecutiveOnesIII, FirstTest) {
    std::vector<int32_t> nums =
            {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};

    size_t result = Solution::longest_ones(nums, 2);
    size_t expected = 6;

    ASSERT_EQ(result, expected);
}

TEST_F(MaxConsecutiveOnesIII, SecondTest) {
    std::vector<int32_t> nums =
            {0, 0, 1, 1, 0, 0, 1, 1, 1,
             0, 1, 1, 0, 0, 0, 1, 1, 1, 1};

    size_t result = Solution::longest_ones(nums, 3);
    size_t expected = 10;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
