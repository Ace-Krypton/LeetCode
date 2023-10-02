#include "../include/solution.hpp"

class RemoveColoredPiecesIfBothNeighborsAreTheSameColor : public ::testing::Test {
protected:
    ~RemoveColoredPiecesIfBothNeighborsAreTheSameColor() override = default;
};

TEST_F(RemoveColoredPiecesIfBothNeighborsAreTheSameColor, FirstTest) {
    std::string colors = "AAABABB";

    bool result = Solution::winner_of_game(colors);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(RemoveColoredPiecesIfBothNeighborsAreTheSameColor, SecondTest) {
    std::string colors = "AA";

    bool result = Solution::winner_of_game(colors);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

TEST_F(RemoveColoredPiecesIfBothNeighborsAreTheSameColor, ThirdTest) {
    std::string colors = "ABBBBBBBAAA";

    bool result = Solution::winner_of_game(colors);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
