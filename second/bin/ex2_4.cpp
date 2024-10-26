/**
 * copyright (c) 2017 <NAME>
 */
#include "ex2_4.h"  // NOLINT
#include <iostream>

const vector<int>* GetPentagonal(int n) {
  static vector<int> penta;
  for (int i = 1; i <= n; i++) {
    int num = i * (3 * i - 1) / 2;
    penta.push_back(num);
    }
    return &penta;
}

int GetPentagonalElement(int pos, const vector<int>& pentagonal) {   // NOLINT
    if (pos < 1 || pos > pentagonal.size()) {
        return -1;
    }
    const vector<int> *pVec = GetPentagonal(pos);
    return (*pVec)[pos-1];
}

void DisplayPentagonal(int n, const vector<int>& pentagonal,
                       PentagonalFuncPtr func) {
                        if (func == nullptr) {
                            if (n < 1 || n > pentagonal.size()) {
                                std::cout << "Invalid input" << std::endl;
                                return;
                            }
                            for (int i = 1; i <= n; i++) {
                                std::cout << pentagonal[i-1] << " ";
                            }
                            std::cout << std::endl;
                        } else {
                          std::cout << "Using custom function" << endl;
                          const vector<int>* pVec = func(n);
                          if (pVec == nullptr) {
                            std::cout << "Invalid input" << std::endl;
                            return;
                          }
                          for (int i = 1; i <= n; i++) {
                            std::cout << (*pVec)[i-1] << " ";
                          }
                          std::cout << std::endl;
                        }
}


