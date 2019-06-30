#include <cstdio>
int main()
{
    int n, m = 1;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--)
        m *= i;
    printf("%d\n", m);
    return 0;
}
