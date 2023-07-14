#include <iostream>
#include <vector>

void Merge(std::vector<int> &arr, int left, int mid, int right)
{
    int size_left = mid - left + 1;
    int size_right = right - mid;

    // std::vector<int> leftarr(arr.begin()+left, arr.begin()+mid);
    // std::vector<int> rightarr(arr.begin()+mid+1, arr.begin()+right);
    std::vector<int> leftarr;
    for (int i = 0; i < size_left; ++i)
    {
        leftarr.push_back(arr[left + i]);
    }
    std::vector<int> rightarr;
    for (int i = 0; i < size_right; ++i)
    {
        rightarr.push_back(arr[mid + 1 + i]);
    }
    int i = 0;
    int j = 0;
    int k = left;
    while (i < size_left && j < size_right)
    {
        if (leftarr[i] < rightarr[j])
        {
            arr[k] = leftarr[i];
            ++i;
        }
        else
        {
            arr[k] = rightarr[j];
            ++j;
        }
        ++k;
    }
    while (i < size_left)
    {
        arr[k] = leftarr[i];
        ++i;
        ++k;
    }
    while (j < size_right)
    {
        arr[k] = rightarr[j];
        ++j;
        ++k;
    }
}

void MergeSort(std::vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);

        Merge(arr, left, mid, right);
    }
}

int main()
{
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    MergeSort(arr, 0, arr.size() - 1);

    std::cout << "Results: ";
    for (auto &i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}