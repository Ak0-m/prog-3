#pragma once
#include <vector>
#include <cstdint>

bool isSafe(std::vector<std::vector<uint8_t>> &mat, int row, int col);
void placeQueen(int row, std::vector<std::vector<uint8_t>> &mat, int &solutions);
int findAllQueen(int n);

