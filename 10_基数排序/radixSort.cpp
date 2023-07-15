#include <iostream>
#include <vector>

int getMax(const std::vector<int> &arr, int size)
{
    int max = arr[0];
    for (auto &i : arr)
    {
        if (i > max)
        {
            max = i;
        }
    }
    return max;
}
void countingSort(std::vector<int> &arr, int size, int exp)
{
    std::vector<int> output(size);
    int count[10] = {0};

    for (int i = 0; i < size; ++i)
    {
        ++count[(arr[i] / exp) % 10];
    }
    for (int i = 0; i < 10; ++i)
    {
        count[i] += count[i - 1];
    }
    for (int i = size - 1; i >= 0; --i)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        --count[(arr[i] / exp) % 10];
    }
    for (int i = 0; i < size; ++i)
    {
        arr[i] = output[i];
    }
}
void radixSort(std::vector<int> &arr, int size)
{
    int max = getMax(arr, size);
    for (int exp = 1; max / exp > 0; exp *= 10)
    {
        countingSort(arr, size, exp);
    }
}
int main()
{
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    radixSort(arr, arr.size());

    std::cout << "Results: ";
    for (auto &i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}