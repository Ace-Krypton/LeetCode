#include "../include/solution.hpp"

class SummaryRanges : public ::testing::Test {
protected:
    ~SummaryRanges() override = default;
};

TEST_F(SummaryRanges, FirstTest) {
    std::vector<int32_t> nums = {0, 1, 2, 4, 5, 7};

    std::vector<std::string> result =
            Solution::summary_ranges(nums);

    std::vector<std::string> expected = {"0->2", "4->5", "7"};
    ASSERT_EQ(result, expected);
}

TEST_F(SummaryRanges, SecondTest) {
    std::vector<int32_t> nums = {0, 2, 3, 4, 6, 8, 9};

    std::vector<std::string> result =
            Solution::summary_ranges(nums);

    std::vector<std::string> expected = {"0", "2->4", "6", "8->9"};
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
