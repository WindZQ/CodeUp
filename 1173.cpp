#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x1, x2;
    int a, b, c;
    cin >> a >> b >> c;
    x1 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
    x2 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
    cout << fixed << setprecision(4) << x1 << " "
         << fixed << setprecision(4) << x2 << endl;
    return 0;
}
