#include <cstdint>
#include "N_Queens.hpp"
#include <vector>

bool isSafe(std::vector<std::vector<uint8_t>> &mat, int row, int col)
{
    for (int i = row - 1; i >= 0; --i)
    {
        if (mat[i][col])
        {
            return 0;
        }
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
    {
        if (mat[i][j])
        {
            return 0;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < mat.size(); --i, ++j)
    {
        if (mat[i][j])
        {
            return 0;
        }
    }

    return 1;
}

void placeQueen(int row, std::vector<std::vector<uint8_t>> &mat, int &numberOfSolutions)
{
    if (row == mat.size())
    {
        ++numberOfSolutions;
    }

    for (int i = 0; i < mat.size(); ++i)
    {
        if (isSafe(mat, row, i))
        {
            mat[row][i] = 1;
            placeQueen(row + 1, mat, numberOfSolutions);
            mat[row][i] = 0;
        }
    }
}

int findAllQueen(int n)
{
    std::vector<std::vector<uint8_t>> mat(n, std::vector<uint8_t>(n, 0));
    int numberOfSolutions = 0;

    placeQueen(0, mat, numberOfSolutions);
    return numberOfSolutions;
}    
