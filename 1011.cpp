#include <iostream>

using namespace std;

int main()
{
    int N, a[6], j;
    cin >> N;
    while(N--)
    {
        for(int i = 0; i < 6; ++i)
        {
            cin >> a[i];
        }
        for(j = 0; j < 3; ++j)
        {
            if(a[j] > a[j+3])
            {
                cout << "First" << endl;
                break;
            }
            else if(a[j] == a[j+3])
            {
                continue;
            }
            else
            {
                cout << "Second" << endl;
                break;
            }
        }
        if(j == 3)
            cout << "Same" << endl;
    }
    return 0;
}
