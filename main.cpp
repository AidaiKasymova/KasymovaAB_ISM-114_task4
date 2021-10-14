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
		cout << "�������� ������." << endl;
		cout << "1 - ���" << endl;
		cout << "2 - �������" << endl;
		cout << "3 - ���������� ����������� ��������" << endl;
		cout << "������ ����� - �����." << endl;
		cin >> num;
		if (num == 1)
		{
			cout << "������� ������ ����: ";
			cin >> radius;
			sphere = Sphere(radius);
			sphere.printInfo(cout);
		}
		else if (num == 2)
		{
			cout << "������� ������ ��������: ";
			cin >> radius;
			cout << "������� ������ ��������: ";
			cin >> height;
			cylinder = Cylinder(radius, height);
			cylinder.printInfo(cout);
		}
		else if (num == 3)
		{
			cout << "������� ����� ������� ��������: ";
			cin >> a;
			cout << "������� ������ ��������: ";
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