#include <cstdio>
int main()
{
    int i, j, a[3][4], max, x, y;
    for(i = 0; i < 3; ++i)
        for(j = 0; j < 4; ++j)
            scanf("%d", &a[i][j]);
    max = a[0][0];
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 4; ++j)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("%d %d %d\n", max, x, y);
    return 0;
}
