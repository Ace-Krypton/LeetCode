cmake_minimum_required(VERSION 3.26)
project(LeetCodeJourney)

set(CMAKE_CXX_STANDARD 23)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Merge Sorted Array
add_executable(MergeSortedArray
        Easy/MergeSortedArray/include/solution.hpp
        Easy/MergeSortedArray/tests/test.cpp
)

target_link_libraries(
        MergeSortedArray
        GTest::gtest_main
)

# Remove Elements From Array
add_executable(RemoveElement
        Easy/RemoveElement/include/solution.hpp
        Easy/RemoveElement/tests/test.cpp
)

target_link_libraries(
        RemoveElement
        GTest::gtest_main
)

# Remove Duplicates From Sorted Array
add_executable(RemoveDuplicatesFromSortedArray
        Easy/RemoveDuplicatesFromSortedArray/include/solution.hpp
        Easy/RemoveDuplicatesFromSortedArray/tests/test.cpp
)

target_link_libraries(
        RemoveDuplicatesFromSortedArray
        GTest::gtest_main
)

# Remove Duplicates From Sorted Array II
add_executable(RemoveDuplicatesFromSortedArrayII
        Medium/RemoveDuplicatesfromSortedArrayII/include/solution.hpp
        Medium/RemoveDuplicatesfromSortedArrayII/tests/test.cpp
)

target_link_libraries(
        RemoveDuplicatesFromSortedArrayII
        GTest::gtest_main
)

# Majority Element
add_executable(MajorityElement
        Easy/MajorityElement/include/solution.hpp
        Easy/MajorityElement/tests/test.cpp
)

target_link_libraries(
        MajorityElement
        GTest::gtest_main
)

# Rotate Array
add_executable(RotateArray
        Medium/RotateArray/include/solution.hpp
        Medium/RotateArray/tests/test.cpp
)

target_link_libraries(
        RotateArray
        GTest::gtest_main
)

# Best Time to Buy and Sell Stock
add_executable(BestTimeToBuyAndSellStock
        Easy/BestTimeToBuyAndSellStock/include/solution.hpp
        Easy/BestTimeToBuyAndSellStock/tests/test.cpp
)

target_link_libraries(
        BestTimeToBuyAndSellStock
        GTest::gtest_main
)

# Best Time to Buy and Sell Stock II
add_executable(BestTimeToBuyAndSellStockII
        Medium/BestTimeToBuyAndSellStockII/include/solution.hpp
        Medium/BestTimeToBuyAndSellStockII/tests/test.cpp
)

target_link_libraries(
        BestTimeToBuyAndSellStockII
        GTest::gtest_main
)

# Jump Game
add_executable(JumpGame
        Medium/JumpGame/include/solution.hpp
        Medium/JumpGame/tests/test.cpp
)

target_link_libraries(
        JumpGame
        GTest::gtest_main
)

# Jump Game II
add_executable(JumpGameII
        Medium/JumpGameII/include/solution.hpp
        Medium/JumpGameII/tests/test.cpp
)

target_link_libraries(
        JumpGameII
        GTest::gtest_main
)

# H-Index
add_executable(HIndex
        Medium/HIndex/include/solution.hpp
        Medium/HIndex/tests/test.cpp
)

target_link_libraries(
        HIndex
        GTest::gtest_main
)

# Insert Delete GetRandom O(1)
add_executable(InsertDeleteGetRandomOOne
        Medium/InsertDeleteGetRandomOOne/include/solution.hpp
)

target_link_libraries(
        InsertDeleteGetRandomOOne
        GTest::gtest_main
)

# Product of Array Except Self
add_executable(ProductOfArrayExceptSelf
        Medium/ProductOfArrayExceptSelf/include/solution.hpp
        Medium/ProductOfArrayExceptSelf/tests/test.cpp
)

target_link_libraries(
        ProductOfArrayExceptSelf
        GTest::gtest_main
)

# Gas Station
add_executable(GasStation
        Medium/GasStation/include/solution.hpp
        Medium/GasStation/tests/test.cpp
)

target_link_libraries(
        GasStation
        GTest::gtest_main
)

# Candy
add_executable(Candy
        Hard/Candy/include/solution.hpp
        Hard/Candy/tests/test.cpp
)

target_link_libraries(
        Candy
        GTest::gtest_main
)

# Tapping Rain Water
add_executable(TappingRainWater
        Hard/TappingRainWater/include/solution.hpp
        Hard/TappingRainWater/tests/test.cpp
)

target_link_libraries(
        TappingRainWater
        GTest::gtest_main
)

# Roman to Integer
add_executable(RomanToInteger
        Easy/RomanToInteger/include/solution.hpp
        Easy/RomanToInteger/tests/test.cpp
)

target_link_libraries(
        RomanToInteger
        GTest::gtest_main
)

# Integer to Roman
add_executable(IntegerToRoman
        Medium/IntegerToRoman/include/solution.hpp
        Medium/IntegerToRoman/tests/test.cpp
)

target_link_libraries(
        IntegerToRoman
        GTest::gtest_main
)

