#include "matrix.h"

using namespace std;

int main() {
    Matrix<int> mat1(3, 3);
    mat1.fillRandom();
    cout << "Matrix 1:\n";
    mat1.display();
    cout << "Max element: " << mat1.findMax() << endl;
    cout << "Min element: " << mat1.findMin() << endl;

    Matrix<int> mat2(3, 3);
    mat2.fillRandom();
    cout << "\nMatrix 2:\n";
    mat2.display();
    cout << "Max element: " << mat2.findMax() << endl;
    cout << "Min element: " << mat2.findMin() << endl;

    Matrix<int> mat3 = mat1 + mat2;
    cout << "\nMatrix 3 (Addition):\n";
    mat3.display();

    Matrix<int> mat4 = mat1 - mat2;
    cout << "\nMatrix 4 (Subtraction):\n";
    mat4.display();

    Matrix<int> mat5 = mat1 * 2;
    cout << "\nMatrix 5 (Scalar Multiplication):\n";
    mat5.display();

    Matrix<int> mat6 = mat2 / 2;
    cout << "\nMatrix 6 (Scalar Division):\n";
    mat6.display();

    return 0;
}
