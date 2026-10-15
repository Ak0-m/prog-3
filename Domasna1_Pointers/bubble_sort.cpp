#include <iostream>
#define LEN 10

void swap_ptr(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void print_arr(int *arr, int len)
{
    for(int i=0; i<len; i++, ++arr)
    {
        std::cout<<*arr<<" ";
    }
}

void bubble_sort(int* arr, int len)
{
    for(int i=0; i<len; ++i)
    {
        for(int j=0; j<len-i-1; ++j)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                swap_ptr(arr+j, arr+j+1);
            }
        }
    }
}

int main()
{
    int arr[LEN] = {14, -50, 31, 83, -29, -38, 20, 73, 14, 12};

    bubble_sort(arr, LEN);
    print_arr(arr, LEN);
}