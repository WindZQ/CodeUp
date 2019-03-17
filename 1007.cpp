#include <iostream>
using namespace std;

int main()
{
    int N, M, a, sum;
    cin >> N;
    while(N--)
    {
        while(cin >> M)
        {
            sum = 0;
            while(M--)
            {
                cin >> a;
                sum += a;
            }
            cout << sum << endl << endl;
        }
    }
    return 0;
}
