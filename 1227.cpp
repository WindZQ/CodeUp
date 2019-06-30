#include <cstdio>
const int MAX = 100;
int main()
{
    int row, col, n, m, maxtemp = 0, maxcol = 0, minrow = 0, a[MAX][MAX];  //注意初值的赋值
    bool flag;
    scanf("%d%d", &n, &m);
    for(row = 0; row < n; ++row)             //输入
        for(col = 0; col < m; ++col)
            scanf("%d", &a[row][col]);
    for(row = 0; row < n; ++row)
    {
        maxtemp = a[row][0];                 //将第row行的第一个值作为最大值
        for(col = 0; col < m; ++col)
        {
            if(a[row][col] > maxtemp)        //寻找row最大值并且记录row行数
            {
                maxtemp = a[row][col];
                maxcol = col;
            }
        }
        flag = false;
        for(row = 0; row < n; ++row)         //确定是否为鞍点
        {
            if(a[row][maxcol] < a[row][col]) //如果没有鞍点就为true,否则就存在鞍点
            {
                flag = true;
                minrow = row;
                continue;
            }
        }
        if(flag)
            printf("NO\n");
    }
    printf("%d %d %d\n", a[minrow][maxcol], minrow, maxcol);
    return 0;
}
