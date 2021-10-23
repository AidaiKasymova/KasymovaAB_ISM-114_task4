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
	double height;
public:
	/// <summary>
	/// ����������� � �����������
	/// </summary>
	Cylinder(double _radius, double _height);

	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Cylinder();

	/// <summary>
	/// ���������� �� ���������
	/// </summary>
	~Cylinder();

	/// <summary>
	/// ���������� ������� ������ ����������� ��������
	/// </summary>
	/// <returns></returns>
	double square() override;

	/// <summary>
	/// ���������� ������ ��������
	/// </summary>
	/// <returns></returns>
	double volume() override;

	/// <summary>
	/// ����� ����������
	/// </summary>
	/// <param name="out"></param>
	friend ostream& operator<<(ostream& os, Cylinder&);
};