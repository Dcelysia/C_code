#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;
	int i = 0;
	int arr[101] = { 0 };
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (0 <= arr[i] && arr[i] <= 18)
		{
			sum1++;
		}
		else if (19 <=arr[i] && arr[i] <= 35)
		{
			sum2++;
		}
		else if (36 <= arr[i] && arr[i] <= 60)
		{
			sum3++;
		}
		else
		{
			sum4++;
		}
	}
	printf("%.2lf%\n", 100.0 * sum1 / n);
	printf("%.2lf%\n", 100.0 * sum2 / n);
	printf("%.2lf%\n", 100.0 * sum3 / n);
	printf("%.2lf%\n", 100.0 * sum4 / n);
	return 0;
}