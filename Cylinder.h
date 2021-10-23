#pragma once
#include "Sphere.h"

/// <summary>
/// Производный от шара класс цилиндра
/// </summary>
class Cylinder : public Sphere
{
private:
	/// <summary>
	/// Высота цилиндра
	/// </summary>
	double height;
public:
	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	Cylinder(double _radius, double _height);

	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Cylinder();

	/// <summary>
	/// Деструктор по умолчанию
	/// </summary>
	~Cylinder();

	/// <summary>
	/// Вычисление площади полной поверхности цилиндра
	/// </summary>
	/// <returns></returns>
	double square() override;

	/// <summary>
	/// Вычисление объема цилиндра
	/// </summary>
	/// <returns></returns>
	double volume() override;

	/// <summary>
	/// Вывод информации
	/// </summary>
	/// <param name="out"></param>
	friend ostream& operator<<(ostream& os, Cylinder&);
};