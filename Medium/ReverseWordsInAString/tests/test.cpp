#include "../include/solution.hpp"

class ReverseWordsInAString : public ::testing::Test {
protected:
    ~ReverseWordsInAString() override = default;
};

TEST_F(ReverseWordsInAString, FirstTest) {
    std::string words = "the sky is blue";

    std::string result = Solution::reverse_words(words);
    std::string expected = "blue is sky the";

    ASSERT_EQ(result, expected);
}

TEST_F(ReverseWordsInAString, SecondTest) {
    std::string words = "  hello world  ";

    std::string result = Solution::reverse_words(words);
    std::string expected = "world hello";

    ASSERT_EQ(result, expected);
}

TEST_F(ReverseWordsInAString, ThirdTest) {
    std::string words = "a good   example";

    std::string result = Solution::reverse_words(words);
    std::string expected = "example good a";

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
