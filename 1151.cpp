#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c;
    double x1, x2;
    cin >> a >> b >> c;
    int d = b * b - 4 * a * c;
    if(d > 0)
    {
        x1 = (-b - sqrt(d)) / (2.0 * a);
        x2 = (-b + sqrt(d)) / (2.0 * a);
        cout << fixed << setprecision(4) << x1 << " "
             << fixed << setprecision(4) << x2 << endl;
    }
    else if(d == 0)
    {
        x1 = -b / (2.0 * a);
        cout << fixed << setprecision(4) << x1 << endl;
    }
    else
        cout << "no answer" << endl;
    return 0;
}
