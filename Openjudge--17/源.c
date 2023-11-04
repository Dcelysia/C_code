#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10001] = { 0 };
	int L = 0, M = 0;
	scanf("%d %d", &L, &M);
	int i = 0;
	int wood = L+1;
	for (i = 0; i < M; i++)
	{
		int left = 0;
		int right = 0;
		scanf("%d %d", &left, &right);
		while (left <= right)
		{
			if (arr[left] == 0)
			{
				arr[left] = 1;
				wood--;
			}
			left++;
		}
	}
	printf("%d", wood);
	return 0;
}