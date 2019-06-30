#include <cstdio>
#include <cmath>
int main()
{
    int t = 1;
    double a = 1, pi = 0, n = 1;
    while(fabs(a) > 1e-6)
    {
        pi = pi + a;
        n += 2;
        t = -t;
        a = t / n;
    }
    pi = pi * 4;
    printf("%.6f\n", pi);
    return 0;
}
