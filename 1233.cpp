#include <cstdio>
#include <cstring>
const int MAX = 100;
int main()
{
    int m = 0, i = 0;
    char s1[MAX];
    char s2[MAX];
    gets(s1);
    gets(s2);
    while((s1[i] == s2[i]) && (s1[i] != '\0'))
        ++i;
    if((s1[i] == s2[i]) && (s2[i] != '\0'))
        m = 0;
    else
        m = s1[i] - s2[i];
    printf("%d\n", m);
    return 0;
}
