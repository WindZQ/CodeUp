#include <iostream>

using namespace std;

int main()
{
    int N, M, sum;
    while(cin >> N)
    {
        sum = 0;
        while(N--)
        {
            cin >> M;
            sum += M;
        }
        cout << sum << endl;
    }
}
