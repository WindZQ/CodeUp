#include <cstdio>
int main()
{
    double length = 100, high = length / 2;
    int n;
    scanf("%d", &n);
    for(int i = 1; i < n; ++i)
    {
        length += high * 2;
        high /= 2;
    }
    printf("%.4f %.4f\n", length, high);
}
