#pragma once
#include <string>

/**
 * @brief Funkcja pomocnicza, usuwaj¹ca zeroa po przecinku, aby nie by³y one wyœwietlane na graficznym interfejsie
 * @param val Wartoœæ (double) której zera trzeba 'obci¹æ'.
 * @return String wartoœci double, z obciêtymi (niepotrzebnymi) zerami na koñcu.
 */
std::string double_to_string(double val);

/**
 * @brief Funkcja pomocnicza, zmieniaj¹ca stopnie na radiany.
 * @param deg Wartoœæ (int) stopni (0 - 360).
 * @return Wartoœæ (double) radianów.
 */
double degrees_to_radians(int deg);