#include <iostream>
using namespace std;

int main()
{
    int N, i;
    cin >> N;
    while(N--)
    {
        cin >> i;
        cout << char(i);
        if(!N)
            cout << endl;
    }
    return 0;
}
