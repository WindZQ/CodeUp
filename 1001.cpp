#include <iostream>
using namespace std;

int main()
{
    int N, a, b, i = 0;
    cin >> N;
    while(i++ < N)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}
