#include <iostream>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double y;// вхідний параметр
    double R;// вхідний параметр

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;


    // розгалуження в повній формі
    if ((pow(x + R, 2) + pow(y, 2) <= pow(R, 2)) || // середина кола
        (x >= 0 && x <= 2 * R && y >= -R && y <= 0)) // в прямокутнику
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}