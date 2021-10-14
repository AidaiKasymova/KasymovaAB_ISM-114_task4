#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

/// <summary>
/// ������� ����� ������
/// </summary>
class Shape
{
public:
	~Shape(){};
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
	double radius = 1;

public:
	/// <summary>
	/// ������� ������ � ��������� ���������� 
	/// (����������� � ���������� - ��������� �������)
	/// </summary>
	/// <param name="_radius"></param>
	Sphere(const double _radius);

	/// <summary>
	/// ����������� �� ���������
	/// (������� ��� � ��������� ��������)
	/// </summary>
	Sphere();

	/// <summary>
	/// ���������� ������ ����
	/// </summary>
	/// <returns></returns>
	virtual double volume();

	/// <summary>
	/// ���������� ������� ������ ����������� ����
	/// </summary>
	/// <returns></returns>
	virtual double square();

	/// <summary>
	/// ����� ����������
	/// </summary>
	/// <param name="out"></param>
	virtual void printInfo(ostream& out);
};