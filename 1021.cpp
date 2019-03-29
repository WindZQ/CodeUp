#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[1001];
    while(gets(s))
    {
        int flag = 0;
        for(int i = 0; i < strlen(s); ++i)
        {
            if(s[i] == '(')
                flag++;
            else if(s[i] == ')')
                --flag;
            else
                break;
        }
        cout << flag << endl;
    }
    return 0;
}
