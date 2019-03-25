#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a[1000];
        int b, c, sum = 0;
        cin >> b >> c;
        for(int i = 0; i < b; ++i)
            cin >> a[i];
        for(int j = 0; j < b; ++j)
        {
            if(a[j] > a[c - 1])
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}
