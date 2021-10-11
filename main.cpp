#include "Pyramid.h"

int main()
{
	system("chcp 1251");
	system("cls");

	int num;
	
	Sphere sphere;
	Cylinder cylinder;
	Pyramid pyramid;

	double r, a, h;

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
			cin >> r;
			sphere = Sphere(r);
			sphere.printInfo(cout);
		}
		else if (num == 2)
		{
			cout << "Введите радиус цилиндра: ";
			cin >> r;
			cout << "Введите высоту цилиндра: ";
			cin >> h;
			cylinder = Cylinder(r, h);
			cylinder.printInfo(cout);
		}
		else if (num == 3)
		{
			cout << "Введите длину стороны пирамиды: ";
			cin >> a;
			cout << "Введите высоту пирамиды: ";
			cin >> h;
			pyramid = Pyramid(a, h);
			pyramid.printInfo(cout);
		}
		else
			break;
	}

	system("pause");

	return 0;
}
