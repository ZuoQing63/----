#include <iostream>
#include <vector>

void merge(std::vector<int> &arr, int left, int mid, int right)
{
    //Please input:

}

void mergeSort(std::vector<int> &arr, int left, int right)
{
    //Please input:
    
}

int main()
{
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "Results: ";
    for (auto &i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}