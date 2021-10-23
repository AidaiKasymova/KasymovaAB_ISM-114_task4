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
	double height;

	/// <summary>
	/// ����� �������
	/// </summary>
	double a;
public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Pyramid();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	Pyramid(const double side, const double _height);

	/// <summary>
	/// ���������� ������� ������ ����������� 
	/// ���������� ����������� ��������
	/// </summary>
	/// <returns></returns>
	double square() override;

	/// <summary>
	/// ���������� ������ 
	/// ���������� ����������� ��������
	/// </summary>
	/// <returns></returns>
	double volume() override;

	/// <summary>
	/// ����� ����������
	/// </summary>
	/// <param name="out"></param>
	void printInfo(ostream& out) override;
};