// Copyright [2024] <huchiyu>
#include <iostream>  // NOLINT
#include <string>
#include "TutorialConfig.h"
using namespace std;  // NOLINT
int main() {        // NOLINT
  string name;
  cout << "please enter you name:";
  cin >> name;
  cout << "\n"
       << "Hello  " << name << "  and byb!";
  std::cout << " Version " << EX1_VERSION_MAJOR << "." << EX1_VERSION_MINOR
            << std::endl;
  return 0;
}  // NOLINT