#include <cstdio>
#include <cstdlib>
/*int main()
{
    int i, j, n, a[100][100] = {0, 1};
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= i; ++j)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    for(i = 1; i <= n; ++i)
    {
        for(j = 1; j <= i; ++j)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}*/

//金字塔类型输出
int main()
{
    int row, col, heigh;
    scanf("%d", &heigh);
    int **array = (int **)malloc(sizeof(int *) * heigh);
    for(int i = 0; i < heigh; ++i)
        array[i] = (int *)malloc(sizeof(int) * heigh);
    for(row = 0; row < heigh; ++row)
    {
        for(col = 0; col < (heigh - row); ++col)
            printf("  ");
        for(col = 0; col <= row; ++col)
        {
            if(col == 0 || row == col)
            {
                array[row][col] = 1;
                printf("%4d", array[row][col]);
            }
            else
            {
                array[row][col] = array[row - 1][col - 1] + array[row - 1][col];
                printf("%4d", array[row][col]);
            }
        }
        printf("\n");
    }

    //
    for(int i = 0; i < heigh; ++i)
        free(array[i]);
    free(array);
    return 0;
}
