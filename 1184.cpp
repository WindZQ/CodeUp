#include <cstdio>
int main()
{
    int x;
    scanf("%d", &x);
    if(x < 1)
        printf("%d\n", x);
    else if(x >= 1 && x < 10)
        printf("%d\n", 2 * x - 1);
    else if(x >= 10)
        printf("%d\n", 3 * x - 11);
    return 0;
}
