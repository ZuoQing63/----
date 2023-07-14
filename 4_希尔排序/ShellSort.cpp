#include <iostream>

template <typename T>
void shellSort(T arr[], int size)
{
    for (int gap = size / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < size; ++i)
        {
            int key = arr[i];
            int j = i;

            while (j >=0&&arr[j-gap]>key)
            {
                arr[j] = arr[j-gap];
                j -= gap;
            }
            arr[j] = key;
        }
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    shellSort<int>(arr, size);

    std::cout << "Results: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}