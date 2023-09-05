#include "../include/solution.hpp"

class ContainsDuplicateII : public ::testing::Test {
protected:
    ~ContainsDuplicateII() override = default;
};

TEST_F(ContainsDuplicateII, FirstTest) {
    std::vector<int32_t> nums = {1, 2, 3, 1};
    int32_t k = 3;

    bool result = Solution::contains_nearby_duplicate(nums, k);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(ContainsDuplicateII, SecondTest) {
    std::vector<int32_t> nums = {1, 0, 1, 1};
    int32_t k = 1;

    bool result = Solution::contains_nearby_duplicate(nums, k);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(ContainsDuplicateII, ThirdTest) {
    std::vector<int32_t> nums = {1, 2, 3, 1, 2, 3};
    int32_t k = 2;

    bool result = Solution::contains_nearby_duplicate(nums, k);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
