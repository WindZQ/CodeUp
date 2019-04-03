#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[101][101];
    while(cin >> n && n)
    {
        int r[101] = {0}, l[101] = {0};
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                cin >> a[i][j];
                r[i] ^= a[i][j];
                l[j] ^= a[i][j];
            }
        }
        int x = 0, y = 0, f = 0;
        for(int k = 1; k <= n; ++k)
        {
            if(r[k])
            {
                x = k;
                f++;
            }
            if(l[k])
            {
                y = k;
                f++;
            }
        }
        if(!f)
            cout << "OK" << endl;
        else if(f == 2 && x && y)
            cout << "Change bit (" << x << "," << y << ")" << endl;
        else
            cout << "Corrupt" << endl;
    }
    return 0;
}
