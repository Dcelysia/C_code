#define _CRT_SECURE_NO_WARNINGS


//int main(void)
//{
//	int p1 = 1, q1 = 2;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += 1.0 * q1 / p1;
//		int tmp = p1;
//		p1 = q1;
//		q1 = q1 + tmp;
//	}
//	printf("%.4lf", sum);
//	return 0;
//}
//
//#include <math.h>
//double equation(int n)
//{
//	double x = (double)n;
//	return pow(-1, x - 1) * 1.0 / x;
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0.0;
//
//	for (i = 1; i <= n; i++)
//	{
//		sum += equation(i);
//	}
//	printf("%.4lf", sum);
//	return 0;
//}
//
//int equation(int x)
//{
//	int sum = 1;
//	for (int i = 1; i <= x; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += equation(i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//double equation(int x)
//{
//	double sum = 1.0;
//	for (int i = 1; i <= x; i++)
//	{
//		sum *= i;
//	}
//	return 1.0/sum;
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += equation(i);
//	}
//	printf("%.10lf\n", sum+1);
//	return 0;
//}

//int main(void)
//{
//	double x = 0.0;
//	int n = 0;
//	int i = 0;
//	double sum = 0.0;
//	scanf("%lf %d", &x, &n);
//	for (i = 0; i <= n; i++)
//	{
//		sum += pow(x, i);
//	}
//	printf("%.2lf", sum);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int m = 0;
//	int x = 0;
//	int n = 0;
//	scanf("%d %d %d", &m, &n, &x);
//	int add_n = 0;
//	int jian = 0;
//
//	if (m % n == 0)
//	{
//		jian = m / n;
//	}
//	else
//	{
//		jian = m / n + 1;
//	}
//	while (x >= jian)
//	{
//
//		x -= jian;
//		add_n = m / n;
//		n += add_n;		
//		if (m % n == 0)
//		{
//			jian = m / n;
//		}
//		else
//		{
//			jian = m / n + 1;
//		}
//
//	}
//	printf("%d", n);
//	return 0;
//}