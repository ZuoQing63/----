#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void bucketSort(std::vector<T>& arr, int size)
{
    // Please input:
    std::vector<T> buckets[size];
    for (int i = 0; i < size; ++i)
    {
        int bucketIndex = size*arr[i];
        buckets[bucketIndex].push_back(arr[i]);
    }

    for (int i = 0; i < size; ++i)
    {
        std::sort(buckets[i].begin(), buckets[i].end());
    }

    int k = 0;
    for (int i = 0; i < size; ++i)
    {
        for (auto& j : buckets[i])
        {
            arr[k] = j;
            ++k;
        }
    }
}

int main()
{
    std::vector<float> arr = {0.42, 0.32, 0.64, 0.12, 0.22, 0.11, 0.90};

    bucketSort<float>(arr, arr.size());

    std::cout << "Results:";
    for (auto& i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}