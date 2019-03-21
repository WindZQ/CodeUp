#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        int sum = 0, a[60];
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        int l = 0;
        int avg = sum / n;
        for(int j = 0; j < n; ++j)
        {
            l += abs(avg - a[j]);
        }
        cout << l / 2  << endl << endl;
    }
    return 0;
}
