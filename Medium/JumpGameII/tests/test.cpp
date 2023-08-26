#include "../include/solution.hpp"

class JumpGameTwo : public ::testing::Test {
protected:
    ~JumpGameTwo() override = default;
};

TEST_F(JumpGameTwo, FirstTest) {
    std::vector<uint32_t> elements = {2, 3, 1, 1, 4};

    uint32_t result = Solution::jump(elements);
    uint32_t expected = 2;

    ASSERT_EQ(result, expected);
}

TEST_F(JumpGameTwo, SecondTest) {
    std::vector<uint32_t> elements = {2, 3, 0, 1, 4};

    uint32_t result = Solution::jump(elements);
    uint32_t expected = 2;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
