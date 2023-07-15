#include <iostream>

int getMax(int arr[], int size)
{
    // Please input:

}
void countingSort(int arr[], int size, int exp)
{
    // Please input:

}
void radixSort(int arr[], int size)
{
    // Please input:

}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, size);

    std::cout << "Results: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}