#pragma once
#include <string>

/**
 * @brief Funkcja pomocnicza, usuwaj�ca zeroa po przecinku, aby nie by�y one wy�wietlane na graficznym interfejsie
 * @param val Warto�� (double) kt�rej zera trzeba 'obci��'.
 * @return String warto�ci double, z obci�tymi (niepotrzebnymi) zerami na ko�cu.
 */
std::string double_to_string(double val);


constexpr double PI = 3.14159265;
/**
 * @brief Funkcja pomocnicza, zmieniaj�ca stopnie na radiany.
 * @param deg Warto�� (int) stopni (0 - 360).
 * @return Warto�� (double) radian�w.
 */
inline double degrees_to_radians(int deg) { return deg * PI / 180.0; }

/**
 * @brief Funkcja zmieniaj�ca wsp�rz�dne biegunowe na punkty (x,y,z), aby mo�na je by�o wyrysowa� w oknie
 * @param r d�ugo��
 * @param theta k�t na p�aszczy�nie xy
 * @param phi k�t na p�aszczy�nie yz
 */
void polar_to_xyz(double& r, double& theta, double& phi);
