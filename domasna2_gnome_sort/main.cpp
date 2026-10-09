#include "gnome_sort.hpp"
#include <iostream>

int main()
{
    srand(time(0));

    int n;
    std::cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand() % n;
    }

    gnome_sort(arr, n);

    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    delete[] arr;

    return 0;
}
