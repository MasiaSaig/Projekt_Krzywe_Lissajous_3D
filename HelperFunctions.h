#pragma once
#include <string>

/**
 * @brief Funkcja pomocnicza, usuwaj�ca zeroa po przecinku, aby nie by�y one wy�wietlane na graficznym interfejsie
 * @param val Warto�� (double) kt�rej zera trzeba 'obci��'.
 * @return String warto�ci double, z obci�tymi (niepotrzebnymi) zerami na ko�cu.
 */
std::string double_to_string(double val);

/**
 * @brief Funkcja pomocnicza, zmieniaj�ca stopnie na radiany.
 * @param deg Warto�� (int) stopni (0 - 360).
 * @return Warto�� (double) radian�w.
 */
double degrees_to_radians(int deg);