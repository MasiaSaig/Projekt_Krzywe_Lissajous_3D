#include "Matrix4d.h"

constexpr double PI = 3.14159265;
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

Vector4d operator* (const Matrix4d gMatrix, const Vector4d gVector){
    unsigned int i, j;
    Vector4d tmp;
    for (i = 0; i < 4; i++){
        tmp[i] = 0.0;
        for (j = 0; j < 4; j++) tmp[i] = tmp[i] + (gMatrix[i][j] * gVector[j]);
    }
    return tmp;
}



// macierze transformacji

Matrix4d macierzTranslacji(double x, double y, double z) {
	Matrix4d trans;
	trans[0][0] = 1;
	trans[1][1] = 1;
	trans[2][2] = 1;
	trans[3][3] = 1;

	trans[0][3] = x;
	trans[1][3] = y;
	trans[2][3] = z;
	return trans;
}
Matrix4d macierzObrotuX(double kat) {
	Matrix4d trans;
	double radians = kat * PI / 180.0;
	trans[0][0] = 1.0;
	trans[1][1] = cos(radians);
	trans[1][2] = -sin(radians);
	trans[2][1] = sin(radians);
	trans[2][2] = cos(radians);
	trans[3][3] = 1.0;
	return trans;
}
Matrix4d macierzObrotuY(double kat) {
	Matrix4d trans;
	double radians = kat * PI / 180.0;
	trans[0][0] = cos(radians);
	trans[0][2] = sin(radians);
	trans[1][1] = 1.0;
	trans[2][0] = -sin(radians);
	trans[2][2] = cos(radians);
	trans[3][3] = 1.0;
	return trans;
}
Matrix4d macierzObrotuZ(double kat) {
	Matrix4d trans;
	double radians = kat * PI / 180.0;
	trans[0][0] = cos(radians);
	trans[0][1] = -sin(radians);
	trans[1][0] = sin(radians);
	trans[1][1] = cos(radians);
	trans[2][2] = 1.0;
	trans[3][3] = 1.0;
	return trans;
}
Matrix4d macierzSkalowania(double sx, double sy, double sz) {
	Matrix4d trans;
	trans[0][0] = sx;
	trans[1][1] = sy;
	trans[2][2] = sz;
	trans[3][3] = 1.0;
	return trans;
}

Matrix4d macierzRzutowania3Dna2D(double left, double right, double top, double bottom, double near_, double far_) {
	Matrix4d trans;
	// rzutowanie aksiomatyczne
	trans[0][0] = 2.0 * near_ / (right - left);
	trans[0][2] = (right + left) / (right - left);
	trans[1][1] = 2.0 * near_ / (top - bottom);
	trans[1][2] = (top + bottom) / (top - bottom);
	trans[2][2] = -(far_ + near_) / (far_ - near_);
	trans[2][3] = -2.0 * far_ * near_ / (far_ - near_);
	trans[3][2] = -1.0;
	trans[3][3] = 0.0;

	// rzutowanie prostok¹tne
	/*trans[0][0] = 2.0 / (right - left);
	trans[0][2] = (right + left) / (right - left);
	trans[1][1] = 2.0 / (top - bottom);
	trans[1][2] = (top + bottom) / (top - bottom);
	trans[2][2] = -2.0 / (far_ - near_);
	trans[2][3] = (far_ + near_) / (far_ - near_);
	trans[3][2] = -1.0;
	trans[3][3] = 0.0;*/

	return trans;
}