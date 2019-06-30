#include <cstdio>
int main()
{
    int a[50], b[51], n, m, i, j, t;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n + 1; ++j)
        {
            b[j] = a[i++];
            b[n] = m;
        }
    }
    for(i = 0; i < n + 1; ++i)
    {
        if(b[i] > b[n])
        {
            t = b[i];
            b[i] = b[n];
            b[n] = t;
        }
    }
    for(i = 0; i < n + 1; ++i)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
