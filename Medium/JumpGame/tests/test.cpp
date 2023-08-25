#include "../include/solution.hpp"

class JumpGame : public ::testing::Test {
protected:
    ~JumpGame() override = default;
};

TEST_F(JumpGame, FirstTest) {
    std::vector<uint32_t> elements = {2, 3, 1, 1, 4};

    bool result = Solution::can_jump(elements);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(JumpGame, SecondTest) {
    std::vector<uint32_t> elements = {3, 2, 1, 0, 4};

    bool result = Solution::can_jump(elements);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
