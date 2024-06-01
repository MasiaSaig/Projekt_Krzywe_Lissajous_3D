#include "HelperFunctions.h"


std::string double_to_string(double val) {
	std::string amp = std::to_string(val);
	amp.erase(amp.find_last_not_of('0') + 1, std::string::npos);
	amp.erase(amp.find_last_not_of('.') + 1, std::string::npos);
	return amp;
}

void polar_to_xyz(double& r, double& theta, double& phi) {
	double x, y, z;
	x = r * cos(theta) * cos(phi);
	y = r * cos(theta) * sin(phi);
	z = r * sin(theta);
	r = x; theta = y; phi = z;
}