#pragma once

#include "Vector4d.h";
#include <array>

class Matrix4d {
public:
	Matrix4d();

	Matrix4d operator* (const Matrix4d& matrix);
	std::array<double, 4>& operator[] (unsigned int idx);
	const std::array<double, 4>& operator[] (unsigned int idx) const;

	friend Vector4d operator*(const Matrix4d, const Vector4d);
private:
	std::array<std::array<double, 4>, 4> _data;
};


Matrix4d macierzTranslacji(double x, double y, double z);
Matrix4d macierzObrotuX(double kat);
Matrix4d macierzObrotuY(double kat);
Matrix4d macierzObrotuZ(double kat);
Matrix4d macierzSkalowania(double sx, double sy, double sz);

/**
 * @brief Funkcja licz¹ca macierz transformacji, rzutowania punktów 3 wymiarowych na 2 wymiarowe.
 * @param left Odleg³oœæ od œrodka w lewo ekranu rzutowania
 * @param right Odleg³oœæ od œrodka w prawo ekranu rzutowania
 * @param top Odleg³oœæ od œrodka w górê ekranu rzutowania
 * @param bottom Odleg³oœæ od œrodka w dó³ ekranu rzutowania
 * @param near Odleg³oœæ œrodka ekranu rzutowania od po³o¿enia kamery
 * @param far Odleg³oœæ od po³o¿enia kamery, rzutowanych punktów (ograniczenie ³apania dalekich punktów).
 * @return (Matri4d) macierz transformacji, któr¹ mo¿na zastosowaæ na punktach za pomoc¹ funkcji line2d().
 * @ref line2d "Funkcja s³u¿¹ca do zastosowania macierzy transformacji na punktach."
 */
Matrix4d macierzRzutowania3Dna2D(double left, double right, double top, double bottom, double near_, double far_);