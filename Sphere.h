#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

/// <summary>
/// Базовый класс фигуры
/// </summary>
class Shape
{
public:
	~Shape(){};
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
	double radius = 1;

public:
	/// <summary>
	/// Создает объект с заданными значениями 
	/// (конструктор с параметром - значением радиуса)
	/// </summary>
	/// <param name="_radius"></param>
	Sphere(const double _radius);

	/// <summary>
	/// Конструктор по умолчанию
	/// (создает шар с единичным радиусом)
	/// </summary>
	Sphere();

	/// <summary>
	/// Вычисление объема шара
	/// </summary>
	/// <returns></returns>
	virtual double volume();

	/// <summary>
	/// Вычисление площади полной поверхности шара
	/// </summary>
	/// <returns></returns>
	virtual double square();

	/// <summary>
	/// Вывод информации
	/// </summary>
	/// <param name="out"></param>
	virtual void printInfo(ostream& out);
};
