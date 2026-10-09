#include "gnome_sort.hpp"
#include <chrono>
#include <iostream>

int main()
{
    srand(time(0));
    for (int n = 100000; n > 1; n /= 10)
    {
        int *arr = new int[n];

        for (int i = 0; i < n; ++i)
        {
            arr[i] = rand() % n;
        }

        auto start_time = std::chrono::steady_clock::now();
        gnome_sort(arr, n);
        auto end_time = std::chrono::steady_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);

        std::cout << "for n:" << n << " time needed to sort is:" << elapsed.count() << "ns\n";

        delete[] arr;
    }
    return 0;
}
