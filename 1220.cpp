#include <cstdio>
#include <cstring>
int main()
{
    char str[3][100];
    char ch[100];
    for(int i = 0; i < 3; ++i)
        gets(str[i]);
    if(strcmp(str[0], str[1]) > 0)
        strcpy(ch, str[0]);
    else
        strcpy(ch, str[1]);
    if(strcmp(str[2], ch) > 0)
        strcpy(ch,str[2]);
    puts(ch);
    return 0;
}
