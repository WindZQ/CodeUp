#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    double x, y, result;
    cin >> a >> b >> x >> y;
    result = (float)(a + b) / 2 + (int)x % (int)y;
    cout << fixed << setprecision(6) << result << endl;
    return 0;
}
