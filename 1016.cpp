#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int Q;
        double Y, e, f, g;
        cin >> Y >> Q >> e >> f >> g;
        cout << fixed << setprecision(1) << Y * (1 + e / 100 * Q / 365) * (1 + g / 100) << endl;
        cout << fixed << setprecision(1) << Y * (1 + f / 100 *(Q + 365) / 365) << endl;
    }
    return 0;
}
