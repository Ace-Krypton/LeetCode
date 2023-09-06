#include "../include/solution.hpp"

class MergeIntervals : public ::testing::Test {
protected:
    ~MergeIntervals() override = default;
};

TEST_F(MergeIntervals, FirstTest) {
    std::vector<std::vector<int32_t>> intervals =
            {{10, 16}, {2, 8}, {1, 6}, {7, 12}};

    std::size_t result = Solution::find_min_arrow_shots(intervals);
    std::size_t expected = 2;

    ASSERT_EQ(result, expected);
}

TEST_F(MergeIntervals, SecondTest) {
    std::vector<std::vector<int32_t>> intervals =
            {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    std::size_t result = Solution::find_min_arrow_shots(intervals);
    std::size_t expected = 4;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
