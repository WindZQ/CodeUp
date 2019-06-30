#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int b = 1;
    double sum = 0.0, k = 1.0;
    for(int i = 1;i <= 100; ++i)
    {
        sum += k / b;
        b++;
        k = -k;
    }
    cout << setprecision(8) << sum << endl;
    return 0;
}
