#include <cstdio>
int main()
{
    int a, b, c;
    for(int i = 100; i <= 999; ++i)
    {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if(a * a * a + b * b * b + c * c * c == i)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
