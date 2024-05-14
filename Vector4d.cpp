#include "Vector4d.h"

#define MATRIX_SIZE 4

//Vector4d::Vector4d()
//{
//	_data[0] = 0; _data[1] = 0; _data[2] = 0; _data[3] = 1;
//}
Vector4d::Vector4d(double x, double y, double z, double v)
{
	_data[0] = x; _data[1] = y; _data[2] = z; _data[3] = v;
}

double& Vector4d::operator[] (unsigned int idx) {
	return _data[idx];
}
double Vector4d::operator[] (unsigned int idx) const {
	return _data[idx];
}

Vector4d Vector4d::operator- (const Vector4d& vector){
	Vector4d result;
	for (int i = 0; i < MATRIX_SIZE; i++)
		result[i] = _data[i] - vector[i];
	return result;
}


Vector4d operator* (const Vector4d& vector, double value){
	Vector4d result;
	for (int i = 0; i < MATRIX_SIZE; i++)
		result[i] = vector[i] * value;
	return result;
}
