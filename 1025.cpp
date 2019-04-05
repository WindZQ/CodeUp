#include <iostream>

using namespace std;

int main()
{
    int l;
    cin >> l;
    while(l--)
    {
        int n, m;
        cin >> n >> m;
        int time = 0;
        int a, b, c;
        for(a = m / 5; a >= 0; a--)
        {
            b = n - a;
            c = m - 5 * a;
            if(b <= c && 2 * b >= c)
                time++;
        }
        cout << time << endl;
    }
    return 0;
}
