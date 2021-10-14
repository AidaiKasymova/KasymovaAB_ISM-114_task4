#include "Pyramid.h"

Pyramid::Pyramid()
{
	a = 1;
	height = 1;
}

Pyramid::Pyramid(const double side, const double _height)
{
	if (_height <= 0)
		throw  "������ ������ ������ ���� ��������������� ������!\n";
	else
		height = _height;

	if (side <= 0)
		throw "������� ������ ������ ���� ��������������� ������!\n";
	else
		a = side;
}

double Pyramid::square()
{
	double deg = 60 * M_PI / 180.0;
	return (3.0 * a / 2.0) * (a / (2.0 * tan(deg)) +
		sqrt(height * height + pow(a / (2.0 * tan(deg)), 2)));
}

double Pyramid::volume()
{
	return (a * a * height) / (4 * sqrt(3));
}

void Pyramid::printInfo(ostream& out)
{
	out << "���������� ����������� �������� �� �������� "
		<< a << ", ������� " << height << ", � �������� ������ ����������� "
		<< square() << " � ������� " << volume() << endl;
}