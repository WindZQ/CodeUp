#include <cstdio>
const int N = 50;
double average(double *a, int n)
{
    double sum = 0.0, avg;
    for(int i = 0; i < n; ++i)
        sum += a[i];
    avg = sum / n;
    return avg;
}

int main()
{
    double a[N], b[N];
    int m, n;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; ++i)
        scanf("%lf", &a[i]);
    for(int i = 0; i < m; ++i)
        scanf("%lf", &b[i]);
    printf("%.2f %.2f\n", average(a, n), average(b, m));
    return 0;
}
