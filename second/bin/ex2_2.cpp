/**
 * Copyright [2024] <huchiyv>
 * Pentagonal 数列的值公式f(n)=n(3n-1)/2
 */
#include "ex2_2.h"  // NOLINT

bool GetPentagonalNumberColumn(int n, std::vector<int> &vec) {  // NOLINT
  return CheckValidity(n, vec);
}

void CalculatePentagonal(int n, std::vector<int> &vec) {
  for (int i = 1; i <= n; i++) {  // NOLINT
    int num = i * (3 * i - 1) / 2;
    vec.push_back(num);
  }
}

void DisplayPentagonalNumberColumn(const std::vector<int> &vec,
                                   const string &type, const int n) {
  cout << " Pentagonal Number Column:" << std::endl;
  for (int i = 0; i < n; i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
  cout << "type is : " << type << std::endl;
  std::cout << std::endl;
}