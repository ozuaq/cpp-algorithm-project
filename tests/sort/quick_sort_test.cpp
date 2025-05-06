#include "algorithm_project/sort/quick_sort.h"

#include <gtest/gtest.h>

#include <vector>

class QuickSortTest : public testing::Test
{
protected:
    // このTest Suiteで使うメンバがあれば追加
};

TEST_F(QuickSortTest, HandlesBasicUnsortedVector)
{
    std::vector<int> arr = {12, 9, 15, 3, 8, 17, 6, 1};
    std::vector<int> expected = {1, 3, 6, 8, 9, 12, 15, 17};

    QuickSort(arr, 0, arr.size());

    EXPECT_EQ(arr, expected);
}