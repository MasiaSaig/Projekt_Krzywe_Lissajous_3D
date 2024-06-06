#include "HelperFunctions.h"
#define _USE_MATH_DEFINES
#include <cmath>

//ehhh - programowanie na windowsie - nawet pi nie dziala
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

std::string double_to_string(double val) {
	std::string amp = std::to_string(val);
	amp.erase(amp.find_last_not_of('0') + 1, std::string::npos);
	amp.erase(amp.find_last_not_of('.') + 1, std::string::npos);
	return amp;
}

double degrees_to_radians(int deg)
{
	return deg * M_PI / 180.0;
}