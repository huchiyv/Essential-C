/**
 * copyright <NAME>
 */
#ifndef EX2_6_H  // NOLINT
#define EX2_6_H

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;  // NOLINT

template <typename T>
inline T myMax(const T &t1, const T &t2) {
  return t1 > t2 ? t1 : t2;
}

template <typename elemtype>
inline elemtype max(const vector<elemtype> &t) {
  return *max_element(t.begin(), t.end());
}

template <typename arraytype>
inline arraytype max(const arraytype parray[], int size) {
  return *max_element(parray, parray + size);
}

#endif  // EX2_6_H  // NOLINT