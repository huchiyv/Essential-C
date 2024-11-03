/**
 * copyright (c) 2019, <NAME>
 */
#include <iostream>

#include "ex4_5.h"  // NOLINT

int TestEx4_5() {
  // 创建两个矩阵
  int rows = 4;
  int cols = 4;
  double data1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};  // 2x2 矩阵
  double data2[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};  // 2x2 矩阵

  Matrix mat1(rows, cols, data1, 16);
  Matrix mat2(rows, cols, data2, 16);

  // 打印矩阵
  std::cout << "Matrix 1:" << std::endl;
  mat1.print();
  std::cout << "Matrix 2:" << std::endl;
  mat2.print();

  // 测试加法
  Matrix resultAdd = mat1 + mat2;
  std::cout << "Result of Matrix 1 + Matrix 2:" << std::endl;
  resultAdd.print();

  // 测试减法
  Matrix resultSubtract = mat1 - mat2;
  std::cout << "Result of Matrix 1 - Matrix 2:" << std::endl;
  resultSubtract.print();

  // 测试乘法
  Matrix resultMultiply = mat1 * mat2;
  std::cout << "Result of Matrix 1 * Matrix 3:" << std::endl;
  resultMultiply.print();

  // 测试元素访问
  std::cout << "Element at (1, 1) in Matrix 1: " << mat1(1, 1) << std::endl;

  return 0;
}

int main() {
  TestEx4_5();
   return 0;
}
