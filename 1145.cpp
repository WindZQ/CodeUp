#include <iostream>
using namespace std;
int main()
{
    int a[10], max, i;
    for(i = 0; i < 10; ++i)
    {
        cin >> a[i];
    }
    max = a[0];
    for(i = 0; i < 10; ++i)
    {
        if(a[i] > max)
            max = a[i];
    }
    cout << max << endl;
    return 0;
}
