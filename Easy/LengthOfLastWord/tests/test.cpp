#include "../include/solution.hpp"

class LengthOfLastWord : public ::testing::Test {
protected:
    ~LengthOfLastWord() override = default;
};

TEST_F(LengthOfLastWord, FirstTest) {
    std::string words = "Hello World";

    std::size_t result = Solution::length_of_last_word(words);
    std::size_t expected = 5;

    ASSERT_EQ(result, expected);
}

TEST_F(LengthOfLastWord, SecondTest) {
    std::string words = "   fly me   to   the moon  ";

    std::size_t result = Solution::length_of_last_word(words);
    std::size_t expected = 4;

    ASSERT_EQ(result, expected);
}

TEST_F(LengthOfLastWord, ThirdTest) {
    std::string words = "luffy is still joyboy";

    std::size_t result = Solution::length_of_last_word(words);
    std::size_t expected = 6;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
