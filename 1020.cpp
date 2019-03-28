#include <iostream>

using namespace std;

int main()
{
    int n, a[100];
    while(cin >> n && n)
    {
        for(int i = 0; i < n;++i)
            cin >> a[i];
        int sum = 0, floor = 0;
        for(int j = 0; j < n; ++j)
        {
            if(a[j] > floor)
                sum += (a[j] - floor) * 6;
            else
                sum += (floor - a[j]) * 4;
            floor = a[j];
        }
        sum += n * 5;
        cout << sum << endl;
    }
    return 0;
}
