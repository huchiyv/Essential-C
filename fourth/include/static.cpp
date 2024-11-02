/**
 * copyright (c) 2019, <NAME>
 */
#include "static.h"  // NOLINT
#include <string>
#include <algorithm>

bool Static::push(const std::string& str) {
    if (full()) {
        return false;
    }
    _static.push_back(str);
    return true;
}

bool Static::pop(std::string* str) {
    if (!empty()) {
        *str = _static.back();
        _static.pop_back();
        return true;
    }
     return false;
}

bool Static::peek(std::string* str) {
    if (!empty()) {
        *str = _static.back();
        return true;
    }
     return false;
}

bool Static::empty() {
    return _static.empty();
}

bool Static::full() {
     return _static.size() == MAX_SIZE;
}

bool Static::find(const std::string& str) {
    return _static.end() != std::find(_static.begin(), _static.end(), str);
}

int Static::count(const std::string& str) {
    return std::count(_static.begin(), _static.end(), str);
}
