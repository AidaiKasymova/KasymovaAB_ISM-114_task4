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
		cout << "�������� ������." << endl;
		cout << "1 - ���" << endl;
		cout << "2 - �������" << endl;
		cout << "3 - ���������� ����������� ��������" << endl;
		cout << "������ ����� - �����." << endl;
		cin >> num;
		if (num == 1)
		{
			cout << "������� ������ ����: ";
			cin >> r;
			sphere = Sphere(r);
			sphere.printInfo(cout);
		}
		else if (num == 2)
		{
			cout << "������� ������ ��������: ";
			cin >> r;
			cout << "������� ������ ��������: ";
			cin >> h;
			cylinder = Cylinder(r, h);
			cylinder.printInfo(cout);
		}
		else if (num == 3)
		{
			cout << "������� ����� ������� ��������: ";
			cin >> a;
			cout << "������� ������ ��������: ";
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