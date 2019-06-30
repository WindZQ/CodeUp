#include <cstdio>
int Max(int (*a)[4])
{
    int max = a[0][0], temp;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            if(a[i][j] > max)
            {
                temp = a[i][j];
                a[i][j] = max;
                max = temp;
            }
        }
    }
    return max;
}

int main()
{
    int a[3][4];
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d\n", Max(a));
    return 0;
}
