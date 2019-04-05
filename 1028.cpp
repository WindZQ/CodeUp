#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    char a[30];
    double v = 0.0, d = 0.0;
    int h, m, s, l;
    int time = 0, now = 0;
    while(gets(a))
    {
        h = (a[0] - '0') * 10 + a[1] - '0';
        m = (a[3] - '0') * 10 + a[4] - '0';
        s = (a[6] - '0') * 10 + a[7] - '0';
        now = h * 3600 + m * 60 + s;
        l = strlen(a);
        if(8 == l)
        {
            d +=v * (now - time);
            time = now;
            for(int i = 0; i < 8; ++i)
                cout << a[i];
            cout << " " << fixed << setprecision(2) << d / 1000 << " km" << endl;
        }
        else
        {
            d += v * (now - time);
            time = now;
            v = 0;
            for(int i = 9; i < l; ++i)
                v = v * 10 + a[i] - '0';
            v /= 3.6;
        }
    }
    return 0;
}
