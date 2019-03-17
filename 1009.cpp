#include <iostream>

using namespace std;

int main()
{
    float a[12], sum = 0.0;
    for(int i = 0;i < 12; ++i)
    {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    printf("￥%.2f", sum / 12.0 );
    return 0;
}
