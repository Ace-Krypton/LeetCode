#include "../include/solution.hpp"

class MergeStringsAlternatively : public ::testing::Test {
protected:
    ~MergeStringsAlternatively() override = default;
};

TEST_F(MergeStringsAlternatively, FirstTest) {
    std::string first = "abc";
    std::string second = "pqr";

    std::string result = Solution::merge_alternately(first, second);
    std::string expected = "apbqcr";

    ASSERT_EQ(result, expected);
}

TEST_F(MergeStringsAlternatively, SecondTest) {
    std::string first = "ab";
    std::string second = "pqrs";

    std::string result = Solution::merge_alternately(first, second);
    std::string expected = "apbqrs";

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
