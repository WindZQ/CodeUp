#include <iostream>
#include <iomanip>
#define PI 3.1415926
using namespace std;
int main()
{
    double r, h, c, s, v, s1, v1;
    scanf("%lf %lf", &r, &h);
    cout << fixed << setprecision(2) << PI * 2 * r << " "
         << fixed << setprecision(2) << PI * r * r << " "
         << fixed << setprecision(2) << PI * r * r * h << " "
         << fixed << setprecision(2) << 4 * PI * r * r << " "
         << fixed << setprecision(2) << (4 * PI * r * r * r) / 3 << endl;
    return 0;
}
