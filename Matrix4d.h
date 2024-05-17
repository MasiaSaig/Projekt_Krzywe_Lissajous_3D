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
 * @brief Funkcja licz�ca macierz transformacji, rzutowania punkt�w 3 wymiarowych na 2 wymiarowe.
 * @param left Odleg�o�� od �rodka w lewo ekranu rzutowania
 * @param right Odleg�o�� od �rodka w prawo ekranu rzutowania
 * @param top Odleg�o�� od �rodka w g�r� ekranu rzutowania
 * @param bottom Odleg�o�� od �rodka w d� ekranu rzutowania
 * @param near Odleg�o�� �rodka ekranu rzutowania od po�o�enia kamery
 * @param far Odleg�o�� od po�o�enia kamery, rzutowanych punkt�w (ograniczenie �apania dalekich punkt�w).
 * @return (Matri4d) macierz transformacji, kt�r� mo�na zastosowa� na punktach za pomoc� funkcji line2d().
 * @ref line2d "Funkcja s�u��ca do zastosowania macierzy transformacji na punktach."
 */
Matrix4d macierzRzutowania3Dna2D(double left, double right, double top, double bottom, double near_, double far_);