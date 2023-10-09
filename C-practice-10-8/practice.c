#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define pi 3.14
//int main(void)
//{
//	double a = 0, b = 0;
//	scanf("%lf %lf", &a, &b);
//	int x = 0;
//	x = a / b;
//	double r = a - x * b;
//	printf("%g",r);
//	return 0;
//}
//
//int main(void)
//{
//	double ip1 = 0;
//	scanf("%lf", &ip1);
//	printf("%.2lf", 4*ip1*ip1*ip1*pi/3);
//	return 0;
//}

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

//int main(void)
//{
//	int n1 = 0, n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	double v = 3.14159 * n2 * n2 * n1;
//	int n = 20000 / v;
//	if ((20000 - n * v) != 0)
//	{
//		n++;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main(void)
//{
//	int n = 0, x = 0, y = 0;
//	scanf("%d %d %d", &n, &x, &y);
//	n = n - y/x;
//	if (y % x != 0)
//	{
//		n--;
//	}
//	printf("%d", n);
//	return 0;
//}
#include <math.h>
int main(void)
{
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	double op = sqrt(pow((n3 - n1), 2) + pow((n4 - n2), 2));
	if (n1 > n3)
	{
		int tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	if (n2 > n4)
	{
		int tmp = n2;
		n2 = n4;
		n4 = tmp;

	}
	printf("%.3lf",op);
	return 0;
}