#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int n, m, x1, x2, y1, y2; //������������Ʒ������ֽ�����ϽǺ������꣬���½Ǻ�������
    int U[500], L[500], X[500], Y[500], s[500]; //�������꣬��Ʒ����
    while(scanf("%d",&n),n!=0)
    {
        if (n != 0) //ȷ������������Ϊ0
            printf("\n");
        scanf("%d %d %d %d %d", &m, &x1, &y1, &x2, &y2); //���ζ���

        memset(s, 0, sizeof(s)); //����S��0

        int i=0;
        while(i<n)
            {
                scanf("%d %d", &U[i], &L[i]); //���ζ���
                i++;
            }

            for (int j = 0; j < m; j++) //�����ж�ÿ����Ʒ
            {
                scanf("%d %d", &X[j], &Y[j]); //���ζ���
                int t = 0;
                for (i = 0; i < n; i++) //������֤ÿ������
                {
                    if ((L[i] - U[i]) * (Y[j] - y1) - (X[j] - U[i]) * (y2 - y1) < 0) //��Ʒ�ڸ����������
                    {
                        s[i]++; //�ø�������Ʒ����+1
                        t = 1;
                        break; //��������Ʒ�ж�
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
