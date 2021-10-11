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
	double h;
public:
	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	Cylinder(double radius, double height): Sphere(radius)
	{
		if (height <= 0)
			cerr << "Высота фигуры должна быть неотрицательным числом!\n";
		else
			h = height;
	}

	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Cylinder(): Sphere()
	{
		h = 1;
	}

	/// <summary>
	/// Вычисление площади полной поверхности цилиндра
	/// </summary>
	/// <returns></returns>
	double square() override
	{
		return 2 * M_PI * r * h +
			2 * M_PI * r * r;
	}

	/// <summary>
	/// Вычисление объема цилиндра
	/// </summary>
	/// <returns></returns>
	double volume() override
	{
		return M_PI * r * r * h;
	}

	/// <summary>
	/// Вывод информации
	/// </summary>
	/// <param name="out"></param>
	void printInfo(ostream& out) override
	{
		out << "Цилиндр радиуса " << r << ", высотой " << h << 
			", с площадью полной поверхности " << square()
			<< " и объемом " << volume() << endl;
	}
};