#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		
		if ( ((x + R) * (x + R) + y * y <= R * R) ||
			(x>= 0 && x <= 2 * R && y >= -R && y <= 0) )
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = 4.0 * R * rand() / RAND_MAX - 2.0 * R;
		y = 4.0 * R * rand() / RAND_MAX - 2.0 * R;
		if ( ((x + R) * (x + R) + y * y <= R * R) ||
			(x >= 0 && x <= 2 * R && y >= -R && y <= 0) )
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}