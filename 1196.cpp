#include <cstdio>
#include <cmath>
bool isPrime(long long n)
{
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
            return true;
    }
    return false;
}

int main()
{
    long long m;
    scanf("%lld", &m);
    if(isPrime(m))
        printf("not prime\n");
    else
        printf("prime\n");
    return 0;
}
