#include "../include/solution.hpp"

class IncreasingTripletSubsequence : public ::testing::Test {
protected:
    ~IncreasingTripletSubsequence() override = default;
};

TEST_F(IncreasingTripletSubsequence, FirstTest) {
    std::vector<int32_t> nums = {1, 2, 3, 4, 5};

    bool result = Solution::increasing_triplet(nums);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(IncreasingTripletSubsequence, SecondTest) {
    std::vector<int32_t> nums = {5, 4, 3, 2, 1};

    bool result = Solution::increasing_triplet(nums);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

TEST_F(IncreasingTripletSubsequence, ThirdTest) {
    std::vector<int32_t> nums = {2, 1, 5, 0, 4, 6};

    bool result = Solution::increasing_triplet(nums);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
