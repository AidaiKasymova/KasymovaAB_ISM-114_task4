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
	double h;

	/// <summary>
	/// Длина стороны
	/// </summary>
	double a;
public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Pyramid()
	{
		a = 1;
		h = 1;
	}

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	Pyramid(double side, double height)
	{
		if (height <= 0)
			cerr << "Высота фигуры должна быть неотрицательным числом!\n";
		else
			h = height;

		if (side <= 0)
			cerr << "Сторона фигуры должна быть неотрицательным числом!\n";
		else
			a = side;
	}

	/// <summary>
	/// Вычисление площади полной поверхности 
	/// правильной треугольной пирамиды
	/// </summary>
	/// <returns></returns>
	double square() override
	{
		double deg = 60 * M_PI / 180.0;
		return (3.0 * a / 2.0) * (a / (2.0 * tan(deg)) + 
			sqrt(h * h + pow(a / (2.0 * tan(deg)), 2)));
	}

	/// <summary>
	/// Вычисление объема 
	/// правильной треугольной пирамиды
	/// </summary>
	/// <returns></returns>
	double volume() override
	{
		return (a * a * h) / (4 * sqrt(3));
	}

	/// <summary>
	/// Вывод информации
	/// </summary>
	/// <param name="out"></param>
	void printInfo(ostream& out) override
	{
		out << "Правильная треугольная пирамида со стороной " 
			<< a << ", высотой " << h << ", с площадью полной поверхности " 
			<< square() << " и объемом " << volume() << endl;
	}
};