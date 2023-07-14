#include <iostream>

template<typename T>
void selectionSort(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        int minindex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort<int>(arr, size);

    std::cout << "Results: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}