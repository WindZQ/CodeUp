#include <cstdio>
int main()
{
    int n, patch = 1;
    scanf("%d", &n);
    for(int i = 1; i < n; ++i)
    {
        patch = (patch + 1) * 2;
    }
    printf("%d\n", patch);
    return 0;
}
