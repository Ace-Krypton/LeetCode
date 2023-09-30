#include "../include/solution.hpp"

class FindTheHighestAltitude : public ::testing::Test {
protected:
    ~FindTheHighestAltitude() override = default;
};

TEST_F(FindTheHighestAltitude, FirstTest) {
    std::vector<int32_t> nums = {-5, 1, 5, 0, -7};

    int32_t result = Solution::largest_altitude(nums);
    int32_t expected = 1;

    ASSERT_EQ(result, expected);
}

TEST_F(FindTheHighestAltitude, SecondTest) {
    std::vector<int32_t> nums = {-4, -3, -2, -1, 4, 3, 2};

    int32_t result = Solution::largest_altitude(nums);
    int32_t expected = 0;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
