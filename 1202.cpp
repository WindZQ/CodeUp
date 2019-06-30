#include <cstdio>
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
    {
        int value = 1;
        for(int i = n; i > 1; i--)
            value *= i;
        return value;
    }

}

int main()
{
    int sum = 0;
    for(int i = 1; i <= 10; ++i)
        sum += factorial(i);
    printf("%d\n", sum);
    return 0;
}
