#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double l, a[12];
    cin >> l;
    for(int i = 0; i < 12; ++i)
    {
        cin >> a[i];
    }
    double max = a[0];
    for(int j = 0; j < 12; ++j)
    {
        if(a[j] > max)
            max = a[j];
    }
    double sum = max * l;
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}
