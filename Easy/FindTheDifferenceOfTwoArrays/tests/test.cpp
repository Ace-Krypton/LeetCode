#include "../include/solution.hpp"

class FindTheDifferenceOfTwoArrays : public ::testing::Test {
protected:
    ~FindTheDifferenceOfTwoArrays() override = default;
};

TEST_F(FindTheDifferenceOfTwoArrays, FirstTest) {
    std::vector<int32_t> first = {1, 2, 3};
    std::vector<int32_t> second = {2, 4, 6};

    std::vector<std::vector<int32_t>> result =
            Solution::find_difference(first, second);
    std::vector<std::vector<int32_t>> expected =
            {{1, 3}, {4, 6}};

    ASSERT_EQ(result, expected);
}

TEST_F(FindTheDifferenceOfTwoArrays, SecondTest) {
    std::vector<int32_t> first = {1, 2, 3, 3};
    std::vector<int32_t> second = {1, 1, 2, 2};

    std::vector<std::vector<int32_t>> result =
            Solution::find_difference(first, second);
    std::vector<std::vector<int32_t>> expected = {{3}, { }};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
