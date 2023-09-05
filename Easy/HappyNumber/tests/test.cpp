#include "../include/solution.hpp"

class HappyNumber : public ::testing::Test {
protected:
    ~HappyNumber() override = default;
};

TEST_F(HappyNumber, FirstTest) {
    int32_t n = 19;

    bool result = Solution::is_happy(n);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(HappyNumber, SecondTest) {
    int32_t n = 2;

    bool result = Solution::is_happy(n);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
