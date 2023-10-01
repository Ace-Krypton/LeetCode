#include "../include/solution.hpp"

class ReverseWordsInAStringIII : public ::testing::Test {
protected:
    ~ReverseWordsInAStringIII() override = default;
};

TEST_F(ReverseWordsInAStringIII, FirstTest) {
    std::string word = "Let's take LeetCode contest";

    std::string result = Solution::reverse_words(word);
    std::string expected = "s'teL ekat edoCteeL tsetnoc";

    ASSERT_EQ(result, expected);
}

TEST_F(ReverseWordsInAStringIII, SecondTest) {
    std::string word = "God Ding";

    std::string result = Solution::reverse_words(word);
    std::string expected = "doG gniD";

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
