#include <iostream>

using namespace std;

int main()
{
    int v, d;
    while(cin >> v >> d)
    {
        int i = 0, time = 0;
        while(v)
        {
            ++i;
            if(v > i * d)
            {
                v -= i * d;
                time += i;
                ++time;
            }
            else if(v > 0 && v <= i * d && v % d == 0)
            {
                time += v / d;
                v = 0;
            }
            else if( v > 0 && v < i * d && v %d != 0)
            {
                time += v / d;
                v = 0;
                ++time;
            }
        }
        cout << time << endl;
    }
    return 0;
}
