#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;

/// <summary>
/// Базовый класс фигуры
/// </summary>
class Shape
{
public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Shape() {};
	// чистые виртуальные методы:
	virtual double volume() = 0;
	virtual double square() = 0;
	virtual void printInfo(ostream& out) = 0;
};

/// <summary>
/// Класс для описания шара
/// </summary>
class Sphere: Shape
{
protected:
	/// <summary>
	/// Радиус шара
	/// </summary>
	double r = 1;

public:
	/// <summary>
	/// Создает объект с заданными значениями 
	/// (конструктор с параметром - значением радиуса)
	/// </summary>
	/// <param name="radius"></param>
	Sphere(double radius)
	{
		if (radius <= 0)
			cerr << "Радиус фигуры должен быть неотрицательным числом!\n";
		else
			r = radius;
	}

	/// <summary>
	/// Конструктор по умолчанию
	/// (создает шар с единичным радиусом)
	/// </summary>
	Sphere()
	{
		r = 1;
	}

	/// <summary>
	/// Вычисление объема шара
	/// </summary>
	/// <returns></returns>
	virtual double volume()
	{
		return (4.0 * M_PI * r * r * r) / 3.0;
	}

	/// <summary>
	/// Вычисление площади полной поверхности шара
	/// </summary>
	/// <returns></returns>
	virtual double square()
	{
		return 4.0 * M_PI * r * r;
	}

	/// <summary>
	/// Вывод информации
	/// </summary>
	/// <param name="out"></param>
	virtual void printInfo(ostream& out)
	{
		out << "Шар радиуса " << r << 
			" с площадью полной поверхности " << square() 
			<< " и объемом " << volume() << endl;
	}
};