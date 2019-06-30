#include <cstdio>
int main()
{
    int a, n;
    int sum = 0;
    int b = 0;
    scanf("%d%d", &a, &n);
    b = a;
    for(int i = 0; i < n; ++i)
    {
        sum += a;
        a = a * 10 + b;
    }
    printf("%d\n", sum);
    return 0;
}
