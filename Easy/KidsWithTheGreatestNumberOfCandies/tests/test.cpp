#include "../include/solution.hpp"

class KidsWithTheGreatestNumberOfCandies : public ::testing::Test {
protected:
    ~KidsWithTheGreatestNumberOfCandies() override = default;
};

TEST_F(KidsWithTheGreatestNumberOfCandies, FirstTest) {
    std::string jewels = "aA";
    std::string stones = "aAAbbbb";

    std::size_t result = Solution::kids_with_candies(jewels, stones);
    std::size_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(KidsWithTheGreatestNumberOfCandies, SecondTest) {
    std::string jewels = "z";
    std::string stones = "ZZ";

    std::size_t result = Solution::kids_with_candies(jewels, stones);
    std::size_t expected = 0;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
