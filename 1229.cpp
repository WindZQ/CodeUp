#include <cstdio>
int main()
{
    int i, j, countCapital = 0, countLower = 0, countDigit = 0;
    int countSpace = 0, countOther = 0;
    char ch[3][80] = {'\0'};
    for(i = 0; i < 3; ++i)
        gets(ch[i]);
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 80 && ch[i][j] != '\0'; ++j)
        {
            if(ch[i][j] >= 'A' && ch[i][j] <= 'Z')
                countCapital++;
            else if(ch[i][j] >= 'a' && ch[i][j] <= 'z')
                countLower++;
            else if(ch[i][j] >= '0' && ch[i][j] <= '9')
                countDigit++;
            else if(ch[i][j] == ' ')
                countSpace++;
            else
                countOther++;
        }
    }
    printf("%d %d %d %d %d\n", countCapital, countLower, countDigit, countSpace, countOther);
    return 0;
}
