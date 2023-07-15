#include <iostream>
#include <vector>

void countingSort(std::vector<int> &arr, int size)
{
    int max_num = arr[0];

    for (auto &i : arr)
    {
        if (i > max_num)
        {
            max_num = i;
        }
    }

    std::vector<int> count(max_num + 1);

    for (auto &i : arr)
    {
        ++count[i];
    }

    int k = 0;
    for (int i = 0; i <= max_num; ++i)
    {
        while (count[i] > 0)
        {
            arr[k] = i;
            --count[i];
            ++k;
        }
    }
}
int main()
{
    std::vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    countingSort(arr, arr.size());

    std::cout << "Results: ";
    for (auto &i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}