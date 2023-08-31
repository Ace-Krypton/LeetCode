#include "../include/solution.hpp"

class JewelsAndStones : public ::testing::Test {
protected:
    ~JewelsAndStones() override = default;
};

TEST_F(JewelsAndStones, FirstTest) {
    std::string jewels = "aA";
    std::string stones = "aAAbbbb";

    std::size_t result = Solution::num_jewels_in_stones(jewels, stones);
    std::size_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(JewelsAndStones, SecondTest) {
    std::string jewels = "z";
    std::string stones = "ZZ";

    std::size_t result = Solution::num_jewels_in_stones(jewels, stones);
    std::size_t expected = 0;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
