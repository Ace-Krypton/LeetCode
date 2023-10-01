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

# Ransom Note
add_executable(RansomNote
        Easy/RansomNote/include/solution.hpp
        Easy/RansomNote/tests/test.cpp
)

target_link_libraries(
        RansomNote
        GTest::gtest_main
)

# Single Number
add_executable(SingleNumber
        Easy/SingleNumber/include/solution.hpp
        Easy/SingleNumber/tests/test.cpp
)

target_link_libraries(
        SingleNumber
        GTest::gtest_main
)

# Isomorphic Strings
add_executable(IsomorphicStrings
        Easy/IsomorphicStrings/include/solution.hpp
        Easy/IsomorphicStrings/tests/test.cpp
)

target_link_libraries(
        IsomorphicStrings
        GTest::gtest_main
)

# Word Pattern
add_executable(WordPattern
        Easy/WordPattern/include/solution.hpp
        Easy/WordPattern/tests/test.cpp
)

target_link_libraries(
        WordPattern
        GTest::gtest_main
)

# Valid Anagram
add_executable(ValidAnagram
        Easy/ValidAnagram/include/solution.hpp
        Easy/ValidAnagram/tests/test.cpp
)

target_link_libraries(
        ValidAnagram
        GTest::gtest_main
)

# Group Anagrams
add_executable(GroupAnagrams
        Medium/GroupAnagrams/include/solution.hpp
        Medium/GroupAnagrams/tests/test.cpp
)

target_link_libraries(
        GroupAnagrams
        GTest::gtest_main
)

# Happy Number
add_executable(HappyNumber
        Easy/HappyNumber/include/solution.hpp
        Easy/HappyNumber/tests/test.cpp
)

target_link_libraries(
        HappyNumber
        GTest::gtest_main
)

# Contains Duplicate II
add_executable(ContainsDuplicateII
        Easy/ContainsDuplicateII/include/solution.hpp
        Easy/ContainsDuplicateII/tests/test.cpp
)

target_link_libraries(
        ContainsDuplicateII
        GTest::gtest_main
)

# Longest Consecutive Sequence
add_executable(LongestConsecutiveSequence
        Medium/LongestConsecutiveSequence/include/solution.hpp
        Medium/LongestConsecutiveSequence/tests/test.cpp
)

target_link_libraries(
        LongestConsecutiveSequence
        GTest::gtest_main
)

# Summary Ranges
add_executable(SummaryRanges
        Easy/SummaryRanges/include/solution.hpp
        Easy/SummaryRanges/tests/test.cpp
)

target_link_libraries(
        SummaryRanges
        GTest::gtest_main
)

# Merge Intervals
add_executable(MergeIntervals
        Medium/MergeIntervals/include/solution.hpp
        Medium/MergeIntervals/tests/test.cpp
)

target_link_libraries(
        MergeIntervals
        GTest::gtest_main
)

# Insert Interval
add_executable(InsertInterval
        Medium/InsertInterval/include/solution.hpp
        Medium/InsertInterval/tests/test.cpp
)

target_link_libraries(
        InsertInterval
        GTest::gtest_main
)

# Minimum Number of Arrows to Burst Balloons
add_executable(MinimumNumberOfArrowsToBurstBalloons
        Medium/MinimumNumberOfArrowsToBurstBalloons/include/solution.hpp
        Medium/MinimumNumberOfArrowsToBurstBalloons/tests/test.cpp
)

target_link_libraries(
        MinimumNumberOfArrowsToBurstBalloons
        GTest::gtest_main
)

# Get Combinations
add_executable(GetCombinations
        Easy/GetCombinations/include/solution.hpp
        Easy/GetCombinations/tests/test.cpp
)

target_link_libraries(
        GetCombinations
        GTest::gtest_main
)

# Valid Parentheses
add_executable(ValidParentheses
        Easy/ValidParentheses/include/solution.hpp
        Easy/ValidParentheses/tests/test.cpp
)

target_link_libraries(
        ValidParentheses
        GTest::gtest_main
)

# Simplify Path
add_executable(SimplifyPath
        Medium/SimplifyPath/include/solution.hpp
        Medium/SimplifyPath/tests/test.cpp
)

target_link_libraries(
        SimplifyPath
        GTest::gtest_main
)

