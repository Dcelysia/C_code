#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#define N 105
int main()
{
    int n, m, a[N][N], b[N][N];
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)//�������
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            if (i == 1 || i == n || j == 1 || j == m)//������ıߣ��Ҷ�ֵ����
                b[i][j] = a[i][j];
            else
                b[i][j] = round((double)(a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1] + a[i][j]) / 5);//���ĵ�λ�ûҶ�ֵ���������������ֵ�ƽ��
        }
    for (int i = 1; i <= n; ++i)//�������
    {
        for (int j = 1; j <= m; ++j)
            cout << b[i][j] << ' ';
        cout << endl;
    }
    return 0;
}