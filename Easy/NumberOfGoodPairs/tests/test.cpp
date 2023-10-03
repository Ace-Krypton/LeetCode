#include "../include/solution.hpp"

class NumberOfGoodPairs : public ::testing::Test {
protected:
    ~NumberOfGoodPairs() override = default;
};

TEST_F(NumberOfGoodPairs, FirstTest) {
    std::vector<int32_t> nums = {1, 2, 3, 1, 1, 3};

    size_t result = Solution::num_identical_pairs(nums);
    size_t expected = 4;

    ASSERT_EQ(result, expected);
}

TEST_F(NumberOfGoodPairs, SecondTest) {
    std::vector<int32_t> nums = {1, 1, 1, 1};

    size_t result = Solution::num_identical_pairs(nums);
    size_t expected = 6;

    ASSERT_EQ(result, expected);
}

TEST_F(NumberOfGoodPairs, ThirdTest) {
    std::vector<int32_t> nums = {1, 2, 3};

    size_t result = Solution::num_identical_pairs(nums);
    size_t expected = 0;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
