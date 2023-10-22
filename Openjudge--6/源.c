#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	double n = 0.0;
//	scanf("%lf", &n);
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int n1 = 0;
//		scanf("%d", &n1);
//		sum += n1;
//	}
//	double op = sum / n;
//	printf("%.2lf", op);
//
//	return 0;
//}
//
//int main(void)
//{
//	double n = 0.0;
//	double sum = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		scanf("%lf", &n);
//		sum += n;
//	}
//	double op = sum / 12.0;
//	printf("$%.2lf", op);
//
//	return 0;
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		double tmp = 0;
//		scanf("%lf", &tmp);
//		sum += tmp;
//	}
//	printf("%.4lf", sum / n);
//	return 0;
//}

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		int tmp = 0;
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//	double op = 0.0;
//	op= sum /1.0/n;
//	printf("%d %.5lf", sum,op);
//	return 0;
//}
#include <stdio.h>
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int max = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int tmp = 0;
		scanf("%d", &tmp);
		max = max > tmp ? max : tmp;
	}
	printf("%d\n", max);
	return 0;
}