#include <cstdio>
#include <cmath>
int main()
{
    double a, b, c, l, s;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
    {
        l = (a + b + c) / 2;
        s = sqrt(l * (l - a) * (l - b) * (l - c));
        printf("%.2f\n", s);
    }
    return 0;
}
