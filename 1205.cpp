#include <cstdio>
int main()
{
    int i, j, num;
    for(i = 1; i <= 1000; ++i)
    {
        num = 0;
        for(j = 1; j < i; ++j)
        {
            if(i % j == 0)
                num += j;
        }
        if(i == num)
        {
            printf("%d: ", num);
            for(j = 1; j < i; ++j)
            {
                if(i % j == 0)
                    printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}
