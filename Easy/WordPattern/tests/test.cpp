#include "../include/solution.hpp"

class WordPattern : public ::testing::Test {
protected:
    ~WordPattern() override = default;
};

TEST_F(WordPattern, FirstTest) {
    std::string pattern = "abba";
    std::string s = "dog cat cat dog";

    bool result = Solution::word_pattern(pattern, s);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(WordPattern, SecondTest) {
    std::string pattern = "abba";
    std::string s = "dog cat cat fish";

    bool result = Solution::word_pattern(pattern, s);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

TEST_F(WordPattern, ThirdTest) {
    std::string pattern = "aaaa";
    std::string s = "dog cat cat dog";

    bool result = Solution::word_pattern(pattern, s);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
