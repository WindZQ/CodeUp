#include <cstdio>
#include <cmath>
//Ë³ĞòÊä³ö
int print(int m, int n)
{
    int a;
    while(m % 10)
    {
        a = m  /  (int)pow(10, n - 1);
        printf("%d ", a);
        m %= (int)pow(10, n - 1);
        n--;
    }
    return 0;
}

//ÄæĞòÊä³ö
int reserve(int m)
{
    int b;
    while(m)
    {
        b = m % 10;
        printf("%d ", b);
        m /= 10;
    }
    return 0;
}

int main()
{
    int a, b, number, count = 1;
    scanf("%d", &number);
    b = number;
    while(number / 10 != 0)
    {
        number /= 10;
        count++;
    }
    printf("%d\n", count);
    print(b, count);
    printf("\n");
    reserve(b);
    return 0;
}
