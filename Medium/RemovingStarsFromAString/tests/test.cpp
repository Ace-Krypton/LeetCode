#include "../include/solution.hpp"

class RemovingStarsFromAString : public ::testing::Test {
protected:
    ~RemovingStarsFromAString() override = default;
};

TEST_F(RemovingStarsFromAString, FirstTest) {
    std::string words = "leet**cod*e";

    std::string result = Solution::remove_stars(words);
    std::string expected = "lecoe";

    ASSERT_EQ(result, expected);
}

TEST_F(RemovingStarsFromAString, SecondTest) {
    std::string words = "erase*****";

    std::string result = Solution::remove_stars(words);
    std::string expected;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
