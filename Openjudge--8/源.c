#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	int num1 = 0;
//	int num5 = 0;
//	int num10 = 0;
//	for (i = 0; i < k; i++)
//	{
//		int tmp = 0;
//		scanf("%d", &tmp);
//		switch (tmp)
//		{
//		case 1:
//			num1++;
//			break;
//		case 5:
//			num5++;
//			break;
//		case 10:
//			num10++;
//			break;
//		}
//	}
//	printf("%d\n%d\n%d\n", num1, num5, num10);
//	return 0;
//}
//int main(void)
//{
//	int k = 0,m=0;
//	scanf("%d %d", &k,&m);
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < k; i++)
//	{
//		int tmp = 0;
//		scanf("%d", &tmp);
//		if (tmp == m)
//		{
//			num++;
//		}
//	}
//	printf("%d\n",num);
//	return 0;
//}
//
//#include <math.h>
//#include <stdio.h>
//int main(void)
//{
//    double x = 0, n = 0;
//	scanf("%lf %lf", &x, &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		x *= 1.001;
//	}
//	printf("%.4lf", x);
//
//
//	return 0;
//}
#include <math.h>
#include <stdio.h>
int main(void)
{
	double r, m, y;
	scanf("%lf %lf %lf", &r, &m, &y);
	int i = 0;
	for (i = 0; i < y; i++)
	{
		m *= (1 + r / 100);
	}
	int op = (int)m;
	printf("%d\n", op);

	return 0;
}