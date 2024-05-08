#pragma once

#include <array>

class Matrix4d {
public:
	Matrix4d();

	Matrix4d operator* (const Matrix4d& matrix);
	std::array<double, 4>& operator[] (unsigned int idx);
	const std::array<double, 4>& operator[] (unsigned int idx) const;
private:
	std::array<std::array<double, 4>, 4> _data;
};
