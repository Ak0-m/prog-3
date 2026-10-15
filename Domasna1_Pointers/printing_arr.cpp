#include <iostream>
#define LEN 10

void print_arr(int *arr, int len)
{
    for(int i=0; i<len; ++i, ++arr)
    {
        std::cout<<*arr<<" ";
    }
}

int main()
{
    int arr[LEN] = {6, 30, 29, 58, 32, 1, 500, 3, 442, 12};

    print_arr(arr, LEN);
}