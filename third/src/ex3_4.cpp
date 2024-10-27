/**
 * copyright (c) 2017 <NAME>
 */
#include "ex3_4.h"  // NOLINT

void readNumbers(vector<int>& numbers) {  // NOLINT
  vector<int> evenVector;
  vector<int> oddVector;
  for (auto& number : numbers) {
    if (number % 2 == 0) {
        evenVector.push_back(number);
    } else {
        oddVector.push_back(number);
    }
  }
    saveNumbers(evenVector, "even.txt");
    saveNumbers(oddVector, "odd.txt");
}

void saveNumbers(const vector<int>& numbers, const string& fileName) {
    ofstream file(fileName);
    for (auto& number : numbers) {
        file << number << endl;
    }
    file.close();
}
