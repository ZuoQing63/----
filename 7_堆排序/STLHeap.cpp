#include <iostream>
#include <vector>
#include <algorithm>

void printheap(const std::vector<int>& arr)
{
    std::cout << "Array: ";
    for (auto& i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[])
{
    std::cout << "Origin: " << std::endl;
    std::vector<int> arr = {11, 2, 32, 44, 25, 63, 7, 10, 38};
    printheap(arr);

    std::make_heap(arr.begin(), arr.end(), std::greater<int>());
    std::cout << "Make Heap: " << std::endl;
    printheap(arr);

    arr.push_back(99);
    std::push_heap(arr.begin(), arr.end(), std::greater<int>());
    std::cout << "Push Heap: " << std::endl;
    printheap(arr);

    std::pop_heap(arr.begin(),arr.end(), std::greater<int>());
    std::cout << "Pop Heap: " << std::endl;
    printheap(arr);

    arr.pop_back();
    std::cout << "Pop back after pop heap: " << std::endl;
    printheap(arr);

    std::sort_heap(arr.begin(),arr.end(),std::greater<int>());
    std::cout << "Max Heap: " << std::endl;
    printheap(arr);
    
    return 0;
}