// Lab_02.cpp
// ����� ³����
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 7
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double Pi = 4 * atan(1.); // ����� �
	double a; // ������� ��������
	//double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "a = "; cin >> a;

	//z1 = cos(3.0 / 8.0 * Pi - a / 4.0) * cos(3.0 / 8.0 * Pi - a / 4.0) - cos(11.0 / 8.0 * Pi + a / 4.0) * cos(11.0 / 8.0 * Pi + a / 4.0);
	z2 = sqrt(2.0) / 2.0 * sin((a * 1.0) / 2.0);
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}