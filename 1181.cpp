#include <cstdio>
#include <cmath>
int main()
{
    double a, b, c, d, m, n, x1, x2;
    double esp = pow(10, -6);
    scanf("%lf  %lf  %lf", &a, &b, &c);
    if(a == 0)
        printf("not a quadratic\n");
    else
    {
        d = b * b - 4 * a * c;
        if(d > 0)
        {
            x1 = (-b + sqrt(d)) / (2.0 * a);
            x2 = (-b - sqrt(d)) / (2.0 * a);
            printf("distinct real roots:%.4f %.4f\n", x1, x2);
        }
        else if(d == 0)
        {
            x1 = x2 = (-b) / (2.0 * a);
            printf("two equal roots:%.4f\n", x1);
        }
        else if(d < 0)
        {
            m = (-b) / (2.0 * a) + esp;
            n = sqrt(-d) / (2.0 * a);
            printf("complex roots:%.4f+%.4fi %.4f-%.4fi\n", m, n, m, n);
        }
    }
    return 0;
}
