#include "../include/solution.hpp"

class TextJustification : public ::testing::Test {
protected:
    ~TextJustification() override = default;
};

TEST_F(TextJustification, FirstTest) {
    int32_t max_width = 16;
    std::vector<std::string> words =
            {"This", "is", "an", "example", "of", "text", "justification."};

    std::vector<std::string> result = Solution::full_justify(words, max_width);
    std::vector<std::string> expected = {"This    is    an",
                                         "example  of text",
                                         "justification.  "};

    ASSERT_EQ(result, expected);
}

TEST_F(TextJustification, SecondTest) {
    int32_t max_width = 16;
    std::vector<std::string> words = {"What", "must", "be", "acknowledgment", "shall", "be"};

    std::vector<std::string> result = Solution::full_justify(words, max_width);
    std::vector<std::string> expected = {"What   must   be",
                                         "acknowledgment  ",
                                         "shall be        "};

    ASSERT_EQ(result, expected);
}

TEST_F(TextJustification, ThirdTest) {
    int32_t max_width = 16;
    std::vector<std::string> words =
            {"Science", "is", "what", "we", "understand", "well", "enough", "to",
             "explain", "to", "a", "computer.", "Art", "is", "everything", "else", "we", "do"};

    std::vector<std::string> result = Solution::full_justify(words, max_width);
    std::vector<std::string> expected = {"Science  is  what we",
                                         "understand      well",
                                         "enough to explain to",
                                         "a  computer.  Art is",
                                         "everything  else  we",
                                         "do                  "};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
