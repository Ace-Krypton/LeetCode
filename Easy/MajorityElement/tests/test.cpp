#include "../include/solution.hpp"

class MajorityElement : public ::testing::Test {
protected:
    ~MajorityElement() override = default;
};

TEST_F(MajorityElement, FirstTest) {
    std::vector<int32_t > first = {3, 2, 3};

    std::size_t result =
            Solution::majority_element(first);

    std::size_t expected = 3;
    ASSERT_EQ(result, expected);
}

TEST_F(MajorityElement, SecondTest) {
    std::vector<int32_t > first = {2, 2, 1, 1, 1, 2, 2};

    std::size_t result =
            Solution::majority_element(first);

    std::size_t expected = 2;
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
