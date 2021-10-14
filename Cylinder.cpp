#include "Cylinder.h"

Cylinder::Cylinder(const double _radius, const double _height) : Sphere(_radius)
{
	if (_height <= 0)
		throw "������ ������ ������ ���� ��������������� ������!\n";
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
	out << "������� ������� " << radius << ", ������� " << height <<
		", � �������� ������ ����������� " << square()
		<< " � ������� " << volume() << endl;
}