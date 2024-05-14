#pragma once

#include <array>

//Vector4d operator*(const Vector4d& vector, double value);

class Vector4d {
public:
	//Vector4d();
	Vector4d(double x=0, double y=0, double z=0, double v=1);
	Vector4d operator-(const Vector4d& vector);
	double& operator[] (unsigned int idx);
	double operator[] (unsigned int idx) const;

	friend Vector4d operator*(const Vector4d& vector, double value);
private:
	std::array<double, 4> _data;
};

//Vector4d operator* (const Vector4d& vector, double value) {
//	Vector4d result;
//	for (int i = 0; i < 4; i++)
//		result[i] = vector[i] * value;
//	return result;
//}