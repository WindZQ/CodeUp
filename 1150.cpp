#include <iostream>
using namespace std;
//辗转相除法来计算最大公约数
int Gcd(int m, int n)
{
    if(n == 0)
        return m;
    return Gcd(n, m % n);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Gcd(a, b) << endl;
    return 0;
}
