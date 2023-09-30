#include "../include/solution.hpp"

class EqualRowAndColumnPairs : public ::testing::Test {
protected:
    ~EqualRowAndColumnPairs() override = default;
};

TEST_F(EqualRowAndColumnPairs, FirstTest) {
    std::vector<std::vector<int32_t>> nums =
            {{3, 2, 1}, {1, 7, 6}, {2, 7, 7}};

    int32_t result = Solution::equal_pairs(nums);
    int32_t expected = 1;

    ASSERT_EQ(result, expected);
}

TEST_F(EqualRowAndColumnPairs, SecondTest) {
    std::vector<std::vector<int32_t>> nums =
            {{3, 1, 2, 2}, {1, 4, 4, 5},
             {2, 4, 2, 2}, {2, 4, 2, 2}};

    int32_t result = Solution::equal_pairs(nums);
    int32_t expected = 3;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
