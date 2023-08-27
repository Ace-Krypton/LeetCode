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