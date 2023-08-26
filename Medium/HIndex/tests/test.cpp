#include "../include/solution.hpp"

class HIndex : public ::testing::Test {
protected:
    ~HIndex() override = default;
};

TEST_F(HIndex, FirstTest) {
    std::vector<int32_t> elements = {3, 0, 6, 1, 5};

    int32_t result = Solution::h_index(elements);
    int32_t expected = 3;

    ASSERT_EQ(result, expected);
}

TEST_F(HIndex, SecondTest) {
    std::vector<int32_t> elements = {1, 3, 1};

    int32_t result = Solution::h_index(elements);
    int32_t expected = 1;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