# Simplify Path
add_executable(MinStack
        Medium/MinStack/include/solution.hpp
)

target_link_libraries(
        MinStack
        GTest::gtest_main
)

# Evaluate Reverse Polish Notation
add_executable(EvaluateReversePolishNotation
        Medium/EvaluateReversePolishNotation/include/solution.hpp
        Medium/EvaluateReversePolishNotation/tests/test.cpp
)

target_link_libraries(
        EvaluateReversePolishNotation
        GTest::gtest_main
)

# Basic Calculator
add_executable(BasicCalculator
        Hard/BasicCalculator/include/solution.hpp
        Hard/BasicCalculator/tests/test.cpp
)

target_link_libraries(
        BasicCalculator
        GTest::gtest_main
)

# Linked List Cycle
add_executable(LinkedListCycle
        Easy/LinkedListCycle/include/solution.hpp
)

target_link_libraries(
        LinkedListCycle
        GTest::gtest_main
)

# Add Two Numbers
add_executable(AddTwoNumbers
        Medium/AddTwoNumbers/include/solution.hpp
        Medium/AddTwoNumbers/tests/test.cpp
)

target_link_libraries(
        AddTwoNumbers
        GTest::gtest_main
)

# Merge Two Sorted Lists
add_executable(MergeTwoSortedLists
        Easy/MergeTwoSortedLists/include/solution.hpp
        Easy/MergeTwoSortedLists/tests/test.cpp
)

target_link_libraries(
        MergeTwoSortedLists
        GTest::gtest_main
)

# Copy List with Random Pointer
add_executable(CopyListWithRandomPointer
        Medium/CopyListWithRandomPointer/include/solution.hpp
)

target_link_libraries(
        CopyListWithRandomPointer
        GTest::gtest_main
)

# Reverse Linked List II
add_executable(ReverseLinkedListII
        Medium/ReverseLinkedListII/include/solution.hpp
)

target_link_libraries(
        ReverseLinkedListII
        GTest::gtest_main
)

# Palindrome Linked List
add_executable(PalindromeLinkedList
        Easy/PalindromeLinkedList/include/solution.hpp
        Easy/PalindromeLinkedList/tests/test.cpp
)

target_link_libraries(
        PalindromeLinkedList
        GTest::gtest_main
)

# Remove Nth Node From End Of List
add_executable(RemoveNthNodeFromEndOfList
        Medium/RemoveNthNodeFromEndOfList/include/solution.hpp
        Medium/RemoveNthNodeFromEndOfList/tests/test.cpp
)

target_link_libraries(
        RemoveNthNodeFromEndOfList
        GTest::gtest_main
)

# Remove Duplicates from Sorted List II
add_executable(RemoveDuplicatesFromSortedListII
        Medium/RemoveDuplicatesFromSortedListII/include/solution.hpp
        Medium/RemoveDuplicatesFromSortedListII/tests/test.cpp
)

target_link_libraries(
        RemoveDuplicatesFromSortedListII
        GTest::gtest_main
)

# Rotate List
add_executable(RotateList
        Medium/RotateList/include/solution.hpp
        Medium/RotateList/tests/test.cpp
)

target_link_libraries(
        RotateList
        GTest::gtest_main
)

# Partition List
add_executable(PartitionList
        Medium/PartitionList/include/solution.hpp
        Medium/PartitionList/tests/test.cpp
)

target_link_libraries(
        PartitionList
        GTest::gtest_main
)

# LRU Cache
add_executable(LRUCache
        Medium/LRUCache/include/solution.hpp
        Medium/LRUCache/tests/test.cpp
)

target_link_libraries(
        LRUCache
        GTest::gtest_main
)

# Remove Duplicates from Sorted List
add_executable(RemoveDuplicatesFromSortedList
        Easy/RemoveDuplicatesFromSortedList/include/solution.hpp
        Easy/RemoveDuplicatesFromSortedList/tests/test.cpp
)

target_link_libraries(
        RemoveDuplicatesFromSortedList
        GTest::gtest_main
)

# Maximum Depth of Binary Tree
add_executable(MaximumDepthOfBinaryTree
        Easy/MaximumDepthOfBinaryTree/include/solution.hpp
        Easy/MaximumDepthOfBinaryTree/tests/test.cpp
)

