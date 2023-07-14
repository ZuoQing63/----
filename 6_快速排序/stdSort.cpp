#include <iostream>
#include <vector>
#include <algorithm>

void print_arr(const std::vector<int>& arr)
{
    std::cout << "Results: ";
    for (auto &i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int size = arr.size();

    //std::sort(arr.begin(), arr.end(), std::less<int>());                                      // using fast sort
    std::sort(arr.begin(), arr.end(), [](const int& i, const int& j) { return i < j; });        //Lambda
    print_arr(arr);

    //std::sort(arr.begin(), arr.end(), std::greater<int>());                                   // using fast sort
    std::sort(arr.begin(), arr.end(), [](const int& i, const int& j) { return i > j; });        //Lambda
    print_arr(arr);
    return 0;
}