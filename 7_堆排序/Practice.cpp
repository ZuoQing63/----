#include <iostream>
#include <vector>

void heapify(int arr[], int size, int root)
{
    //Please input:

}

void heapSort(int arr[], int size)
{
    //Please input:
    
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, size);

    std::cout << "Result: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}