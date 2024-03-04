#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <cstdlib>
#include <ctime>

template<typename T>
class Matrix {
private:
    T** data;
    int rows;
    int cols;

public:
    Matrix(int rows, int cols);
    void fillFromKeyboard();
    void fillRandom();
    void display() const;
    T findMax() const;
    T findMin() const;

    Matrix<T> operator+(const Matrix<T>& other) const;
    Matrix<T> operator-(const Matrix<T>& other) const;
    Matrix<T> operator*(const T& scalar) const;
    Matrix<T> operator/(const T& scalar) const;

    ~Matrix();
};

#endif // MATRIX_H
