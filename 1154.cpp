#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[] = "China";
    for(int i = 0; i < strlen(a); ++i)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] += 4;
        }
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 4;
        }
    }
    for(int i = 0; i < strlen(a); ++i)
        cout << a[i];
    return 0;
}
