#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main(void)
//{
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	int min = 2000;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		int tmp = 0;
//		scanf("%d", &tmp);
//		max = max > tmp ? max : tmp;
//		min = min < tmp ? min : tmp;
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = (n - 2) * 180;
//	for (i = 0; i < n-1; i++)
//	{
//		int tmp = 0;
//		scanf("%d", &tmp);
//		sum -= tmp;
//	}
//	printf("%d",sum);
//	return 0;
//}

//	}
//	printf("%d\n", max - min);
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	int i = 0;
//	int gold = 0;
//	int ying = 0;
//	int tong = 0;
//	int j = 0;
//	scanf("%d", &n);
//
//		for (j = 0; j < n; j++)
//		{
//			int gold_tmp = 0, ying_tmp = 0, tong_tmp = 0;
//			scanf("%d %d %d", &gold_tmp, &ying_tmp, &tong_tmp);
//			gold += gold_tmp;
//			ying += ying_tmp;
//			tong += tong_tmp;
//		}
//
//	printf("%d %d %d %d", gold, ying, tong, gold + ying + tong);
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int n1 = 0, n2 = 0;
//	int sum = 0;
//	scanf("%d %d", &n1, &n2);
//	while (n1 <= n2)
//	{
//		if (n1 % 2 != 0)
//		{
//			sum += n1;
//		}
//		n1++;
//	}
//	printf("%d", sum);
//	return 0;
//}
int main(void)
{
	int n1 = 0, n2 = 0;
	int sum = 0;
	scanf("%d %d", &n1, &n2);
	while (n1 <= n2)
	{
		if (n1 % 17 == 0)
		{
			sum += n1;
		}
		n1++;
	}
	printf("%d", sum);
	return 0;
}