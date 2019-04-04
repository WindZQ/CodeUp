#include <iostream>
using namespace std;

int main()
{
    int a[4];
    while(cin >> a[0] >> a[1] >> a[2] >> a[3])
    {
        for(int i = 1; i < 4; ++i)
        {
            if(i == 1)
            {
                for(int j = 0; j < 4; ++j)
                {
                    if(a[j] == 1 || a[j] == 4)
                        cout << "   ";
                    else
                        cout << " _ ";
                }
            }
            if(i == 2)
            {
                for(int j = 0; j < 4; ++j)
                {
                    if(a[j] == 0)
                        cout << "| |";
                    else if(a[j] == 1 || a[j] == 7)
                        cout << "  |";
                    else if(a[j] == 2 || a[j] == 3)
                        cout << " _|";
                    else if(a[j] == 4 || a[j] == 8 || a[j] == 9)
                        cout << "|_|";
                    else if(a[j] == 5 || a[j] == 6)
                        cout << "|_ ";
                }
            }
            if(i == 3)
            {
                for(int j = 0; j < 4; ++j)
                {
                    if(a[j] == 1 || a[j] == 4 || a[j] == 7)
                        cout << "  |";
                    else if(a[j] == 3 || a[j] == 5 || a[j] == 9)
                        cout << " _|";
                    else if(a[j] == 0 || a[j] == 6 || a[j] == 8)
                        cout << "|_|";
                    else if(a[j] == 2)
                        cout << "|_ ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
