#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main(void)
//{
//	double n1 = 0, n2 = 0;
//	scanf("%lf %lf", &n1, &n2);
//	printf("%.3lf%%", n2 / n1*100);
//}
//
//int main(void)
//{
//	double x = 0, a = 0, b = 0, c = 0,d=0;
//	scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
//	double op = a * x * x * x + b * x * x + c * x + d;
//	printf("%.7lf", op);
//
//	return 0;
//}

//
//int main(void)
//{
//	double f = 0.0;
//	scanf("%lf", &f);
//	double n1 = f - 32;
//	n1 *= 5;
//	n1 /= 9;
//	printf("%.5lf",n1);
//	return 0;
//}

//#define pi 3.14159
//int main(void)
//{
//	double ip1 = 0;
//	scanf("%lf", &ip1);
//	printf("%.5lf %.5lf %.5lf", ip1 * 2, 2 * pi * ip1, pi * ip1 * ip1);
//	return 0;
//}

int main(void)
{
	float r1 = 0, r2 = 0;
	scanf("%f %f", &r1, &r2);
	printf("%.2f", 1 / (1 / r1 + 1 / r2));
	return 0;
}