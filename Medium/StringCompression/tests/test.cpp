#include "../include/solution.hpp"

class StringCompression : public ::testing::Test {
protected:
    ~StringCompression() override = default;
};

TEST_F(StringCompression, FirstTest) {
    std::vector<char> chars = {'a', 'a', 'b',
                               'b', 'c', 'c', 'c'};

    size_t result = Solution::compress(chars);
    size_t expected = 6;

    ASSERT_EQ(result, expected);
}

TEST_F(StringCompression, SecondTest) {
    std::vector<char> chars = {'a'};

    size_t result = Solution::compress(chars);
    size_t expected = 1;

    ASSERT_EQ(result, expected);
}

TEST_F(StringCompression, ThirdTest) {
    std::vector<char> chars =
            {'a', 'b', 'b', 'b', 'b', 'b', 'b',
             'b', 'b', 'b', 'b', 'b', 'b'};

    size_t result = Solution::compress(chars);
    size_t expected = 4;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
