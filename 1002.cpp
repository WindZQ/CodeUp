#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a != 0 && b != 0)
            cout << a + b << endl;
        else
            break;
    }
    return 0;
}
