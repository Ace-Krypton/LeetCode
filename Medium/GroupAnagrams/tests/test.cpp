#include "../include/solution.hpp"

class GroupAnagrams : public ::testing::Test {
protected:
    ~GroupAnagrams() override = default;
};

TEST_F(GroupAnagrams, FirstTest) {
    std::vector<std::string> strs =
            {"eat", "tea", "tan", "ate", "nat", "bat"};

    std::vector<std::vector<std::string>> result =
            Solution::group_anagrams(strs);
    std::vector<std::vector<std::string>> expected =
            {{"bat"}, {"eat", "tea", "ate"}, {"tan", "nat"}};

    ASSERT_EQ(result, expected);
}

TEST_F(GroupAnagrams, SecondTest) {
    std::vector<std::string> strs = { };

    std::vector<std::vector<std::string>> result =
            Solution::group_anagrams(strs);
    std::vector<std::vector<std::string>> expected = { { } };

    ASSERT_EQ(result, expected);
}

TEST_F(GroupAnagrams, ThirdTest) {
    std::vector<std::string> strs = {"a"};

    std::vector<std::vector<std::string>> result =
            Solution::group_anagrams(strs);
    std::vector<std::vector<std::string>> expected = {{"a"}};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
