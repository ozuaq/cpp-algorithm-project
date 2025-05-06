#include "algorithm_project/sort/quick_sort.h"

#include <vector>

void QuickSort(std::vector<int> &arr, int left, int right)
{
    if (right - left <= 1)
    {
        return;
    }

    int ave_index = (left + right) / 2;
    int pivot = arr[ave_index];
    std::swap(arr[ave_index], arr[right - 1]);

    int pivot_index = left;

    for (int i = left; i < right - 1; ++i)
    {
        if (arr[i] < pivot)
        {
            std::swap(arr[pivot_index], arr[i]);
            pivot_index++;
        }
    }
    std::swap(arr[pivot_index], arr[right - 1]);

    QuickSort(arr, left, pivot_index);
    QuickSort(arr, pivot_index, right);
}