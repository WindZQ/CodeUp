#include <cstdio>
int main()
{
    int a[15] = {0}, n, i;
    int low = 0, high = 14, mid = 0;
    for(i = 0; i < 15; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    while(low <= high)
    {
        mid = (high + low) >> 1;
        if(n > a[mid])
            low = mid + 1;
        else if(n < a[mid])
            high = mid - 1;
        else if(n == a[mid])
        {
            printf("%d\n", mid);
            break;
        }
    }
    if(n != a[mid])
        printf("NO\n");
    return 0;
}
