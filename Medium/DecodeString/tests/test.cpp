#include "../include/solution.hpp"

class DecodeString : public ::testing::Test {
protected:
    ~DecodeString() override = default;
};

TEST_F(DecodeString, FirstTest) {
    std::string word = "3[a]2[bc]";

    std::string result = Solution::decode_string(word);

    std::string expected = "aaabcbc";
    ASSERT_EQ(result, expected);
}

TEST_F(DecodeString, SecondTest) {
    std::string word = "3[a2[c]]";

    std::string result = Solution::decode_string(word);

    std::string expected = "accaccacc";
    ASSERT_EQ(result, expected);
}

TEST_F(DecodeString, ThirdTest) {
    std::string word = "2[abc]3[cd]ef";

    std::string result = Solution::decode_string(word);

    std::string expected = "abcabccdcdcdef";
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
