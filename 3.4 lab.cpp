#include <iostream>
using namespace std;
int main()
{
    double x; // ������� ��������
    double y;// ������� ��������
    double R;// ������� ��������

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;


    // ������������ � ����� ����
    if ((pow(x + R, 2) + pow(y, 2) <= pow(R, 2)) || // �������� ����
        (x >= 0 && x <= 2 * R && y >= -R && y <= 0)) // � ������������
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}