#include "../include/solution.hpp"

class KidsWithTheGreatestNumberOfCandies : public ::testing::Test {
protected:
    ~KidsWithTheGreatestNumberOfCandies() override = default;
};

TEST_F(KidsWithTheGreatestNumberOfCandies, FirstTest) {
    std::vector<int32_t> candies = {2, 3, 5, 1, 3};
    int32_t extra_candies = 3;

    std::vector<bool> result = Solution::kids_with_candies(candies, extra_candies);
    std::vector<bool> expected = {true, true, true, false, true};

    ASSERT_EQ(result, expected);
}

TEST_F(KidsWithTheGreatestNumberOfCandies, SecondTest) {
    std::vector<int32_t> candies = {4, 2, 1, 1, 2};
    int32_t extra_candies = 1;

    std::vector<bool> result = Solution::kids_with_candies(candies, extra_candies);
    std::vector<bool> expected = {true, false, false, false, false};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
