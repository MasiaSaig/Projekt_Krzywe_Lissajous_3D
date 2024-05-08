#include "Matrix4d.h"

#define MATRIX_SIZE 4

Matrix4d::Matrix4d()
{
	for (int i = 0; i < _data.size(); ++i) {
		_data[i].fill(0);
	}
	_data[3][3] = 1;
}

std::array<double, MATRIX_SIZE>& Matrix4d::operator[] (unsigned int idx) {
    return _data[idx];
}
const std::array<double, MATRIX_SIZE>& Matrix4d::operator[] (unsigned int idx) const {
    return _data[idx];
}

Matrix4d Matrix4d::operator* (const Matrix4d& matrix) {
	Matrix4d result_matrix;
    result_matrix._data[3][3] = 0;  // zeruje macierz

	for (int i = 0; i < MATRIX_SIZE; ++i) {
        for (int j = 0; j < MATRIX_SIZE; ++j) {
            for (int k = 0; k < MATRIX_SIZE; ++k) {
                result_matrix[i][j] += _data[i][k] * matrix[k][j];
            }
        }
    }
    return result_matrix;
}
