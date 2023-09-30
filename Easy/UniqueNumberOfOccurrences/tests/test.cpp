#include "../include/solution.hpp"

class UniqueNumberOfOccurrences : public ::testing::Test {
protected:
    ~UniqueNumberOfOccurrences() override = default;
};

TEST_F(UniqueNumberOfOccurrences, FirstTest) {
    std::vector<int32_t> elements = {1, 2};

    bool result = Solution::unique_occurrences(elements);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

TEST_F(UniqueNumberOfOccurrences, SecondTest) {
    std::vector<int32_t> elements = {1, 2, 2, 1, 1, 3};

    bool result = Solution::unique_occurrences(elements);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(UniqueNumberOfOccurrences, ThirdTest) {
    std::vector<int32_t> elements =
            {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};

    bool result = Solution::unique_occurrences(elements);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
