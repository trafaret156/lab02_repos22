// Lab_03_07.cpp
// Івасів Вікторії
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції
// Варіант 7

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення

    cout << "R = ";
    cin >> R;
    cout << "x = ";
    cin >> x;

    // Обчислення y залежно від x
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