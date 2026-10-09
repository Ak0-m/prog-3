#include "gnome_sort.hpp"
#include <algorithm>

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
