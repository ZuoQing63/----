#include <iostream>
#include <vector>

void heapify(std::vector<int> &arr, int size, int root)
{
    int max_node = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;
    if (left < size && arr[left] > arr[max_node])
    {
        max_node = left;
    }
    if (right < size && arr[right] > arr[max_node])
    {
        max_node = right;
    }

    if (max_node != root)
    {
        int temp = arr[max_node];
        arr[max_node] = arr[root];
        arr[root] = temp;
        heapify(arr, size, max_node);
    }
}

void heapSort(std::vector<int> &arr, int size)
{
    // Make_heap
    for (int i = size / 2 - 1; i >= 0; --i)
    {
        heapify(arr, size, i);
    }

    std::cout << "Heap: ";
    for (auto &i : arr)
    {
        std::cout << i << " ";
    }

    for (int i = size - 1; i >= 0; --i)
    {
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        heapify(arr, i, 0);
    }
}

int main()
{
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    heapSort(arr, arr.size());

    std::cout << "Result: ";
    for (auto &i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}