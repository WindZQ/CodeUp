#include <cstdio>
const int MAX = 100;
int main()
{
    int row, col, n, m, maxtemp = 0, maxcol = 0, minrow = 0, a[MAX][MAX];  //ע���ֵ�ĸ�ֵ
    bool flag;
    scanf("%d%d", &n, &m);
    for(row = 0; row < n; ++row)             //����
        for(col = 0; col < m; ++col)
            scanf("%d", &a[row][col]);
    for(row = 0; row < n; ++row)
    {
        maxtemp = a[row][0];                 //����row�еĵ�һ��ֵ��Ϊ���ֵ
        for(col = 0; col < m; ++col)
        {
            if(a[row][col] > maxtemp)        //Ѱ��row���ֵ���Ҽ�¼row����
            {
                maxtemp = a[row][col];
                maxcol = col;
            }
        }
        flag = false;
        for(row = 0; row < n; ++row)         //ȷ���Ƿ�Ϊ����
        {
            if(a[row][maxcol] < a[row][col]) //���û�а����Ϊtrue,����ʹ��ڰ���
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
