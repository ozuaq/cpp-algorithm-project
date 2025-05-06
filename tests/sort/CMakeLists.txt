add_executable(
    sort-tests 
    merge_sort_test.cpp
    quick_sort_test.cpp
)

target_link_libraries(
    sort-tests 
    PRIVATE 
        sort_lib
        GTest::gtest 
        GTest::gtest_main 
        GTest::gmock 
        GTest::gmock_main
)

add_test(${PROJECT_ALL_TESTS} sort-tests)
