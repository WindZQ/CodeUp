#include <cstdio>
int main()
{
    char ch1[100];
    char ch2[100];
    gets(ch1);
    gets(ch2);
    for(int i = 0; i < 100; ++i)
    {
        ch1[i] = ch2[i];
        if(ch2[i] == '\0')
            break;
    }
    puts(ch1);
    return 0;
}
