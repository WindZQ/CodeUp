#include <cstdio>
int main()
{
    int n, sum = 0;
    int a[10][10];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        for(int j= 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(i == j)
                sum += a[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}
