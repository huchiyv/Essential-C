/**
 * copyright <NAME>
 */
#include "ex4_5.h"  // NOLINT

using std::vector;
using std::cout;
using std::endl;


Matrix::Matrix(int rows, int cols):m_rows(rows), m_cols(cols) {
    m_data = new vector< vector<double> >(rows, vector<double>(cols));
}

Matrix::Matrix(int rows, int cols, double* data, int size):m_rows(rows), m_cols(cols) {
    m_data = new vector< vector<double> >(rows, vector<double>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            (*m_data)[i][j] = data[i * cols + j];
        }
    }

}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result(m_rows, m_cols);
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            result(i, j) = (*m_data)[i][j] + other(i, j);
        }
    }
    return result;
}

Matrix Matrix::operator+=(const Matrix& other) {
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            (*m_data)[i][j] += other(i, j);
        }
    }
    return *this;
}

Matrix Matrix::operator-(const Matrix& other) const {
  Matrix result(m_rows, m_cols);
  for (int i = 0; i < m_rows; i++) {
    for (int j = 0; j < m_cols; j++) {
      result(i, j) = (*m_data)[i][j] - other(i, j);
    }
  }
  return result;
}

Matrix Matrix::operator-=(const Matrix& other) const {
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            (*m_data)[i][j] -= other(i, j);
        }
    }
    return *this;
}

Matrix Matrix::operator*(const Matrix& other) const {
    if (m_cols != other.m_rows) {
      throw std::runtime_error("Matrix dimensions do not match");
    }
    Matrix result(m_rows, other.m_cols);
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < other.m_cols; j++) {
            double sum = 0;
            for (int k = 0; k < m_cols; k++) {
                sum += (*m_data)[i][k] * other(k, j);
            }
            result(i, j) = sum;
        }
    }
    return result;
}


Matrix Matrix::operator=(const Matrix& other) {
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            (*m_data)[i][j] = other(i, j);
        }
    }
    return *this;
}

void Matrix::print() const {
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            cout << (*m_data)[i][j] << " ";
        }
        cout << endl;
    }
}

double& Matrix::operator()(int row, int col) {
  if (row >= m_rows || col >= m_cols) {
    throw std::out_of_range("Index out of range");
  }
  return (*m_data)[row][col];
}

double Matrix::operator()(int row, int col) const {
  if (row >= m_rows || col >= m_cols) {
    throw std::out_of_range("Index out of range");
  }
  return (*m_data)[row][col];
}
