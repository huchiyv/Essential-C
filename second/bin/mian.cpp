/**
 * Copyright [2024] <huchiyv>
 */
#include <cxxabi.h>
#include <iostream>
#include <typeinfo>
#include <vector>

#include "MathFunctions.h"
#include "ex2_2.h"  // NOLINT

using namespace std;  // NOLINT

int main() {
    vector<int> vec;
    GetPentagonalNumberColumn(10, vec);
    cout << endl;
    int status;
    char* demangled =
    abi::__cxa_demangle(typeid(vec.at(0)).name(), 0, 0, &status);
    string type_name = demangled;
    free(demangled);  // 释放指针
    DisplayPentagonalNumberColumn(vec, type_name);
    const double outputValue = sqrt(10);
    cout << "The square root of " << 10 << " is " << outputValue << endl;
    return 0;
}