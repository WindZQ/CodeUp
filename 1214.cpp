#include <cstdio>
int main()
{
    int n;
    int a[40];
    scanf("%d", &n);
    a[1] = a[0] = 1;
    printf("%12d%12d", a[0], a[1]);
    for(int i = 2; i < n; ++i)
    {

        a[i] = a[i - 1] + a[i - 2];
        if(i % 5 == 0)
            printf("\n");
        printf("%12d", a[i]);
    }
    printf("\n");
    return 0;
}
