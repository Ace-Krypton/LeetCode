#include "../include/solution.hpp"

class MergeIntervals : public ::testing::Test {
protected:
    ~MergeIntervals() override = default;
};

TEST_F(MergeIntervals, FirstTest) {
    std::vector<std::vector<uint16_t>> intervals = {{1, 4}, {4, 5}};

    std::vector<std::vector<uint16_t>> result =
            Solution::merge(intervals);
    std::vector<std::vector<uint16_t>> expected = {{1, 5}};

    ASSERT_EQ(result, expected);
}

TEST_F(MergeIntervals, SecondTest) {
    std::vector<std::vector<uint16_t>> intervals =
            {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    std::vector<std::vector<uint16_t>> result =
            Solution::merge(intervals);
    std::vector<std::vector<uint16_t>> expected =
            {{1, 6}, {8, 10}, {15, 18}};

    ASSERT_EQ(result, expected);
}

TEST_F(MergeIntervals, ThirdTest) {
    std::vector<std::vector<uint16_t>> intervals =
            {{1, 3}, {5, 6}, {8, 10}, {9, 18}};

    std::vector<std::vector<uint16_t>> result =
            Solution::merge(intervals);
    std::vector<std::vector<uint16_t>> expected =
            {{1, 3}, {5, 6}, {8, 18}};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
