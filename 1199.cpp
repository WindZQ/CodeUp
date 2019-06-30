#include <cstdio>
int gcd(int x, int y)
{
    int t;
    if(x > y)
    {
        t = x;
        x = y;
        y = t;
    }
    while(y != 0)
    {
        t = x % y;
        x = y;
        y = t;
    }
    return x;
}

int lcm(int x, int y)
{
    return (x * y) / gcd(x, y);
}

int main()
{
    int m, n, t, r, s;
    scanf("%d%d", &m, &n);
    printf("%d %d", gcd(m, n), lcm(m, n));
    return 0;
}
