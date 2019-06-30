#include <cstdio>
void Swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int a, b, c, d;
    scanf("%d   %d   %d   %d", &a, &b, &c, &d);
    if(a > b)
        Swap(&a, &b);
    if(a > c)
        Swap(&a, &c);
    if(a > d)
        Swap(&a, &d);
    if(b > c)
        Swap(&b, &c);
    if(b > d)
        Swap(&b, &d);
    if(c > d)
        Swap(&c, &d);
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
