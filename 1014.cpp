#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    while(cin >> n)
    {
        int a[101], sum = 0;
        if(n == 0)
            break;
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a, a + n);
        m = n / 2 + 1;
        for(int j = 0; j < m; ++j)
            sum += a[j] / 2 + 1;
        cout << sum << endl;
    }
    return 0;
}
