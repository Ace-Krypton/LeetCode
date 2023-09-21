#include "../include/solution.hpp"

class RotateImage : public ::testing::Test {
protected:
    ~RotateImage() override = default;
};

TEST_F(RotateImage, FirstTest) {
    std::vector<std::vector<int32_t>> matrix =
            {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    Solution::rotate(matrix);

    std::vector<std::vector<int32_t>> expected =
            {{7, 4, 1}, {8, 5, 2}, {9, 6, 3}};

    ASSERT_EQ(matrix, expected);
}

TEST_F(RotateImage, SecondTest) {
    std::vector<std::vector<int32_t>> matrix =
            {{5, 1, 9, 11}, {2, 4, 8, 10},
             {13, 3, 6, 7}, {15, 14, 12, 16}};

    Solution::rotate(matrix);

    std::vector<std::vector<int32_t>> expected =
            {{15, 13, 2, 5}, {14, 3, 4, 1},
             {12, 6, 8, 9}, {16, 7, 10, 11}};

    ASSERT_EQ(matrix, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
