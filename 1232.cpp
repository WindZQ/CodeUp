#include <cstdio>
int main()
{
    int i = 0, j = 0;
    char ch1[100];
    char ch2[100];
    char ch3[200];
    gets(ch1);
    gets(ch2);
    while(ch1[i] != '\0')
    {
        ch3[i] = ch1[i];
        ++i;
    }
    while(ch2[j] != '\0')
    {
        ch3[i + j] = ch2[j];
        ++j;
    }
    ch3[i + j] = '\0';
    puts(ch3);
    return 0;
}
