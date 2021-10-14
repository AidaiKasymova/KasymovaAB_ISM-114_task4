#pragma once
#include "Cylinder.h"

/// <summary>
/// Класс правильной треугольной пирамиды
/// </summary>
class Pyramid: Shape
{
private:
	/// <summary>
	/// Высота
	/// </summary>
	double height;

	/// <summary>
	/// Длина стороны
	/// </summary>
	double a;
public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Pyramid();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	Pyramid(const double side, const double _height);

	/// <summary>
	/// Вычисление площади полной поверхности 
	/// правильной треугольной пирамиды
	/// </summary>
	/// <returns></returns>
	double square() override;

	/// <summary>
	/// Вычисление объема 
	/// правильной треугольной пирамиды
	/// </summary>
	/// <returns></returns>
	double volume() override;

	/// <summary>
	/// Вывод информации
	/// </summary>
	/// <param name="out"></param>
	void printInfo(ostream& out) override;
};