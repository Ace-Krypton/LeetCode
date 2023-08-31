#include "../include/solution.hpp"

class ValidPalindrome : public ::testing::Test {
protected:
    ~ValidPalindrome() override = default;
};

TEST_F(ValidPalindrome, FirstTest) {
    std::string sentence = "A man, a plan, a canal: Panama";

    bool result = Solution::is_palindrome(sentence);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(ValidPalindrome, SecondTest) {
    std::string sentence = "race a car";

    bool result = Solution::is_palindrome(sentence);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

TEST_F(ValidPalindrome, ThirdTest) {
    std::string sentence = ",; W;:GlG:;l ;,";

    bool result = Solution::is_palindrome(sentence);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
