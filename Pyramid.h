#pragma once
#include "Cylinder.h"

/// <summary>
/// ����� ���������� ����������� ��������
/// </summary>
class Pyramid: Shape
{
private:
	/// <summary>
	/// ������
	/// </summary>
	double h;

	/// <summary>
	/// ����� �������
	/// </summary>
	double a;
public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Pyramid()
	{
		a = 1;
		h = 1;
	}

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	Pyramid(double side, double height)
	{
		if (height <= 0)
			cerr << "������ ������ ������ ���� ��������������� ������!\n";
		else
			h = height;

		if (side <= 0)
			cerr << "������� ������ ������ ���� ��������������� ������!\n";
		else
			a = side;
	}

	/// <summary>
	/// ���������� ������� ������ ����������� 
	/// ���������� ����������� ��������
	/// </summary>
	/// <returns></returns>
	double square() override
	{
		double deg = 60 * M_PI / 180.0;
		return (3.0 * a / 2.0) * (a / (2.0 * tan(deg)) + 
			sqrt(h * h + pow(a / (2.0 * tan(deg)), 2)));
	}

	/// <summary>
	/// ���������� ������ 
	/// ���������� ����������� ��������
	/// </summary>
	/// <returns></returns>
	double volume() override
	{
		return (a * a * h) / (4 * sqrt(3));
	}

	/// <summary>
	/// ����� ����������
	/// </summary>
	/// <param name="out"></param>
	void printInfo(ostream& out) override
	{
		out << "���������� ����������� �������� �� �������� " 
			<< a << ", ������� " << h << ", � �������� ������ ����������� " 
			<< square() << " � ������� " << volume() << endl;
	}
};