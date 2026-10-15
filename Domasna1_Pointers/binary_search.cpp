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
    for(int i=0; i<len; ++i, ++arr)
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

int bin_search_it(int* arr, int len, int k)
{
    int l=0, r=len-1, m;

    while(l<=r)
    {
        m=(l+r)/2;

        if(*(arr+m)==k)
        {
            return m;
        }
        else if(*(arr+m)>k)
        {
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    return -1;
}

int bin_search_rec(int* arr, int l, int r, int k)
{
    if(l<=r)
    {
        int m=(l+r)/2;

        if(*(arr+m)==k)
        {
            return m;
        }
        else if(*(arr+m)>k)
        {
            return bin_search_rec (arr, l, m-1, k);
        }
        else
        {
            return bin_search_rec (arr, m+1, r, k);
        }
    }
    return -1;
}

int main()
{
    int arr[LEN] = {14, -50, 31, 83, -29, -38, 20, 73, 14, 12};

    bubble_sort(arr, LEN);

    int k;
    std::cin>>k;

    std::cout<<bin_search_it(arr, LEN, k)<<"\n";
    std::cout<<bin_search_rec(arr, 0, LEN-1, k)<<"\n";
}