#include <cstdio>
int main()
{
    int i;
    char ch[100] = {'\0'};
    gets(ch);
    while(ch[i] != '\0')
    {
        if(ch[i] >= 'a' && ch[i] <= 'z')
            ch[i] = 219 - ch[i];
        else if(ch[i] >= 'A' && ch[i] <= 'Z')
            ch[i] = 155 - ch[i];
        else
            ch[i] = ch[i];
        ++i;
    }
    puts(ch);
    return 0;
}
