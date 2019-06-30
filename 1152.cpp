#include <iostream>
using namespace std;
bool isLeap(int n)
{
    if((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
        return true;
    return false;
}
int main()
{
    for(int i = 1900; i <= 2000; ++i)
    {
        if(isLeap(i))
            cout << i << endl;
    }
    return 0;
}
