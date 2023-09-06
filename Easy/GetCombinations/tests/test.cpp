#include "../include/solution.hpp"

class GetCombinations : public ::testing::Test {
protected:
    ~GetCombinations() override = default;
};

TEST_F(GetCombinations, FirstTest) {
    std::vector<int32_t> combinations = {0, 2, 0, 99};

    std::size_t result = Solution::get_combinations(combinations);
    std::size_t expected = 5;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
