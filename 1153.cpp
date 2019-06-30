#include <cstdio>
int main()
{
    int a[8];
    for(int i = 0; i < 8; ++i)
    {
        scanf("%d", &a[i]);
        if(a[i] >= 0)
            printf("%o %x\n", a[i], a[i]);
        else
            printf("-%o -%x\n",-a[i], -a[i]);
    }
    return 0;
}
