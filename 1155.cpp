#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    double x, y, result;
    cin >> x >> a >> y;
    result = x + a % 3 * (int)(x + y) % 2 / 4;
    cout << fixed << setprecision(6) << result << endl;
    return 0;
}
