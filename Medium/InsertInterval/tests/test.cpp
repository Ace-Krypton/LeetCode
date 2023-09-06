#include "../include/solution.hpp"

class InsertInterval : public ::testing::Test {
protected:
    ~InsertInterval() override = default;
};

TEST_F(InsertInterval, FirstTest) {
    std::vector<std::vector<int32_t>> intervals = {{1, 3}, {6, 9}};
    std::vector<int32_t> new_interval = {2, 5};

    std::vector<std::vector<int32_t>> result =
            Solution::insert(intervals, new_interval);
    std::vector<std::vector<int32_t>> expected = {{1, 5}, {6, 9}};

    ASSERT_EQ(result, expected);
}

TEST_F(InsertInterval, SecondTest) {
    std::vector<std::vector<int32_t>> intervals =
            {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
    std::vector<int32_t> new_interval = {4, 8};

    std::vector<std::vector<int32_t>> result =
            Solution::insert(intervals, new_interval);
    std::vector<std::vector<int32_t>> expected =
            {{1, 2}, {3, 10}, {12, 16}};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
