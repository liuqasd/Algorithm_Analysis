#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int n, m, x1, x2, y1, y2; //隔板数量，物品数量，纸箱左上角横纵坐标，右下角横纵坐标
    int U[500], L[500], X[500], Y[500], s[500]; //隔板坐标，物品坐标
    while(scanf("%d",&n),n!=0)
    {
        if (n != 0) //确保隔板数量不为0
            printf("\n");
        scanf("%d %d %d %d %d", &m, &x1, &y1, &x2, &y2); //依次读入

        memset(s, 0, sizeof(s)); //数组S置0

        int i=0;
        while(i<n)
            {
                scanf("%d %d", &U[i], &L[i]); //依次读入
                i++;
            }

            for (int j = 0; j < m; j++) //依次判断每个物品
            {
                scanf("%d %d", &X[j], &Y[j]); //依次读入
                int t = 0;
                for (i = 0; i < n; i++) //依次验证每个格子
                {
                    if ((L[i] - U[i]) * (Y[j] - y1) - (X[j] - U[i]) * (y2 - y1) < 0) //物品在格子里的条件
                    {
                        s[i]++; //该格子内物品数量+1
                        t = 1;
                        break; //结束该物品判断
                    }
                }

                if (t == 0)
                    s[i]++;
        }
		printf("\n");
        for(i=0;i<=n;i++)
            printf("%d: %d\n",i,s[i]);
    }
    return 0;
}
