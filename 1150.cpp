#include <iostream>
using namespace std;
//շת��������������Լ��
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
