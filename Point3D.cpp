#include "Point3d.h"
#include <cmath>

void to_cartesian(Point3D& p) {
	auto [r, phi, theta] = p;
	p.x = r * sin(theta) * cos(phi);
	p.y = r * sin(theta) * sin(phi);
	p.z = r * cos(theta);
}

void to_spherical(Point3D& p) {
	auto [x, y, z] = p;
	p.x = std::sqrt(x * x + y * y + z * z);
	p.y = std::atan2(y, x);
	p.z = std::acos(z / p.x);
}