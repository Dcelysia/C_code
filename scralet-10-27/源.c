#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void paixu(int* arr, int x, int y, int r, int direct)
{
	int source = 0, dest = 0;
	int arrzuo[500] = {0};
	int arryou[500] = { 0 };
	int arrshang[500]= { 0 };
	int arrxia[500]= { 0 };
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 500;
	for (i = 1; i <= r; i++)
	{
		//��ȡ���
		for (j = 0; j < 2*i + 1; j++)
		{
			
			arrzuo[j] = *(arr+ (x -i-1+j) * n + y-1-i);
		}
		//��ȡ�ұ�
	
		for (j = 0; j < 2 *i + 1; j++)
		{
			arryou[j] = *(arr + (x -1-i + j) * n + y-1+i);
		}
		//��ȡ�ϱ�

		for (j = 0; j < 2 * i + 1; j++)
		{
			arrshang[j] = *(arr+(x-1-i)*n+y-1-i+j);
		}	
		//��ȡ�±�
		for (j = 0; j < 2 * i + 1; j++)
		{
			arrxia[j] = *(arr + ((x-1+i)*n + y -1-i + j));
		}
		int left = 2 * i;
		int right = 2 * i;
		int shang = 2 * i;
		int xia = 2 * i;
		if (direct == 0)
		{
			//˳ʱ�� �ϵ���
			for (j = 0; j < 2 * i + 1; j++)
			{
				*(arr + (x - 1 - i + j) * n + y - 1 + i) = arrshang[j];
			}
			//�ҵ���
			for (j = 0; j < 2 * i + 1; j++)
			{
				*(arr + ((x - 1 + i) * n + y - 1 - i + j)) = arryou[right];
				right--;
			}
			right = 2 * i;
			//�µ���
			for (j = 0; j < 2 * i + 1; j++)
			{
				*(arr + (x - i - 1 + j) * n + y - 1 - i) = arrxia[j];
			}
			//����
			for (j = 0; j < 2 * i + 1; j++)
			{
				*(arr + (x - 1 - i) * n + y - 1 - i + j) = arrzuo[left];
				left--;
			}
		}
		else if(direct==1)
		{
			//�ϵ���
			for (j = 0; j < 2 * i + 1; j++)
			{

				*(arr + (x - i - 1 + j) * n + y - 1 - i) = arrshang[shang];
				shang--;
			}
			//����
			for (j = 0; j < 2 * i + 1; j++)
			{
				*(arr + ((x - 1 + i) * n + y - 1 - i + j)) = arrzuo[j];
			}
			//�µ���
			for (j = 0; j < 2 * i + 1; j++)
			{
				*(arr + (x - 1 - i + j) * n + y - 1 + i) =arrxia[xia];
				xia--;
			}
			//�ҵ���
			for (j = 0; j < 2 * i + 1; j++)
			{
				*(arr + (x - 1 - i) * n + y - 1 - i + j) =arryou[j];
			}
		}

	}
}
int main(void)
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	int i = 0;
	int j = 0;
	int x = 0, y = 0, size = 0, direct = 0,r=0;
	int arr[500][500] = { 0 };
	int n1 = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			arr[i][j] = n1;
			n1++;
		}
	}
	for (i = 0; i < k; i++)
	{
		scanf("%d %d %d %d", &x, &y, &r, &direct);
		paixu(arr, x, y, r, direct);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}