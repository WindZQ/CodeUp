#include <cstdio>
void Sort(int *a, int n)
{
    int temp;
    for(int i = 0; i < n; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            if(a[j] < a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    Sort(a, n);
    for(int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
