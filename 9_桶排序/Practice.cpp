#include <iostream>
#include <vector>
#include <algorithm>

void bucketSort(float arr[], int size)
{
    // Please input:
    
}

int main()
{
    float arr[] = {0.42, 0.32, 0.64, 0.12, 0.22, 0.11, 0.90};
    int size = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, size);

    std::cout << "Results:";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}