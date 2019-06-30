#include <cstdio>
#include <cstring>
int main()
{
    char a[] = "I am a program";
    for(int i = 0; i < strlen(a); ++i)
        printf("%c", a[i]);
    printf("\n");
    return 0;
}
