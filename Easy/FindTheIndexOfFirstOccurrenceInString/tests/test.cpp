#include "../include/solution.hpp"

class FindTheIndexOfFirstOccurrenceInString : public ::testing::Test {
protected:
    ~FindTheIndexOfFirstOccurrenceInString() override = default;
};

TEST_F(FindTheIndexOfFirstOccurrenceInString, FirstTest) {
    std::string haystack = "sadbutsad";
    std::string needle = "sad";

    std::size_t result = Solution::str_str(haystack, needle);
    std::size_t expected = 0;

    ASSERT_EQ(result, expected);
}

TEST_F(FindTheIndexOfFirstOccurrenceInString, SecondTest) {
    std::string haystack = "leetcode";
    std::string needle = "leeto";

    std::size_t result = Solution::str_str(haystack, needle);
    std::size_t expected = -1;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
