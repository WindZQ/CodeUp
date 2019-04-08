#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a, b, m;
    cin >> a >> b;
    double x1, y1, x2, y2, s = 0.0, t;
    while(cin >> x1 >> y1 >> x2 >> y2)
        s += sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    t = s / 20000 * 2;
    m = (t - (int)t) * 60 + 0.5;
    if(m == 60)
        cout << setfill('0') << setw(2) << (int)t + 1 << ":00" << endl;
    else
        cout << setfill('0') << setw(2) << (int)t << ":" << setfill('0') << setw(2) << m << endl;
    return 0;
}
