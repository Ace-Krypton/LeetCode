#include "../include/solution.hpp"

class GameOfLife : public ::testing::Test {
protected:
    ~GameOfLife() override = default;
};

TEST_F(GameOfLife, FirstTest) {
    std::vector<std::vector<int32_t>> matrix =
            {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}};

    Solution::game_of_life(matrix);

    std::vector<std::vector<int32_t>> expected =
            {{0, 0, 0}, {1, 0, 1}, {0, 1, 1}, {0, 1, 0}};

    ASSERT_EQ(matrix, expected);
}

TEST_F(GameOfLife, SecondTest) {
    std::vector<std::vector<int32_t>> matrix = {{1, 1}, {1, 0}};

    Solution::game_of_life(matrix);

    std::vector<std::vector<int32_t>> expected = {{1, 1}, {1, 1}};

    ASSERT_EQ(matrix, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
