// Lab_03_1.cpp
// ����� �����
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 39

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = ";
	cin >> x;

	A = pow(x, 7);

	// ����� 1: ������������ � ��������� ����
	if (x < 0)
		B = atan(log(x + 1));

	if (0 <= x && x <= 1.2)
		B = (1.0 / tan((1 + x) / 8));

	if (x > 1, 2)
		B = 8 * cos(9 * x);

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x < 0)
		B = atan(log(x + 1));
	else
		if (x > 1.2)
			B = 8 * cos(9 * x);
		else
			B = (1.0 / tan((1 + x) / 8));
	y = A + B;
	cout << endl;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}