#include <cstdio>
int main()
{
    int a[50], n, i;
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    for(i = n - 1; i >= 0; --i)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
