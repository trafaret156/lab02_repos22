// Lab_03_07.cpp
// ����� ³����
// ����������� ������ � 3.3
// ������������, ������ �������� �������
// ������ 7

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // ������� ��������
    double R; // ������� ��������
    double y; // ��������� ����������

    cout << "R = ";
    cin >> R;
    cout << "x = ";
    cin >> x;

    // ���������� y ������� �� x
    if (x <= -R)
        y = R;
    else 
        if (x <= R)
        y = -sqrt(R * R - x * x);
    else 
            if (x <= 6)
        y = -R + ((-3 + R) / (6 - R)) * (x - R);
    else
        y = -3 + (x - 6);

    cout << "y = " << y << endl;

    return 0;
}