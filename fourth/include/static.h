/**
 * copyright <NAME>
 */
#ifndef STATIC_H  // NOLINT
#define STATIC_H

#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Static {
 public:
     bool push(const std::string& str);
     bool pop(std::string* str);
     bool peek(std::string* str);
     bool empty();
     bool full();
     bool find(const std::string& str);
     int count(const std::string& str);
     int size() { return _static.size(); }
    const int MAX_SIZE = 10;
 private:
     vector<string> _static;
};

#endif  // STATIC_H  // NOLINT