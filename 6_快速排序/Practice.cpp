#include <iostream>

int partition(int arr[], int low, int high) 
{
    //Please input:

}

void quickSort(int arr[], int low, int high)
{
    //Please input:
    
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    std::cout << "Result: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}