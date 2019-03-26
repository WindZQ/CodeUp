#include <iostream>

using namespace std;

int main()
{
    unsigned long n;
    while(cin >> n)
    {
        int sum = 0;
        while(n)
        {
            if(n % 10 % 2 == 0)
                sum += n % 10;
            n = n / 10;
        }
        cout << sum << endl << endl;
    }
    return 0;
}
