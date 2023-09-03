#include "../include/solution.hpp"

class RansomNote : public ::testing::Test {
protected:
    ~RansomNote() override = default;
};

TEST_F(RansomNote, FirstTest) {
    std::string ransom_note = "a";
    std::string magazine = "b";

    bool result = Solution::can_construct(ransom_note, magazine);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

TEST_F(RansomNote, SecondTest) {
    std::string ransom_note = "aa";
    std::string magazine = "ab";

    bool result = Solution::can_construct(ransom_note, magazine);
    bool expected = false;

    ASSERT_EQ(result, expected);
}

TEST_F(RansomNote, ThirdTest) {
    std::string ransom_note = "aa";
    std::string magazine = "aab";

    bool result = Solution::can_construct(ransom_note, magazine);
    bool expected = true;

    ASSERT_EQ(result, expected);
}

auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
