#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Matrix {
private:
    double** data;
    int rows;
    int cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new double*[rows];
        // data = (double**)malloc(rows * sizeof(double));
        for(int i=0; i<rows; i++) {
            data[i] = new double[cols];
            for(int j=0; j<cols; j++) {
                data[i][j] = 0.0;
            }
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    void setElement(int r, int c, double value) {
        if (r >= rows || c >= cols || r < 0 || c < 0) {
            cerr << "Index out of range" << endl;
            return;
        }
        data[r][c] = value;
    }

    void print() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix addition(const Matrix& m) {
        if (rows != m.rows || cols != m.cols) {
            cerr << "Dimensions are not matching!" << endl;
            return Matrix(0, 0);
        }

        Matrix r(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                r.data[i][j] = data[i][j] + m.data[i][j];
            }
        }
        return r;
    }
    
    Matrix multiply(int scalar) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[i][j] = data[i][j] * scalar;
        return result;
    }

    Matrix multiply(float scalar) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[i][j] = data[i][j] * scalar;
        return result;
    }
};

int main() {
    Matrix m1(2, 2);
    m1.setElement(0, 0, 1);
    m1.setElement(0, 1, 2);
    m1.setElement(1, 0, 3);
    m1.setElement(1, 1, 4);

    Matrix m2(2, 2);
    m2.setElement(0, 0, 5);
    m2.setElement(0, 1, 6);
    m2.setElement(1, 0, 7);
    m2.setElement(1, 1, 8);

    // Matrix r1 = m1.multiply(2);
    // Matrix r2 = m2.multiply(0.5f);

    // r1.print();
    // r2.print();

    // m1.multiply(2).print();

    m1.addition(m2).print();
    // add.print();

    return 0;
}