target_link_libraries(
        MaximumDepthOfBinaryTree
        GTest::gtest_main
)

# Same Tree
add_executable(SameTree
        Easy/SameTree/include/solution.hpp
        Easy/SameTree/tests/test.cpp
)

target_link_libraries(
        SameTree
        GTest::gtest_main
)

# Invert Binary Tree
add_executable(InvertBinaryTree
        Easy/InvertBinaryTree/include/solution.hpp
        Easy/InvertBinaryTree/tests/test.cpp
)

target_link_libraries(
        InvertBinaryTree
        GTest::gtest_main
)

# Symmetric Tree
add_executable(SymmetricTree
        Easy/SymmetricTree/include/solution.hpp
        Easy/SymmetricTree/tests/test.cpp
)

target_link_libraries(
        SymmetricTree
        GTest::gtest_main
)

# Construct Binary Tree from Preorder and Inorder Traversal
add_executable(ConstructBinaryTreeFromPreorderAndInorderTraversal
        Medium/ConstructBinaryTreeFromPreorderAndInorderTraversal/include/solution.hpp
        Medium/ConstructBinaryTreeFromPreorderAndInorderTraversal/tests/test.cpp
)

target_link_libraries(
        ConstructBinaryTreeFromPreorderAndInorderTraversal
        GTest::gtest_main
)

# Construct Binary Tree from Inorder and Postorder Traversal
add_executable(ConstructBinaryTreeFromInorderAndPostorderTraversal
        Medium/ConstructBinaryTreeFromInorderAndPostorderTraversal/include/solution.hpp
        Medium/ConstructBinaryTreeFromInorderAndPostorderTraversal/tests/test.cpp
)

target_link_libraries(
        ConstructBinaryTreeFromInorderAndPostorderTraversal
        GTest::gtest_main
)

# Path Sum
add_executable(PathSum
        Easy/PathSum/include/solution.hpp
        Easy/PathSum/tests/test.cpp
)

target_link_libraries(
        PathSum
        GTest::gtest_main
)

# Count Complete Tree Nodes
add_executable(CountCompleteTreeNodes
        Easy/CountCompleteTreeNodes/include/solution.hpp
        Easy/CountCompleteTreeNodes/tests/test.cpp
)

target_link_libraries(
        CountCompleteTreeNodes
        GTest::gtest_main
)

# Rotate Image
add_executable(RotateImage
        Medium/RotateImage/include/solution.hpp
        Medium/RotateImage/tests/test.cpp
)

target_link_libraries(
        RotateImage
        GTest::gtest_main
)

# Spiral Matrix
add_executable(SpiralMatrix
        Medium/SpiralMatrix/include/solution.hpp
        Medium/SpiralMatrix/tests/test.cpp
)

target_link_libraries(
        SpiralMatrix
        GTest::gtest_main
)

# Set Matrix Zeroes
add_executable(SetMatrixZeroes
        Medium/SetMatrixZeroes/include/solution.hpp
        Medium/SetMatrixZeroes/tests/test.cpp
)

target_link_libraries(
        SetMatrixZeroes
        GTest::gtest_main
)

# Game of Life
add_executable(GameOfLife
        Medium/GameOfLife/include/solution.hpp
        Medium/GameOfLife/tests/test.cpp
)

target_link_libraries(
        GameOfLife
        GTest::gtest_main
)

# Add Binary
add_executable(AddBinary
        Easy/AddBinary/include/solution.hpp
        Easy/AddBinary/tests/test.cpp
)

target_link_libraries(
        AddBinary
        GTest::gtest_main
)

# Reverse Bits
add_executable(ReverseBits
        Easy/ReverseBits/include/solution.hpp
        Easy/ReverseBits/tests/test.cpp
)

target_link_libraries(
        ReverseBits
        GTest::gtest_main
)

# Number of 1 Bits
add_executable(NumberOf1Bits
        Easy/NumberOf1Bits/include/solution.hpp
        Easy/NumberOf1Bits/tests/test.cpp
)

target_link_libraries(
        NumberOf1Bits
        GTest::gtest_main
)

# Single Number II
add_executable(SingleNumberII
        Medium/SingleNumberII/include/solution.hpp
        Medium/SingleNumberII/tests/test.cpp
)

target_link_libraries(
        SingleNumberII
        GTest::gtest_main
)

