#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	double foot, bike = 0.0;
//	foot = n / 1.2;
//	bike = 50 + n / 3.0;
//	if (foot > bike)
//	{
//		printf("Bike\n");
//	}
//	else if (bike > foot)
//	{
//		printf("Walk\n");
//	}
//	else
//	{
//		printf("All");
//	}
//	return 0;
//}
//
//int main(void)
//{
//	double x = 0.0;
//	scanf("%lf", &x);
//	if (0 <= x && x < 5)
//	{
//		printf("%.3lf", -x + 2.5);
//	}
//	if (5 <= x && x < 10)
//	{
//		printf("%.3lf", 2-1.5*(x-3)*(x-3));
//	}
//	if (10 <= x && x < 20)
//	{
//		printf("%.3lf", x/2-1.5);
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int ip1 = 0;
//	char ip2 = 0;
//	scanf("%d %c", &ip1, &ip2);
//	int sum = 0;
//	if (ip1 <= 1000)
//	{
//		sum += 8;
//	}
//	if (ip1 > 1000)
//	{
//		sum += 8;
//		ip1 -= 1000;
//		if (ip1 %500 == 0)
//		{
//			sum += ip1 / 500 * 4;
//		}
//		else
//		{
//			sum += ip1 / 500 * 4 + 4;
//		}
//	}
//	if(ip2 == 'y')
//	{
//		sum += 5;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//int main(void)
//{
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	scanf("%d %d %d", &n1,&n2, &n3);
//	int max = n1 > n2 ? n1 : n2;
//	max = max > n3 ? max : n3;
//	printf("%d\n", max);
//	return 0;
//}
//
//int main(void)
//{
//	int n1 = 0, n2 = 0, n3 = 0;
//	scanf("%d %d %d", &n1, &n2, &n3);
//	if (((n1 + n2) > n3) && ((n1 + n3) > n2) && ((n3 + n2) > n1))
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((0 == year % 4 && year % 100 != 0) || (0 == year % 400))
//	{
//		printf("Y");
//	}
//	else
//	{
//		printf("N");
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1))
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//
//int main(void)
//{
//	int n1 = 0, n2 = 0;
//	char ch1 = 0;
//	scanf("%d %d %c", &n1, &n2, &ch1);
//	if (ch1 == '+')
//	{
//		printf("%d\n", n1 + n2);
//	}
//	else if (ch1 == '-')
//	{
//		printf("%d\n", n1 - n2);
//	}
//	else if (ch1 == '*')
//	{
//		printf("%d\n", n1*n2);
//	}
//	else if (ch1 == '/')
//	{
//		if (n2 == 0)
//		{
//			printf("Divided by zero!\n");
//		}
//		else
//		{
//			printf("%d\n", n1 / n2);
//		}
//	}
//	else
//	{
//		printf("Invalid operator!");
//	}
//	return 0;
//}
#include <math.h>
#include <stdio.h>
int main(void)
{
	double a = 0, b = 0, c = 0;
	scanf("%lf %lf %lf", &a, &b, &c);
	double deta = b * b - 4 * a * c;
	if (b * b == 4 * a * c)
	{
		printf("x1=x2=%.5lf", -b / (2 * a));

	}
	if (b * b > a * c * 4) 
	{
			printf("x1=%.5lf;x2=%.5lf", (-b + sqrt(deta)) / (2 * a), (-b - sqrt(deta)) / (2 * a));
	}
	if (b * b < 4 * a * c)
	{
		double x1 = (0 - b) / (2 * a);
		double x2 = sqrt(4 * a * c - b * b) / (2 * a);
	 printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi",x1 , x2, x1,x2);
	}
	return 0;
}
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//    double a = 0.0, b = 0.0, c = 0.0;
//    double num1 = 0.0;
//    while (~scanf("%lf %lf %lf", &a, &b, &c))
//    {
//        if (0 == a)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            num1 = b * b - 4 * a * c;
//            if (b == c && b == 0)
//            {
//                if (a > 0)
//                {
//                    printf("x1=x2=%.2lf\n", b / (2 * a));
//                }
//                else
//                {
//                    printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//                }
//            }
//            else if (num1 == 0)
//            {
//                printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//
//            }
//            else if (num1 > 0)
//            {
//                printf("x1=%.2lf;x2=%.2lf\n", ((-1 * b) - sqrt(num1)) / 2 / a, ((-1 * b) + sqrt(num1)) / 2 / a);
//            }
//            else if (num1 < 0)
//            {
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", (-1 * b) / 2 / a, sqrt(-num1) / 2 / a, (-1 * b) / 2 / a, sqrt(-num1) / 2 / a);
//            }
//        }
//    }
//
//    return 0;
////}
//
//int main(void)
//{
//	int a_num = 0;
//	int e_hour = 0;
//	int hour = 0;
//	scanf("%d %d %d", &a_num, &e_hour, &hour);
//	if (hour % e_hour == 0)
//	{
//		a_num -= hour/e_hour;
//	}
//	else
//	{
//		a_num = a_num - hour / e_hour - 1;
//	}
//	if (a_num < 0)
//	{
//		a_num = 0;
//	}
//	printf("%d\n", a_num);
//	return 0;
//}