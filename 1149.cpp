#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if(n < 3)
        return false;
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
            return true;
    }
    return false;
}

int main()
{
    int i;
    for(i = 100; i < 200; ++i)
    {
        if(!isPrime(i))
            cout << i << endl;
    }
    return 0;
}