# Bitwise AND of Numbers Range
add_executable(BitwiseANDOfNumbersRange
        Medium/BitwiseANDOfNumbersRange/include/solution.hpp
        Medium/BitwiseANDOfNumbersRange/tests/test.cpp
)

target_link_libraries(
        BitwiseANDOfNumbersRange
        GTest::gtest_main
)

# Find Bottom Left Tree Value
add_executable(FindBottomLeftTreeValue
        Medium/FindBottomLeftTreeValue/include/solution.hpp
        Medium/FindBottomLeftTreeValue/tests/test.cpp
)

target_link_libraries(
        FindBottomLeftTreeValue
        GTest::gtest_main
)

# Path Sum II
add_executable(PathSumII
        Medium/PathSumII/include/solution.hpp
        Medium/PathSumII/tests/test.cpp
)

target_link_libraries(
        PathSumII
        GTest::gtest_main
)

# Merge Strings Alternately
add_executable(MergeStringsAlternatively
        Easy/MergeStringsAlternatively/include/solution.hpp
        Easy/MergeStringsAlternatively/tests/test.cpp
)

target_link_libraries(
        MergeStringsAlternatively
        GTest::gtest_main
)

# Greatest Common Divisor of Strings
add_executable(GreatestCommonDivisorOfStrings
        Easy/GreatestCommonDivisorOfStrings/include/solution.hpp
        Easy/GreatestCommonDivisorOfStrings/tests/test.cpp
)

target_link_libraries(
        GreatestCommonDivisorOfStrings
        GTest::gtest_main
)

# Kids With the Greatest Number of Candies
add_executable(KidsWithTheGreatestNumberOfCandies
        Easy/KidsWithTheGreatestNumberOfCandies/include/solution.hpp
        Easy/KidsWithTheGreatestNumberOfCandies/tests/test.cpp
)

target_link_libraries(
        KidsWithTheGreatestNumberOfCandies
        GTest::gtest_main
)

# Can Place Flowers
add_executable(CanPlaceFlowers
        Easy/CanPlaceFlowers/include/solution.hpp
        Easy/CanPlaceFlowers/tests/test.cpp
)

target_link_libraries(
        CanPlaceFlowers
        GTest::gtest_main
)

# Reverse Vowels of a String
add_executable(ReverseVowelsOfAString
        Easy/ReverseVowelsOfAString/include/solution.hpp
        Easy/ReverseVowelsOfAString/tests/test.cpp
)

target_link_libraries(
        ReverseVowelsOfAString
        GTest::gtest_main
)

# Increasing Triplet Subsequence
add_executable(IncreasingTripletSubsequence
        Medium/IncreasingTripletSubsequence/include/solution.hpp
        Medium/IncreasingTripletSubsequence/tests/test.cpp
)

target_link_libraries(
        IncreasingTripletSubsequence
        GTest::gtest_main
)

# String Compression
add_executable(StringCompression
        Medium/StringCompression/include/solution.hpp
        Medium/StringCompression/tests/test.cpp
)

target_link_libraries(
        StringCompression
        GTest::gtest_main
)

# Move Zeroes
add_executable(MoveZeroes
        Easy/MoveZeroes/include/solution.hpp
        Easy/MoveZeroes/tests/test.cpp
)

target_link_libraries(
        MoveZeroes
        GTest::gtest_main
)

# Max Number of K-Sum Pairs
add_executable(MaxNumberOfK-SumPairs
        Medium/MaxNumberOfK-SumPairs/include/solution.hpp
        Medium/MaxNumberOfK-SumPairs/tests/test.cpp
)

target_link_libraries(
        MaxNumberOfK-SumPairs
        GTest::gtest_main
)

# Maximum Average Subarray I
add_executable(MaximumAverageSubarrayI
        Easy/MaximumAverageSubarrayI/include/solution.hpp
        Easy/MaximumAverageSubarrayI/tests/test.cpp
)

target_link_libraries(
        MaximumAverageSubarrayI
        GTest::gtest_main
)

# Maximum SubArray
add_executable(MaximumSubArray
        Medium/MaximumSubArray/include/solution.hpp
        Medium/MaximumSubArray/tests/test.cpp
)

target_link_libraries(
        MaximumSubArray
        GTest::gtest_main
)

