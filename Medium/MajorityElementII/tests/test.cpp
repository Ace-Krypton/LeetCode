#include "../include/solution.hpp"

class MajorityElementII : public ::testing::Test {
protected:
    ~MajorityElementII() override = default;
};

TEST_F(MajorityElementII, FirstTest) {
    std::vector<int32_t> nums = {3, 2, 3};

    std::vector<int32_t> result = Solution::majority_element(nums);
    std::vector<int32_t> expected = {3};

    ASSERT_EQ(result, expected);
}

TEST_F(MajorityElementII, SecondTest) {
    std::vector<int32_t> nums = {1};

    std::vector<int32_t> result = Solution::majority_element(nums);
    std::vector<int32_t> expected = {1};

    ASSERT_EQ(result, expected);
}

TEST_F(MajorityElementII, ThirdTest) {
    std::vector<int32_t> nums = {1, 2};

    std::vector<int32_t> result = Solution::majority_element(nums);
    std::vector<int32_t> expected = {1, 2};

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
