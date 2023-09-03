#include "../include/solution.hpp"

class LongestSubstringWithoutRepeatingCharacters : public ::testing::Test {
protected:
    ~LongestSubstringWithoutRepeatingCharacters() override = default;
};

TEST_F(LongestSubstringWithoutRepeatingCharacters, FirstTest) {
    std::string element = "abcabcbb";

    std::size_t result =
            Solution::length_of_longest_substring(element);
    std::size_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(LongestSubstringWithoutRepeatingCharacters, SecondTest) {
    std::string element = "bbbbb";

    std::size_t result =
            Solution::length_of_longest_substring(element);
    std::size_t expected = 1;

    ASSERT_EQ(result, expected);
}

TEST_F(LongestSubstringWithoutRepeatingCharacters, ThirdTest) {
    std::string element = "pwwkew";

    std::size_t result =
            Solution::length_of_longest_substring(element);
    std::size_t expected = 3;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
