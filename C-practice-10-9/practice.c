#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main(void)
//{
//	double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
//	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
//	double x = x1-x2;
//	double y = y1-y2;
//	double op = sqrt((x * x) + (y * y));
//	printf("%.3lf\n", op);
//	return 0;
//}


//double line(double x1, double y1, double x2, double y2)
//{
//	double x = x1 - x2;
//	double y = y1 - y2;
//	double op = sqrt((x * x) + (y * y));
//	return op;
//}
//
//int main(void)
//{
//	double x1, y1, x2, y2, x3, y3;
//	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
//	double line1 = line(x1, y1, x2, y2);
//	double line2 = line(x1, y1, x3, y3);
//	double line3 = line(x2, y2, x3, y3);
//	double p = (line1 + line2 + line3) / 2;
//	double op = sqrt(p * (p - line1) * (p - line2) * (p - line3));
//	printf("%.2lf", op);
//	return 0;
//}