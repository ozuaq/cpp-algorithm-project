#include "algorithm_project/sort/merge_sort.h"

#include <vector>

void MergeSort(std::vector<int>& arr, int left, int right) {
    if(right - left == 1) {
        return;
    }

    int range = right - left;
    int mid = left + range / 2;

    MergeSort(arr, left, mid);
    MergeSort(arr, mid, right);

    std::vector<int> buff;
    buff.reserve(range);

    for(int i = left; i < mid; i++) {
        buff.push_back(arr[i]);
    }
    for(int i = right - 1; i >= mid; i--) {
        buff.push_back(arr[i]);
    }

    int left_index = 0;
    int right_index = buff.size() - 1;

    for(int i = left; i < right; i++) {
        if(buff[left_index] < buff[right_index]) {
            arr[i] = buff[left_index++];
        } else {
            arr[i] = buff[right_index--];
        } 
    }
}