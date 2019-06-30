#include <iostream>
using namespace std;
int main()
{
    int i, a[50], b[50];
    for(i = 0; i < 50; ++i)
    {
        scanf("%d%d", &a[i], &b[i]);
        if(b[i] >= 80)
            printf("%d %d\n", a[i], b[i]);
    }
    return 0;
}
