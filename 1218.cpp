#include <cstdio>
int main()
{
        int i, j;
    for(i = 3; i >= 1; --i)
    {
        for(j = 1; j <= 5; ++j)
        {
            if(i == j || i == 6 - j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i = 2; i <= 3; ++i)
    {
        for(j = 1; j <= 5; ++j)
        {
            if(i == j || j == 6 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
