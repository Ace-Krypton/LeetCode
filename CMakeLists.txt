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
include(GoogleTest)
gtest_discover_tests(MergeSortedArray)

add_executable(RemoveElement
        Easy/RemoveElement/include/solution.hpp
        Easy/RemoveElement/tests/test.cpp
)

target_link_libraries(
        RemoveElement
        GTest::gtest_main
)

# Remove Duplicates From Sorted Array
include(GoogleTest)
gtest_discover_tests(RemoveElement)

add_executable(RemoveDuplicatesFromSortedArray
        Easy/RemoveDuplicatesFromSortedArray/include/solution.hpp
        Easy/RemoveDuplicatesFromSortedArray/tests/tests.cpp
)

target_link_libraries(
        RemoveDuplicatesFromSortedArray
        GTest::gtest_main
)

gtest_discover_tests(RemoveDuplicatesFromSortedArray)