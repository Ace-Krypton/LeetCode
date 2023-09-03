#include "../include/solution.hpp"

class LongestPalindromicSubstring : public ::testing::Test {
protected:
    ~LongestPalindromicSubstring() override = default;
};

TEST_F(LongestPalindromicSubstring, FirstTest) {
    std::string element = "babad";

    std::string result = Solution::longest_palindrome(element);
    std::string expected = "bab";

    ASSERT_EQ(result, expected);
}

TEST_F(LongestPalindromicSubstring, SecondTest) {
    std::string element = "cbbd";

    std::string result = Solution::longest_palindrome(element);
    std::string expected = "bb";

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
