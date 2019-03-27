#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    while(n--)
    {
        cin >> m;
        char a, b;
        int count = 0;
        while(m--)
        {
            cin >> a >> b;
            if((a == 'R' && b == 'P') || (a == 'S' && b == 'R') || (a == 'P' && b == 'S'))
                count++;
            if((a == 'P' && b == 'R') || (a == 'R' && b == 'S') || (a == 'S' && b == 'P'))
                count--;
        }
        if(count > 0)
            cout << "Player 2" << endl;
        else if(count < 0)
            cout << "Player 1" << endl;
        else
            cout << "TIE" << endl;
    }
    return 0;
}
