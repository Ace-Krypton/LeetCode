#include "../include/solution.hpp"

class SpiralMatrix : public ::testing::Test {
protected:
    ~SpiralMatrix() override = default;
};

TEST_F(SpiralMatrix, FirstTest) {
    std::vector<std::vector<int32_t>> matrix =
            {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    std::vector<int32_t> result =
            Solution::spiral_order(matrix);

    std::vector<int32_t> expected =
            {1, 2, 3, 6, 9, 8, 7, 4, 5};

    ASSERT_EQ(result, expected);
}

TEST_F(SpiralMatrix, SecondTest) {
    std::vector<std::vector<int32_t>> matrix =
            {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    std::vector<int32_t> result =
            Solution::spiral_order(matrix);

    std::vector<int32_t> expected =
            {1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
