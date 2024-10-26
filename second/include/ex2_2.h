/**
 * Copyright [2024] <huchiyv>
 * @file ex2_2.h
 * @author <huchiyv> (<EMAIL>)
 * @brief Header file for ex2_2.cpp
 * @details Pentagonal 数列的值公式f(n)=n(3n-1)/2,此产生1,5,12,22,35等元素值,试论文一
 * 个函数。利用上述公式,将产生的元素放到用户传入的
 * vector之中。元素个数由用户指定。请检查元 素个数的有效性(大 vector
 * 的所写第二个函数,能够解精给定的
 * 有元素——————打印出来,此函数的第二步数接受一个字符中。表示存放在
 * vector内的数列的类型,Π 再写一个maint),测试上述两个函数。
 * @version 0.1
 * @date 2024-10-25
 *
 */
#ifndef EX2_2_H  // NOLINT
#define EX2_2_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;  // NOLINT

void GetPentagonalNumberColumn(int n, std::vector<int> &vec);  // NOLINT
void DisplayPentagonalNumberColumn(const std::vector<int> &vec, const string &type);  // NOLINT

#endif // EX2_2_H  // NOLINT