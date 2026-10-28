#include "N_Queens.hpp"
#include <iostream>
#include <chrono>

int main()
{
    int n;
    std::cout << "До која вредност на n да проверува: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        auto start_time = std::chrono::steady_clock::now();
        findAllQueen(i);
        auto end_time = std::chrono::steady_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);

        std::cout << "за n:" << i << " потребно време да се најдат сите распоредби на кралици:" << elapsed.count() << "ns\n";
    }    
}    
