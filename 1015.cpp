#include <iostream>
using namespace std;

int main()
{
    int m, n, a[10];
    cin >> m;
    while(m--)
    {
        cin >> n;
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                if(j != n)
                    cout << i * j << " ";
                else
                    cout << i * j << endl;
            }
        }
    }
}
