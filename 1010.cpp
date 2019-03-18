#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    char a[1000000];
    while(gets(a))
    {
        int l = strlen(a);
        int flag = 0;
        for(int i = 0; i < l; ++i)
        {
            if(a[i] != 'A' && a[i] != 'B' && a[i] != 'C' && a[i] != 'D' && a[i] != 'F' && a[i] != ' ')
            {
                flag = 1;
                cout << "Unknown" << endl;
                break;
            }
        }
        int sum = 0;
        int length = 0;
        if(flag == 0)
        {
            for(int j = 0; j < l; ++j)
            {
                if(a[j] == 'A')
                {
                    sum += 4;
                    length++;
                }
                if(a[j] == 'B')
                {
                    sum += 3;
                    length++;
                }
                if(a[j] == 'C')
                {
                    sum += 2;
                    length++;
                }
                if(a[j] == 'D')
                {
                    sum += 1;
                    length++;
                }
                if(a[j] == 'F')
                {
                    sum += 0;
                    length++;
                }
            }
            double average = sum * 1.0 / length * 1.0;
            cout << fixed << setprecision(2) << average << endl;
        }
    }
    return 0;
}
