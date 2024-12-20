/**
 * Copyright [2024] <huchiyv>
 */
#include <cxxabi.h>
#include <iostream>
#include <typeinfo>
#include <vector>
#include <list>
#include <string>
#include "ex2_2.h"  // NOLINT
#include "ex2_4.h"  // NOLINT
#include "ex2_6.h"  // NOLINT
#include "MathFunctions.h"

using namespace std;  // NOLINT
void testEx2_2() {
  vector<int> vec;
  int n = 0;
  cout << "please input the number of pentagonal numbers you want to get:"
       << endl;  // NOLINT
  cin >> n;
  while (n != 99) {
    if (GetPentagonalNumberColumn(n, vec)) {  // NOLINT
      cout << endl;
      int status;
      char* demangled =
          abi::__cxa_demangle(typeid(vec.at(0)).name(), 0, 0, &status);
      string type_name = demangled;
      free(demangled);  // 释放指针
      DisplayPentagonalNumberColumn(vec, type_name, n);
    }

    cout << "please input the number of pentagonal numbers you want to get:"
         << endl;  // NOLINT
    cin >> n;
  }
  const double outputValue = mySqrt1(n);
  cout << "The square root of " << n << " is " << outputValue << endl;
}

void TestEx2_4() {
  int n = 0;
  cout << "please input the number of pentagonal numbers you want to get:"
       << endl;  // NOLINT
  cin >> n;
  while (n != 99) {
    vector<int> vec(*GetPentagonal(n));
    cout << "Please choose a number based on your mood:" << endl;  // NOLINT
    int num = 0;
    cin >> num;
    int result = GetPentagonalElement(num, vec);
    if (result > 0) {  // NOLINT
      cout << "The " << num << "th pentagonal number is " << result << endl;
      int status;
      char* demangled =
          abi::__cxa_demangle(typeid(vec.at(0)).name(), 0, 0, &status);
      string type_name = demangled;
      free(demangled);  // 释放指针
      DisplayPentagonal(n, vec, GetPentagonal);
    }

    cout << "please input the number of pentagonal numbers you want to get:"
         << endl;  // NOLINT
    cin >> n;
  }
}

void TestEx2_6() {
  int a = 0, b = 0;
  cout << "please input two numbers:" << endl;  // NOLINT
  cin >> a >> b;
  int result = myMax(a, b);
  cout << "The maximum of " << a << " and " << b << " is " << result << endl;

  double c = 0.0, d = 0.0;
  cout << "please input two double numbers:" << endl;  // NOLINT
  cin >> c >> d;
  double result2 = myMax(c, d);
  cout << "The maximum of " << c << " and " << d << " is " << result2 << endl;

  string e = "", f = "";
  cout << "please input two strings:" << endl;  // NOLINT
  cin >> e >> f;
  string result3 = myMax(e, f);
  cout << "The maximum of " << e << " and " << f << " is " << result3 << endl;

  vector<int> vec;
  GetPentagonalNumberColumn(10, vec);
  int result4 = max(vec);
  cout << "The maximum of the first 10 pentagonal numbers is " << result4
       << endl;  // NOLINT

  double arr[] = {1.2, 3.4, 5.6, 7.8, 9.0};
  double result5 = max(arr, 5);
  cout << "The maximum of the first 5 double numbers is " << result5 << endl;

  return;
}

void TestListInsert() {
  string sval("Part Two");
  list<string> slist;
  slist.push_back("Part One");
  slist.push_back(sval);
  slist.push_back("Part Three");

  auto it = find(slist.begin(), slist.end(), sval);
  if (it != slist.end()) {
    slist.insert(it, 8, string("dummy"));
  }
  for (auto& s : slist) {
    cout << s << " "<< endl;
  }
  cout << endl;
}

void TestAlgorithms() {
  vector<int> vec = {1, 2, 3, 4, 5, 5, 5, 5};
  if (binary_search(vec.begin(), vec.end(), 3)) {
    cout << "3 is found in the vector" << endl;
  }
  auto value = count(vec.begin(), vec.end(), 5);
  cout << "The number of 5s in the vector is " << value << endl;

  vector<int> vec2 = { 2, 3, 4};
  auto it = search(vec.begin(), vec.end(), vec2.begin(), vec2.end());
  if (it != vec.end()) {
    cout << "The sub-vector is found in the vector" << endl;
    for (auto& v : vec2) {
      cout << v << " ";
    }
    cout << endl;
  }
}

int main() {
  TestAlgorithms();
  return 0;
}
