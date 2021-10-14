#include "Pyramid.h"

int main()
{
	system("chcp 1251");
	system("cls");

	int num;
	
	Sphere sphere;
	Cylinder cylinder;
	Pyramid pyramid;

	double radius, a, height;

	while (true)
	{
		cout << "Выберите фигуру." << endl;
		cout << "1 - Шар" << endl;
		cout << "2 - Цилиндр" << endl;
		cout << "3 - Правильная треугольная пирамида" << endl;
		cout << "Другой номер - выход." << endl;
		cin >> num;
		if (num == 1)
		{
			cout << "Введите радиус шара: ";
			cin >> radius;
			sphere = Sphere(radius);
			sphere.printInfo(cout);
		}
		else if (num == 2)
		{
			cout << "Введите радиус цилиндра: ";
			cin >> radius;
			cout << "Введите высоту цилиндра: ";
			cin >> height;
			cylinder = Cylinder(radius, height);
			cylinder.printInfo(cout);
		}
		else if (num == 3)
		{
			cout << "Введите длину стороны пирамиды: ";
			cin >> a;
			cout << "Введите высоту пирамиды: ";
			cin >> height;
			pyramid = Pyramid(a, height);
			pyramid.printInfo(cout);
		}
		else
			break;
	}

	system("pause");

	return 0;
}