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

add_executable(LeetCodeJourney_MergeSortedArray
        Easy/MergeSortedArray/include/solution.hpp
        Easy/MergeSortedArray/tests/test.cpp
)

target_link_libraries(
        LeetCodeJourney_MergeSortedArray
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(LeetCodeJourney_MergeSortedArray)

add_executable(LeetCodeJourney_RemoveElement
        Easy/RemoveElement/include/solution.hpp
        Easy/RemoveElement/tests/test.cpp
)

target_link_libraries(
        LeetCodeJourney_RemoveElement
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(LeetCodeJourney_RemoveElement)