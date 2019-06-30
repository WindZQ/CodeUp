#include <cstdio>
#include <cstring>
int main()
{
    char ch[100];
    int count = 0;
    gets(ch);
    for(int i = 0; i < strlen(ch); ++i)
    {
        if((ch[i] != ' ' && ch[i + 1] == ' ') || (ch[i] != ' ' && ch[i] == '\0'))
            count++;
    }
    printf("%d\n", count + 1);
    return 0;
}
