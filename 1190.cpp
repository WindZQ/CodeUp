#include <cstdio>
int main()
{
    int i = 1, sum = 0;
    loop: if(i <= 100)
        {
            sum += i;
            i++;
            goto loop;
        }
    printf("%d\n", sum);
    return 0;
}
