#include <cstdio>
int main()
{
    unsigned long a = 4294967295;
    long b = -2;
    printf("%d,%o,%x,%u\n", a, a, a, a);
    printf("%d,%o,%x,%u\n", b, b, b, b);
    return 0;
}
