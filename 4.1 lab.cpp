#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    double S;

    cout << "N = ";
    cin >> N;

    if (N <= 0) {
        cout << "N ";
        return 0;
    }

    // 1) while
    S = 0.0;
    int i = 1;
    while (i <= N) {
        S += 1.0 / ((2.0 * i + 1.0) * (2.0 * i + 1.0));
        i++;
    }
    cout  << S << endl;
	
    // 2) do..while
    S = 0.0;
    i = 1;
    do {
        S += 1.0 / ((2.0 * i + 1.0) * (2.0 * i + 1.0));
        i++;
    } while (i <= N);
    cout << S << endl;

    // 3) for (i++)
    S = 0.0;
    for (i = 1; i <= N; i++) {
        S += 1.0 / ((2.0 * i + 1.0) * (2.0 * i + 1.0));
    }
    cout << S << endl;

    // 4) for (i--)
    S = 0.0;
    for (i = N; i >= 1; i--) {
        S += 1.0 / ((2.0 * i + 1.0) * (2.0 * i + 1.0));
    }
    cout  << S << endl;

    return 0;
}