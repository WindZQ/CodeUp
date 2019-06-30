/*
*使用弦截法来计算一个非线性方程的根
*
*Author by HaiFei Liu
*Coding 2019.5.10
*/
#include <cstdio>
#include <cmath>
double f(double x)
{
    double y = pow(x, 3) - 5 * pow(x, 2) + 16 * x - 80;
    return y;
}

double xpoint(double x1, double x2)
{
    double x = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
    return x;
}

double root(double x1, double x2)
{
    double x, y, y1, y2;
    y1 = f(x1);
    y2 = f(x2);
    do
    {
        x = xpoint(x1, x2);
        y = f(x);
        if(y * y1 > 0)
        {
            x1 = x;
            y1 = y;
        }
        else
        {
            x2 = x;
            y2 = y;
        }
    }while(fabs(y) >= 1e-6);
    return x;
}

int main()
{
    double x, x1, x2, f1, f2;
    scanf("%lf%lf", &x1, &x2);
    do
    {
        f1 = f(x1);
        f2 = f(x2);
    }while(f1 * f2 >= 0);
    x = root(x1, x2);
    printf("%.4f\n", x);
    return 0;
}
