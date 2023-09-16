#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////int main(void)
////{
////	 a, b;
//	scanf_s("%d %d", &a, sizeof(a),&b,sizeof(b));
////	int c=max(a, b);
////	printf("max=%d", c);
////}
//
//int main(void)
//{
//	int a = 0,b=0;
//	scanf_s("%d %d", &a, &b, sizeof(a), sizeof(b));
//	printf("%d %d", a, b);
//	
//	return 0;
//}
//计算平均身高
//int main(void)
//{
//    double input = 0.0;
//    double sum = 0.0;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%lf", &input);
//        sum += input;
//    }
//
//    printf("%.2lf\n", sum / 5.0);
//    return 0;
//}
//int main(void)
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        if (200 == n)
//        {
//            printf("OK\n");
//        }
//        else if (202 == n)
//        {
//            printf("Accepted\n");
//        }
//        else if (400 == n)
//        {
//            printf("Bad Request\n");
//        }
//        else if (403 == n)
//        {
//            printf("Forbidden\n");
//        }
//        else if (404 == n)
//        {
//            printf("Not Found\n");
//        }
//        else if (500 == n)
//        {
//            printf("Internal Server Error\n");
//        }
//        else if (502 == n)
//        {
//            printf("Bad Gateway\n");
//        }
//    }
//    return 0;
//}
//int main(void)
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}
//打印数字三角形
//int main(void)
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf("%d ", j + 1);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
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
//}
int main(void)
{
    int n1 = 0, i = 0, j = 0, count = 0;
    int arr[101] = { 0 };
    while (~scanf("%d", &n1))
    {
        for (i = 2; i <= n1; i++)
        {
            arr[i] = i;
            if (i <= 10)
            {
                for (j = 2; j < i; j++)
                {
                    if (arr[i] % j == 0)
                    {
                        arr[i] = 0;
                        count++;
                        break;
                    }
                }
            }
            else
            {
                for (j = 2; j <= 9; j++)
                {
                    if (arr[i] % j == 0)
                    {
                        arr[i] = 0;
                        count++;
                        break;
                    }
                }
            }
        }
        for (i = 2; i <= n1; i++)
        {
            if (arr[i] != 0)
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n%d", count++);
    }
    return 0;
}