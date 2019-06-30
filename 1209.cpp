#include <cstdio>
#include <cmath>
int main()
{
    double x1, x2;
    double a;
    scanf("%lf", &a);
    x2 = 1.0;
    do
    {
        x1 = x2;
        x2 = (x1 + a / x1) / 2.0;
    }while(fabs(x1 - x2) >= 1e-5);
    printf("%.4f\n", x2);
}
