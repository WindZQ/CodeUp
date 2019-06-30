#include <cstdio>
int main()
{
    double a, b, c, t;
    scanf("%lf  %lf  %lf", &a, &b, &c);
    if(a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    if(c < a)
    {
        t = c;
        c = a;
        a = t;
    }
    printf("%.2f %.2f %.2f\n", a, b, c);
    return 0;
}
