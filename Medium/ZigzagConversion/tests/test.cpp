#include "../include/solution.hpp"

class ZigzagConversion : public ::testing::Test {
protected:
    ~ZigzagConversion() override = default;
};

TEST_F(ZigzagConversion, FirstTest) {
    int32_t num_rows = 3;
    std::string word = "PAYPALISHIRING";

    std::string result = Solution::convert(word, num_rows);
    std::string expected = "PAHNAPLSIIGYIR";

    ASSERT_EQ(result, expected);
}

TEST_F(ZigzagConversion, SecondTest) {
    int32_t num_rows = 4;
    std::string word = "PAYPALISHIRING";

    std::string result = Solution::convert(word, num_rows);
    std::string expected = "PINALSIGYAHRPI";

    ASSERT_EQ(result, expected);
}

TEST_F(ZigzagConversion, ThirdTest) {
    int32_t num_rows = 1;
    std::string word = "A";

    std::string result = Solution::convert(word, num_rows);
    std::string expected = "A";

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
