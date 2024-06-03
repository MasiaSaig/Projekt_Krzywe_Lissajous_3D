#include "Point3d.h"
#include <cmath>

void to_cartesian(Point3D& p) {
	auto [r, phi, theta] = p;
	p.x = r * std::sin(theta) * std::cos(phi);
	p.y = r * std::sin(theta) * std::sin(phi);
	p.z = r * std::cos(theta);
}

void to_spherical(Point3D& p) {
	auto [x, y, z] = p;
	p.x = std::sqrt(x * x + y * y + z * z);
	p.y = std::atan2(y, x);
	p.z = std::acos(z / p.x);
}