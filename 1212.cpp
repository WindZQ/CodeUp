#include <cstdio>
/*int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 2 * n - 1; ++i)
    {
        for(int j = 0; j < 2 * n - 1; ++j)
        {
            if(i < n)
            {
                if(j >= n - i - 1 && j < n + i)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if(j >= i - n + 1 && j < 3 * n - i - 2)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
int main()
{
    int i, j;
    for(i = 1; i <= 4; ++i)
    {
        for(j = 1; j <= 4 - i; ++j)
            printf(" ");
        for(j = 4 - i + 1; j < 4 + i; ++j)
            printf("*");
        printf("\n");
    }
    for(i = 4 - 1; i >= 1; --i)
    {
        for(j = 1; j <= 4 - i; ++j)
            printf(" ");
        for(j = 4 - i + 1; j < 4 + i; ++j)
            printf("*");
        printf("\n");
    }
    return 0;
}

