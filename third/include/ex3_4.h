/**
 * copyright <NAME>
 * 编写一个程序,利用istream_iterator 从标准输入设备读取一连中整数,利用ostream_iterator
 * 将其中的奇数写至某个文件、每个数值皆以空格分隔,再利用ostream_iterator将其中的偶数写
 * 到另一个文件,每个数值单独放在一行中。
 */
#ifndef EX3_4_H   // NOLINT
#define EX3_4_H

#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
using namespace std;  // NOLINT

void readNumbers(vector<int>& numbers);  // NOLINT

void saveNumbers(const vector<int>& numbers, const string& fileName);  // NOLINT
#endif // EX3_4_H  // NOLINT