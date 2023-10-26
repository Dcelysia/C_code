#define _CRT_SECURE_NO_WARNINGS
//
//int main(void)
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	int year = -1;
//	double money = n;
// 	double peice = 200.0;
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		if (money >= peice)
//		{
//			printf("%d", i);
//			return 0;
//		}
//		money += n;
//		peice = peice * 1.0 * (1.0 + k / 100.0);
//	}
//	printf("Impossible\n");
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int tmp1 = 1;
//	int tmp2 = 1;
//	int op = 0;
//	if (n == 1 || n == 2)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		for (i = 2; i < n; i++)
//		{
//			op = tmp1 + tmp2;
//			tmp1 = tmp2;
//			tmp2 = op;
//		}
//		printf("%d\n", op);
//	}
//	return 0;
//
//}
//#include <stdio.h>
//
//int main(void)
//{
//	double ip1 = 0.0, ip2 = 0.0, haart = 0.0;
//	int k = 0;
//	scanf("%d", &k);
//	scanf("%lf %lf", &ip1, &ip2);
//	haart = ip2 / ip1;
//	int i = 0;
//	for (i = 0; i < k - 1; i++)
//	{
//		scanf("%lf %lf", &ip1, &ip2);
//		double tmp = ip2 / ip1;
//		if (tmp - haart > (5.0 / 100))
//		{
//			printf("better\n");
//		}
//		else if (haart - tmp > (5.0 / 100))
//		{
//			printf("worse\n");
//		}
//		else
//		{
//			printf("same\n");
//		}
//	}
//	return 0;
//}

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	double x, y,distance;
//	int num = 0;
//	double time = 0.0;
//	int i = 0;
//	
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf %lf %d", &x, &y, &num);
//		distance = sqrt(x * x + y * y);
//		time =time+ distance / 50.0 * 2 + num * 1.5;
//	}
//	time += 0.5;
//	int op = (int)time;
//	printf("%d", op);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	double tmp = (double)n;
//	double sum = tmp;
//	for (i = 1; i < 10; i++)
//	{
//		
//		tmp /= 2.0;
//		sum += tmp*2;
//	}
//	tmp /= 2.0;
//	printf("%g\n%g", sum,tmp);
//	return 0;
//}