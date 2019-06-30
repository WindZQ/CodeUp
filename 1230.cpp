#include <cstdio>
int main()
{
    char ch[9] = {'*', ' ', '*', ' ', '*', ' ', '*', ' ', '*'};
    for(int i = 0; i < 5; ++i)
    {
        for(int j = 1; j <= i; ++j)
            printf(" ");
        for(int k = 0; k < 9; ++k)
            printf("%c", ch[k]);
        printf("\n");
    }
    return 0;
}