# Maximum Number of Vowels in a Substring of Given Length
add_executable(MaximumNumberOfVowelsInASubstringOfGivenLength
        Medium/MaximumNumberOfVowelsInASubstringOfGivenLength/include/solution.hpp
        Medium/MaximumNumberOfVowelsInASubstringOfGivenLength/tests/test.cpp
)

target_link_libraries(
        MaximumNumberOfVowelsInASubstringOfGivenLength
        GTest::gtest_main
)

# Max Consecutive Ones III
add_executable(MaxConsecutiveOnesIII
        Medium/MaxConsecutiveOnesIII/include/solution.hpp
        Medium/MaxConsecutiveOnesIII/tests/test.cpp
)

target_link_libraries(
        MaxConsecutiveOnesIII
        GTest::gtest_main
)

# Longest Subarray of 1's After Deleting One Element
add_executable(LongestSubArrayOfOnesAfterDeletingOneElement
        Medium/LongestSubArrayOfOnesAfterDeletingOneElement/include/solution.hpp
        Medium/LongestSubArrayOfOnesAfterDeletingOneElement/tests/test.cpp
)

target_link_libraries(
        LongestSubArrayOfOnesAfterDeletingOneElement
        GTest::gtest_main
)

# Find the Highest Altitude
add_executable(FindTheHighestAltitude
        Easy/FindTheHighestAltitude/include/solution.hpp
        Easy/FindTheHighestAltitude/tests/test.cpp
)

target_link_libraries(
        FindTheHighestAltitude
        GTest::gtest_main
)

# Find Pivot Index
add_executable(FindPivotIndex
        Easy/FindPivotIndex/include/solution.hpp
        Easy/FindPivotIndex/tests/test.cpp
)

target_link_libraries(
        FindPivotIndex
        GTest::gtest_main
)

# Find the Difference of Two Arrays
add_executable(FindTheDifferenceOfTwoArrays
        Easy/FindTheDifferenceOfTwoArrays/include/solution.hpp
        Easy/FindTheDifferenceOfTwoArrays/tests/test.cpp
)

target_link_libraries(
        FindTheDifferenceOfTwoArrays
        GTest::gtest_main
)

# Unique Number of Occurrences
add_executable(UniqueNumberOfOccurrences
        Easy/UniqueNumberOfOccurrences/include/solution.hpp
        Easy/UniqueNumberOfOccurrences/tests/test.cpp
)

target_link_libraries(
        UniqueNumberOfOccurrences
        GTest::gtest_main
)

# Determine if Two Strings Are Close
add_executable(DetermineIfTwoStringsAreClose
        Medium/DetermineIfTwoStringsAreClose/include/solution.hpp
        Medium/DetermineIfTwoStringsAreClose/tests/test.cpp
)

target_link_libraries(
        DetermineIfTwoStringsAreClose
        GTest::gtest_main
)

# Equal Row and Column Pairs
add_executable(EqualRowAndColumnPairs
        Medium/EqualRowAndColumnPairs/include/solution.hpp
        Medium/EqualRowAndColumnPairs/tests/test.cpp
)

target_link_libraries(
        EqualRowAndColumnPairs
        GTest::gtest_main
)

# Reverse Words in a String III
add_executable(ReverseWordsInAStringIII
        Easy/ReverseWordsInAStringIII/include/solution.hpp
        Easy/ReverseWordsInAStringIII/tests/test.cpp
)

target_link_libraries(
        ReverseWordsInAStringIII
        GTest::gtest_main
)

# Removing Stars From a String
add_executable(RemovingStarsFromAString
        Medium/RemovingStarsFromAString/include/solution.hpp
        Medium/RemovingStarsFromAString/tests/test.cpp
)

target_link_libraries(
        RemovingStarsFromAString
        GTest::gtest_main
)

# Asteroid Collision
add_executable(AsteroidCollision
        Medium/AsteroidCollision/include/solution.hpp
        Medium/AsteroidCollision/tests/test.cpp
)

target_link_libraries(
        AsteroidCollision
        GTest::gtest_main
)

# Decode String
add_executable(DecodeString
        Medium/DecodeString/include/solution.hpp
        Medium/DecodeString/tests/test.cpp
)

target_link_libraries(
        DecodeString
        GTest::gtest_main
)