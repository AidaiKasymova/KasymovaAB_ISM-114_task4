#pragma once
#include "Sphere.h"

/// <summary>
/// ����������� �� ���� ����� ��������
/// </summary>
class Cylinder : public Sphere
{
private:
	/// <summary>
	/// ������ ��������
	/// </summary>
	double h;
public:
	/// <summary>
	/// ����������� � �����������
	/// </summary>
	Cylinder(double radius, double height): Sphere(radius)
	{
		if (height <= 0)
			cerr << "������ ������ ������ ���� ��������������� ������!\n";
		else
			h = height;
	}

	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Cylinder(): Sphere()
	{
		h = 1;
	}

	/// <summary>
	/// ���������� ������� ������ ����������� ��������
	/// </summary>
	/// <returns></returns>
	double square() override
	{
		return 2 * M_PI * r * h +
			2 * M_PI * r * r;
	}

	/// <summary>
	/// ���������� ������ ��������
	/// </summary>
	/// <returns></returns>
	double volume() override
	{
		return M_PI * r * r * h;
	}

	/// <summary>
	/// ����� ����������
	/// </summary>
	/// <param name="out"></param>
	void printInfo(ostream& out) override
	{
		out << "������� ������� " << r << ", ������� " << h << 
			", � �������� ������ ����������� " << square()
			<< " � ������� " << volume() << endl;
	}
};