# Length of Last Word
add_executable(LengthOfLastWord
        Easy/LengthOfLastWord/include/solution.hpp
        Easy/LengthOfLastWord/tests/test.cpp
)

target_link_libraries(
        LengthOfLastWord
        GTest::gtest_main
)

# Longest Common Prefix
add_executable(LongestCommonPrefix
        Easy/LongestCommonPrefix/include/solution.hpp
        Easy/LongestCommonPrefix/tests/test.cpp
)

target_link_libraries(
        LongestCommonPrefix
        GTest::gtest_main
)

# Reverse Words in a String
add_executable(ReverseWordsInAString
        Medium/ReverseWordsInAString/include/solution.hpp
        Medium/ReverseWordsInAString/tests/test.cpp
)

target_link_libraries(
        ReverseWordsInAString
        GTest::gtest_main
)

# Zigzag Conversion
add_executable(ZigzagConversion
        Medium/ZigzagConversion/include/solution.hpp
        Medium/ZigzagConversion/tests/test.cpp
)

target_link_libraries(
        ZigzagConversion
        GTest::gtest_main
)

# Find the Index of the First Occurrence in a String
add_executable(FindTheIndexOfFirstOccurrenceInString
        Easy/FindTheIndexOfFirstOccurrenceInString/include/solution.hpp
        Easy/FindTheIndexOfFirstOccurrenceInString/tests/test.cpp
)

target_link_libraries(
        FindTheIndexOfFirstOccurrenceInString
        GTest::gtest_main
)

# Text Justification
add_executable(TextJustification
        Hard/TextJustification/include/solution.hpp
        Hard/TextJustification/tests/test.cpp
)

target_link_libraries(
        TextJustification
        GTest::gtest_main
)

# Valid Palindrome
add_executable(ValidPalindrome
        Easy/ValidPalindrome/include/solution.hpp
        Easy/ValidPalindrome/tests/test.cpp
)

target_link_libraries(
        ValidPalindrome
        GTest::gtest_main
)

# Is Subsequence
add_executable(IsSubsequence
        Easy/IsSubsequence/include/solution.hpp
        Easy/IsSubsequence/tests/test.cpp
)

target_link_libraries(
        IsSubsequence
        GTest::gtest_main
)

# Jewels and Stones
add_executable(JewelsAndStones
        Easy/JewelsAndStones/include/solution.hpp
        Easy/JewelsAndStones/tests/test.cpp
)

target_link_libraries(
        JewelsAndStones
        GTest::gtest_main
)

# Two Sum II - Input Array Is Sorted
add_executable(TwoSumII
        Medium/TwoSumII/include/solution.hpp
        Medium/TwoSumII/tests/test.cpp
)

target_link_libraries(
        TwoSumII
        GTest::gtest_main
)

# Two Sum
add_executable(TwoSum
        Easy/TwoSum/include/solution.hpp
        Easy/TwoSum/tests/test.cpp
)

target_link_libraries(
        TwoSum
        GTest::gtest_main
)

# Container With Most Water
add_executable(ContainerWithMostWater
        Medium/ContainerWithMostWater/include/solution.hpp
        Medium/ContainerWithMostWater/tests/test.cpp
)

target_link_libraries(
        ContainerWithMostWater
        GTest::gtest_main
)

# Three Sum
add_executable(ThreeSum
        Medium/ThreeSum/include/solution.hpp
        Medium/ThreeSum/tests/test.cpp
)

target_link_libraries(
        ThreeSum
        GTest::gtest_main
)

# Minimum Size SubArray Sum
add_executable(MinSizeSubArraySum
        Medium/MinSizeSubArraySum/include/solution.hpp
        Medium/MinSizeSubArraySum/tests/test.cpp
)

target_link_libraries(
        MinSizeSubArraySum
        GTest::gtest_main
)

# Longest Substring Without Repeating Characters
add_executable(LongestSubstringWithoutRepeatingCharacters
        Medium/LongestSubstringWithoutRepeatingCharacters/include/solution.hpp
        Medium/LongestSubstringWithoutRepeatingCharacters/tests/test.cpp
)

target_link_libraries(
        LongestSubstringWithoutRepeatingCharacters
        GTest::gtest_main
)

# Longest Palindromic Substring
add_executable(LongestPalindromicSubstring
        Medium/LongestPalindromicSubstring/include/solution.hpp
        Medium/LongestPalindromicSubstring/tests/test.cpp
)

target_link_libraries(
        LongestPalindromicSubstring
        GTest::gtest_main
)

# Generate Parentheses
add_executable(GenerateParentheses
        Medium/GenerateParentheses/include/solution.hpp
        Medium/GenerateParentheses/tests/test.cpp
)

target_link_libraries(
        GenerateParentheses
        GTest::gtest_main
)

# Climbing Stairs
add_executable(ClimbingStairs
        Easy/ClimbingStairs/include/solution.hpp
        Easy/ClimbingStairs/tests/test.cpp
)

target_link_libraries(
        ClimbingStairs
        GTest::gtest_main
)