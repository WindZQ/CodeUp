#include <iostream>
using namespace std;
int main()
{
    int a[3], i, j, temp;
    for(i = 0; i < 3; ++i)
        cin >> a[i];
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 2 - i;++j)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
    return 0;
}
