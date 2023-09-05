#include "../include/solution.hpp"

class ContainsDuplicateII : public ::testing::Test {
protected:
    ~ContainsDuplicateII() override = default;
};

TEST_F(ContainsDuplicateII, FirstTest) {
    int32_t n = 19;

    bool result = Solution::contains_nearby_duplicate(n);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

TEST_F(ContainsDuplicateII, SecondTest) {
    int32_t n = 2;

    bool result = Solution::contains_nearby_duplicate(n);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
