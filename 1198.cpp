#include <cstdio>
int main()
{
    char s[100] = {0};
    gets(s);
    for(int i = 0; s[i] != '\0'; ++i)
    {
        if((s[i] >= 'A' && s[i] <= 'V') || (s[i] >= 'a' && s[i] <= 'v'))
            s[i] += 4;
        else if((s[i] >= 'W' && s[i] <= 'Z') || (s[i] >= 'w' && s[i] <= 'z'))
            s[i] -= 22;
    }
    puts(s);
    return 0;
}
