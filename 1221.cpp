#include <cstdio>
#include <cmath>
bool isLeap(int n)
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
    for(int i = 2; i <= 100; ++i)
    {
        if(!isLeap(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
