#include "../include/solution.hpp"

class SetMatrixZeroes : public ::testing::Test {
protected:
    ~SetMatrixZeroes() override = default;
};

TEST_F(SetMatrixZeroes, FirstTest) {
    std::vector<std::vector<int32_t>> matrix =
            {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    Solution::set_zeroes(matrix);

    std::vector<std::vector<int32_t>> expected =
            {{1, 0, 1}, {0, 0, 0}, {1, 0, 1}};

    ASSERT_EQ(matrix, expected);
}

TEST_F(SetMatrixZeroes, SecondTest) {
    std::vector<std::vector<int32_t>> matrix =
            {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

    Solution::set_zeroes(matrix);

    std::vector<std::vector<int32_t>> expected =
            {{0, 0, 0, 0}, {0, 4, 5, 0}, {0, 3, 1, 0}};

    ASSERT_EQ(matrix, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
