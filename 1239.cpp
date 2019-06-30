/*
*
*/
#include <cstdio>
const int N = 10;
int main()
{
    int a[N], b[N];
    int i, j, c = 0, d = 0, e = 0;
    for(i = 0; i < N; ++i)
        scanf("%d", &a[i]);
    for(i = 0; i < N; ++i)
        scanf("%d", &b[i]);
    for(i = 0; i < N; ++i)
    {
        if(a[i] > b[i])
            c++;
        else if(a[i] == b[i])
            d++;
        else
            e++;
    }
    printf("%d %d %d\n", c, d, e);
    if(c > e)
        printf("a>b\n");
    else if(c == e)
        printf("a=b\n");
    else
        printf("a<b\n");
    return 0;
}
