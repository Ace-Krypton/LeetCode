#include "../include/solution.hpp"

class ReverseVowelsOfAString : public ::testing::Test {
protected:
    ~ReverseVowelsOfAString() override = default;
};

TEST_F(ReverseVowelsOfAString, FirstTest) {
    std::string word = "hello";

    std::string result = Solution::reverse_vowels(word);
    std::string expected = "holle";

    ASSERT_EQ(result, expected);
}

TEST_F(ReverseVowelsOfAString, SecondTest) {
    std::string word = "leetcode";

    std::string result = Solution::reverse_vowels(word);
    std::string expected = "leotcede";

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
