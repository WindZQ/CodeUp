#include <cstdio>
int main()
{
    int a[40];
    a[0] = a[1] = 1;
    printf("%d %d ", a[0], a[1]);
    for(int i = 2; i < 40; ++i)
    {
        a[i] = a[i - 1] + a[i - 2];
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
