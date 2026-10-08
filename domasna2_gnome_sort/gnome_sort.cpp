#include <chrono>
#include <iostream>

#define LEN 100000

void gnome_sort(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        if (i == 0 || arr[i] >= arr[i - 1])
        {
            ++i;
        }
        else
        {
            std::swap(arr[i], arr[i - 1]);
            --i;
        }
    }
}

int main()
{
    int arr[LEN];

    std::srand(time(0));

    for (int i = 0; i < LEN; ++i)
    {
        arr[i] = rand() % LEN;
    }

    // auto start = std::chrono::high_resolution_clock::now();

    gnome_sort(arr, LEN);

    // auto end = std::chrono::high_resolution_clock::now();
    // auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    // std::cout << duration.count() << "\n";

    for (int i = 0; i < LEN; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
