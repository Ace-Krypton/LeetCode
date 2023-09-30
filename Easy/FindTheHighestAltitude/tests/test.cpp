#include "../include/solution.hpp"

class ContainsDuplicateII : public ::testing::Test {
protected:
    ~ContainsDuplicateII() override = default;
};

TEST_F(ContainsDuplicateII, FirstTest) {
    std::vector<int32_t> nums = {-5, 1, 5, 0, -7};

    int32_t result = Solution::largest_altitude(nums);
    int32_t expected = 1;

    ASSERT_EQ(result, expected);
}

TEST_F(ContainsDuplicateII, SecondTest) {
    std::vector<int32_t> nums = {-4, -3, -2, -1, 4, 3, 2};

    int32_t result = Solution::largest_altitude(nums);
    int32_t expected = 0;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
