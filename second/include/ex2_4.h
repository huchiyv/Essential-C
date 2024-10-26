/**
 * copyright [2024] huchiyv
 * 有一个函数,以局部(local static) vector 存储 Pentagonal
 * 数列元素。此函数返回一个 const 指针。指向该 vector, vector
 * 的大小小于指定的元素个数,就扩充 vector 的大小。接下来再实现
 * 第二个函数,接受一个位置值,返回该位置上的元素。最后,编写测试数。
 */
#ifndef EX2_4_H_  // NOLINT
#define EX2_4_H_

#include <vector>
using namespace std;  // NOLINT

typedef const vector<int>* (*PentagonalFuncPtr)(int);

const vector<int>* GetPentagonal(int n);
int GetPentagonalElement(int pos , const vector<int>& pentagonal);
void DisplayPentagonal(int n, const vector<int>& pentagonal, PentagonalFuncPtr func);

#endif // EX2_4_H_  // NOLINT

