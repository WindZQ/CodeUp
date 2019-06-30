#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if(n < 3)
        return false;
    for(int i = 2; i < sqrt(n); ++i)
    {
        if(n % i == 0)
            return true;
    }
    return false;
}

int main()
{
    int number;
    cin >> number;
    if(!isPrime(number))
        cout << "prime" << endl;
    else
        cout << "not prime" << endl;
    return 0;
}
