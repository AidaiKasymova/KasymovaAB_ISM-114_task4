#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;

/// <summary>
/// ������� ����� ������
/// </summary>
class Shape
{
public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Shape() {};
	// ������ ����������� ������:
	virtual double volume() = 0;
	virtual double square() = 0;
	virtual void printInfo(ostream& out) = 0;
};

/// <summary>
/// ����� ��� �������� ����
/// </summary>
class Sphere: Shape
{
protected:
	/// <summary>
	/// ������ ����
	/// </summary>
	double r = 1;

public:
	/// <summary>
	/// ������� ������ � ��������� ���������� 
	/// (����������� � ���������� - ��������� �������)
	/// </summary>
	/// <param name="radius"></param>
	Sphere(double radius)
	{
		if (radius <= 0)
			cerr << "������ ������ ������ ���� ��������������� ������!\n";
		else
			r = radius;
	}

	/// <summary>
	/// ����������� �� ���������
	/// (������� ��� � ��������� ��������)
	/// </summary>
	Sphere()
	{
		r = 1;
	}

	/// <summary>
	/// ���������� ������ ����
	/// </summary>
	/// <returns></returns>
	virtual double volume()
	{
		return (4.0 * M_PI * r * r * r) / 3.0;
	}

	/// <summary>
	/// ���������� ������� ������ ����������� ����
	/// </summary>
	/// <returns></returns>
	virtual double square()
	{
		return 4.0 * M_PI * r * r;
	}

	/// <summary>
	/// ����� ����������
	/// </summary>
	/// <param name="out"></param>
	virtual void printInfo(ostream& out)
	{
		out << "��� ������� " << r << 
			" � �������� ������ ����������� " << square() 
			<< " � ������� " << volume() << endl;
	}
};