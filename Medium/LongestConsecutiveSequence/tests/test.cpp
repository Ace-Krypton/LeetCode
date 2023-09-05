#include "../include/solution.hpp"

class LongestConsecutiveSequence : public ::testing::Test {
protected:
    ~LongestConsecutiveSequence() override = default;
};

TEST_F(LongestConsecutiveSequence, FirstTest) {
    std::vector<int32_t> elements = {100, 4, 200, 1, 3, 2};

    int32_t result = Solution::longest_consecutive(elements);
    int32_t expected = 4;

    ASSERT_EQ(result, expected);
}

TEST_F(LongestConsecutiveSequence, SecondTest) {
    std::vector<int32_t> elements = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};

    int32_t result = Solution::longest_consecutive(elements);
    int32_t expected = 9;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
