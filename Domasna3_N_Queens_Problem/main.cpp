#include "N_Queens.hpp"
#include <iostream>

int main()
{
    int n;
    std::cout << "Внеси број: ";
    std::cin >> n;
    int numberOfSolutions = findAllQueen(n);
    std::cout << "Број на решенија е: " << numberOfSolutions;

    return 0;
}
