#pragma once
#include <iostream>

using namespace std;

/**
 * @brief класс для работы с переменными, переведаваемым функции
 * 
 */
class geometry 
{
    /**
     * @brief защищенные перемеенные
     * 
     */
protected:
	double R, h, a, b;

public:

/**
 * @brief конструктор по умолчанию
 * 
 */
	geometry() = default;

/**
 * @brief параметризированный конструтор
 * 
 * @param R 
 */
	geometry(const double R);

/**
 * @brief Деструктор
 * 
 */
	virtual ~geometry() = default;

/**
 * @brief получение значения переменной
 * 
 * @return double 
 */
	double get_R() const;

/**
 * @brief сеттер значения переменной
 * 
 * @param R 
 */
	void set_R(const double R);

/**
 * @brief геттер
 * 
 * @return double 
 */
	double get_h() const;

/**
 * @brief сеттер
 * 
 * @param h 
 */
	void set_h(const double h);

/**
 * @brief геттер
 * 
 * @return double 
 */
	double get_a() const;

/**
 * @brief сеттер
 * 
 * @param a 
 */
	void set_a(const double a);

/**
 * @brief геттер
 * 
 * @return double 
 */
	double get_b() const;

/**
 * @brief сеттер
 * 
 * @param b 
 */
	void set_b(const double b);

};

/**
 * @brief класс для вычисление геом.функций
 * 
 */
class calculations : public geometry
{
protected:

/**
 * @brief Получение значения переменной
 * 
 * @param R 
 * @return double 
 */
	double get_num(const double R) const;

private:

/**
 * @brief Set the New object
 * 
 */
	void set_Sball();
	void set_Scylinder();
	void set_Spyramid();
	void set_Vball();
	void set_Vcylinder();
	void set_Vpyramid();


	double Sball;
	double Scylinder;
	double Spyramid;
	double Vball;
	double Vcylinder;
	double Vpyramid;


public:

/**
 * @brief конструткор по умолчанию
 * 
 */
	calculations() = default;

/**
 * @brief параметризированный конструктор
 * 
 * @param R 
 * @param h 
 * @param a 
 * @param b 
 */
	calculations(const double R, const double h, const double a, const double b);

/**
 * @brief Деструктор
 * 
 */
	~calculations() = default;

/**
 * @brief Получение значения переменной
 * 
 * @return double 
 */
	double get_R() const;

/**
 * @brief Задание значения переменной
 * 
 * @param R 
 */
	void set_R(const double R);

/**
 * @brief Получанием площадь шара
 * 
 * @return double 
 */
	double get_Sball() const;

/**
 * @brief Площадь цилиндра
 * 
 * @return double 
 */
	double get_Scylinder() const;

/**
 * @brief Площадь пирамиды
 * 
 * @return double 
 */
	double get_Spyramid() const;

/**
 * @brief Объем шара
 * 
 * @return double 
 */
	double get_Vball() const;

/**
 * @brief Объем цилиндра
 * 
 * @return double 
 */
	double get_Vcylinder() const;

/**
 * @brief Объем пирамиды
 * 
 * @return double 
 */
	double get_Vpyramid() const;

/**
 * @brief перегруженный оператор ввода
 * 
 * @param in 
 * @param f 
 * @return istream& 
 */
	friend istream& operator>> (istream& in, calculations& f);

/**
 * @brief перегруженный оператор вывода
 * 
 * @param out 
 * @param f 
 * @return ostream& 
 */
	friend ostream& operator<<(ostream& out, calculations& f);

};