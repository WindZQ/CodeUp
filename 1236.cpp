#include <cstdio>
void add(int *n, int k)
{
    *n += k;
}

int main()
{
    int n, k, a;
    scanf("%d%d%d", &n, &k, &a);
    for(int i = 0; i < n - 1; ++i)
        add(&a, k);
    printf("%d\n", a);
    return 0;
}
