#include <iostream>

using namespace std;

int main()
{
    int m, k;
    while(cin >> m >> k && (m || k))
    {
        int d = 0;
        int a = 0;
        while(m)
        {
            m--;
            d++;
            a++;
            if(a == k)
            {
                m++;
                a = 0;
            }
        }
        cout << d << endl;
    }
    return 0;
}
