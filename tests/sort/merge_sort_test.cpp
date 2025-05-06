#include "algorithm_project/sort/merge_sort.h"

#include <gtest/gtest.h>

#include <vector>

class MergeSortTest : public testing::Test
{
protected:
    // このTest Suiteで使うメンバがあれば追加
};

TEST_F(MergeSortTest, HandlesBasicUnsortedVector)
{
    std::vector<int> arr = {12, 9, 15, 3, 8, 17, 6, 1};
    std::vector<int> expected = {1, 3, 6, 8, 9, 12, 15, 17};

    MergeSort(arr, 0, arr.size());

    EXPECT_EQ(arr, expected);
}