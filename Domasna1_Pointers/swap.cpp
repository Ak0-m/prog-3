#include <iostream>

void swap_ptr(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void swap_ref(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a, b;

    std::cin>>a>>b;

    swap_ptr(&a, &b);
    std::cout<<a<<" "<<b<<"\n";

    swap_ref(a, b);
    std::cout<<a<<" "<<b<<"\n";

}