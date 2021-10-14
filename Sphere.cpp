#include "Sphere.h"

Sphere::Sphere(const double _radius)
{
	if (_radius <= 0)
		throw "Радиус фигуры должен быть неотрицательным числом!\n";
	else
		radius = _radius;
}

Sphere::Sphere()
{
	radius = 1;
}

double Sphere::volume()
{
	return (4.0 * M_PI * radius * radius * radius) / 3.0;
}

double Sphere::square()
{
	return 4.0 * M_PI * radius * radius;
}

void Sphere::printInfo(ostream& out)
{
	out << "Шар радиуса " << radius <<
		" с площадью полной поверхности " << square()
		<< " и объемом " << volume() << endl;
}
