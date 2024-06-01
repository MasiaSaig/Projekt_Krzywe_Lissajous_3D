#pragma once
#include <string>

/**
 * @brief Funkcja pomocnicza, usuwaj¹ca zeroa po przecinku, aby nie by³y one wyœwietlane na graficznym interfejsie
 * @param val Wartoœæ (double) której zera trzeba 'obci¹æ'.
 * @return String wartoœci double, z obciêtymi (niepotrzebnymi) zerami na koñcu.
 */
std::string double_to_string(double val);


constexpr double PI = 3.14159265;
/**
 * @brief Funkcja pomocnicza, zmieniaj¹ca stopnie na radiany.
 * @param deg Wartoœæ (int) stopni (0 - 360).
 * @return Wartoœæ (double) radianów.
 */
inline double degrees_to_radians(int deg) { return deg * PI / 180.0; }

/**
 * @brief Funkcja zmieniaj¹ca wspó³rzêdne biegunowe na punkty (x,y,z), aby mo¿na je by³o wyrysowaæ w oknie
 * @param r d³ugoœæ
 * @param theta k¹t na p³aszczyŸnie xy
 * @param phi k¹t na p³aszczyŸnie yz
 */
void polar_to_xyz(double& r, double& theta, double& phi);
