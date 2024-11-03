/**
 * copyright <NAME>
 */
#ifndef EX4_5_H  // NOLINT
#define EX4_5_H

#include <iostream>
#include <vector>
using std::vector;

class Matrix {
 public:
  explicit Matrix(int rows = 4, int cols = 4);
  Matrix(int rows, int cols, double* data, int size);
  Matrix operator+(const Matrix& other) const;
  Matrix operator+=(const Matrix& other);
  Matrix operator-(const Matrix& other) const;
  Matrix operator-=(const Matrix& other) const;
  Matrix operator*(const Matrix& other) const;
  Matrix operator=(const Matrix& other);
  void print() const;
  double& operator()(int row, int col);
  double operator()(int row, int col) const;
 private:
  int m_rows;
  int m_cols;
  vector <vector <double> >* m_data;
};
#endif  // EX4_5_H     // NOLINT
