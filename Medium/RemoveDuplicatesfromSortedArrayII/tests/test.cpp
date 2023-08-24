#include "../include/solution.hpp"

class RemoveDuplicatesFromSortedArrayII : public ::testing::Test {
protected:
    ~RemoveDuplicatesFromSortedArrayII() override = default;
};

TEST_F(RemoveDuplicatesFromSortedArrayII, FirstTest) {
    std::vector<int32_t > elements = {1, 1, 1, 2, 2, 3};

    std::size_t result =
            Solution::remove_duplicates(elements);

    std::size_t expected = 5;
    ASSERT_EQ(result, expected);
}

TEST_F(RemoveDuplicatesFromSortedArrayII, SecondTest) {
    std::vector<int32_t > elements = {0, 0, 1, 1, 1, 1, 2, 3, 3};

    std::size_t result =
            Solution::remove_duplicates(elements);

    std::size_t expected = 7;
    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
