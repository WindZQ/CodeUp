#include <cstdio>
int main()
{
    int x = 1, y = 2, t;
    double sum = 0, n = 0;
    for(int i = 0; i < 20; ++i)
    {
        n = y / (x * 1.0);
        t = y;
        y += x;
        x = t;
        sum += n;
    }
    printf("%.4f\n", sum);
}
