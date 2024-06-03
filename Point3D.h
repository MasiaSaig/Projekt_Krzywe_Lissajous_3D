#pragma once

struct Point3D {
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
};

void to_cartesian(Point3D& p); 

void to_spherical(Point3D& p);