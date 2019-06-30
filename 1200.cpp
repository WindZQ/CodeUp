#include <cstdio>
int main()
{
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    char ch;
    while((ch = getchar()) != '\n')
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            count1++;
        else if(ch == ' ')
            count2++;
        else if(ch >= '1' && ch <= '9')
            count3++;
        else
            count4++;
    }
    printf("%d %d %d %d\n", count1, count2, count3, count4);
    return 0;
}
