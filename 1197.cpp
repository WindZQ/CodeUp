#include <cstdio>
#include <cmath>
bool isPrime(int n)
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
    for(int i = 100; i <= 200; ++i)
    {
        if(!isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
