#include <cstdio>
int main()
{
    double sum1 = 0, sum2 = 0;
    double sum3 = 0.0, sum = 0.0;
    for(int i = 1; i <= 100; ++i)
        sum1 += i;
    for(int i = 1; i <= 50; ++i)
        sum2 += i * i;
    for(int i = 1; i <= 10; ++i)
        sum3 += 1.0 / i;
    sum = sum1 + sum2 + sum3;
    printf("%.4f\n", sum);
    return 0;
}
