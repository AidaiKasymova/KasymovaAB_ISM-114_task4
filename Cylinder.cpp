#include "Cylinder.h"

Cylinder::Cylinder(const double _radius, const double _height) : Sphere(_radius)
{
	if (_height <= 0)
		throw "Высота фигуры должна быть неотрицательным числом!\n";
	else
		height = _height;
}

Cylinder::Cylinder() : Sphere()
{
	height = 1;
}

double Cylinder::square()
{
	return 2 * M_PI * radius * height +
		2 * M_PI * radius * radius;
}

double Cylinder::volume()
{
	return M_PI * radius * radius * height;
}

void Cylinder::printInfo(ostream& out)
{
	out << "Цилиндр радиуса " << radius << ", высотой " << height <<
		", с площадью полной поверхности " << square()
		<< " и объемом " << volume() << endl;
}