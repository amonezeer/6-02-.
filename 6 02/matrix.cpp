#include "matrix.h"

template<typename T>
Matrix<T>::Matrix(int rows, int cols) : rows(rows), cols(cols) {
    data = new T * [rows];
    for (int i = 0; i < rows; ++i) {
        data[i] = new T[cols];
    }
}

template<typename T>
void Matrix<T>::fillFromKeyboard() {
    std::cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> data[i][j];
        }
    }
}

template<typename T>
void Matrix<T>::fillRandom() {
    srand(time(NULL));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            data[i][j] = rand() % 100; // Предполагаем, что T - числовой тип
        }
    }
}

template<typename T>
void Matrix<T>::display() const {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << data[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

template<typename T>
T Matrix<T>::findMax() const {
    T maxElement = data[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (data[i][j] > maxElement) {
                maxElement = data[i][j];
            }
        }
    }
    return maxElement;
}

template<typename T>
T Matrix<T>::findMin() const {
    T minElement = data[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (data[i][j] < minElement) {
                minElement = data[i][j];
            }
        }
    }
    return minElement;
}

template<typename T>
Matrix<T> Matrix<T>::operator+(const Matrix<T>& other) const {
    Matrix<T> result(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

template<typename T>
Matrix<T> Matrix<T>::operator-(const Matrix<T>& other) const {
    Matrix<T> result(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result.data[i][j] = data[i][j] - other.data[i][j];
        }
    }
    return result;
}

template<typename T>
Matrix<T> Matrix<T>::operator*(const T& scalar) const {
    Matrix<T> result(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result.data[i][j] = data[i][j] * scalar;
        }
    }
    return result;
}

template<typename T>
Matrix<T> Matrix<T>::operator/(const T& scalar) const {
    if (scalar == 0) {
        std::cerr << "Division by zero!" << std::endl;
        exit(1);
    }
    Matrix < T
