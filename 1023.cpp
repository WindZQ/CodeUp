#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int max = 0;
        int s;
        cin >> s;
        for(int i = s / 350; i >= 0; i--)
        {
            for(int j = (s - i * 350) / 200;j >= 0; j--)
            {
                for(int k = (s - i * 350 - j * 200) / 150; k >= 0; k--)
                {
                    int p = i * 350 + j * 200 + k * 150;
                    if(p > max)
                        max = p;
                }
            }
        }
        cout << s - max << endl;
    }
    return 0;
}
