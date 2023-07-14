#include <iostream>
template <typename T>
void bubbleSort(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
        for (int j = i + 1; j < size; ++j)
            if (arr[i] > arr[j])
            {
                auto temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int main(int argc, char **argv)
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort<int>(arr, size);

    std::cout << "Results: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}