#include "../include/solution.hpp"

class ClimbingStairs : public ::testing::Test {
protected:
    ~ClimbingStairs() override = default;
};

TEST_F(ClimbingStairs, FirstTest) {
    int32_t steps = 2;

    int32_t result = Solution::climb_stairs(steps);
    int32_t expected = 2;

    ASSERT_EQ(result, expected);
}

TEST_F(ClimbingStairs, SecondTest) {
    int32_t steps = 3;

    int32_t result = Solution::climb_stairs(steps);
    int32_t expected = 3;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
