#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//int main(void)
//{
//    int input = 0;
//    while (~scanf("%d", &input))
//    {
//        if (input > 0)
//        {
//            printf("1\n");
//        }
//        else if (input == 0)
//        {
//            printf("0.5\n");
//        }
//        else {
//            printf("0\n");
//        }
//
//    }
//    return 0;
//}
//�����������֣��ж��Ƿ��������Σ�����������Σ��������ε�������ʾ����
//int main(void)
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (~scanf("%d %d %d", &a, &b, &c))
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c || a == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//
//    }
//}
#include <math.h>
//ͨ��BMI����һ���˵������Ƿ񽡿�
//int main(void)
//{
//    int high = 0;
//    int weight = 0;
//    int num1 = 0;
//    while (~scanf("%d %d", &high, &weight))
//    {
//        int num2 = pow(high / 100, 2);
//        num1 = weight / (high / 100*high/100);
//        if (num1 < 18.5)
//        {
//            printf("Underweight\n");
//        }
//        else if (num1 >= 18.5 && num1 <= 23.9)
//        {
//            printf("Normal\n");
//        }
//        else if (num1 > 23.9 && num1 <= 27.9)
//        {
//            printf("Overweight\n");
//        }
//        else
//        {
//            printf("Obese\n");
//        }
//    }
//    return 0;
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
//            if (num1 == 0)
//            {
//                    printf("x1=x2=%.2lf\n", (-b) / (2*a));
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
//int main(void)
//{
//    double n1 = 0;
//    char c1 = 0;
//    double n2 = 0;
//    scanf("%lf%c%lf", &n1, &c1, &n2);
//    if (c1 == '+')
//    {
//        printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
//
//    }
//    else if (c1 == '-')
//    {
//        printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
//    }
//    else if (c1 == '*')
//    {
//        printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1 * n2);
//    }
//    else if (c1 == '/')
//    {
//        if (n2 == 0)
//
//        {
//            printf("Wrong!Division by zero!\n");
//        }
//        else {
//
//            printf("%.4lf/%.4lf=%.4lf\n", n1, n2, n1 / n2);
//        }
//    }
//    else {
//        printf("Invalid operation!\n");
//    }
//
//    return 0;
//}
//����ͼ��
//int main(void)
//{
//    int input = 0;
//    while (~scanf("%d", &input))
//    {
//        int i = 0;
//        for (i = 0; i < input; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//��ӡ������ͼ��
//int main(void)
//{
//    int input = 0;
//    while (~scanf("%d", &input))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < input; i++)
//        {
//            for (j = 0; j < input; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//��ӡ������
//int main(void)
//{
//    int input = 0;
//    while (~scanf("%d", &input))
//    {
//        int i = 0, j = 0;
//        for (i = 1; i <= input; i++)
//        {
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main(void)
//{
//    int input = 0;
//    while (~scanf("%d", &input))
//    {
//        int i = 0, j = 0;
//        for (i = input; i >0; i--)
//        {
//            for (j = i; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//��ӡ�пո��������
//int main(void)
//{
//    int input = 0, i = 0;
//    while (~scanf("%d", &input))
//    {
//        for (i = 0; i < input; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 * (input - i); j++)
//            {
//                printf(" ");
//
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//}
//int main(void)
//{
//    int i = 0, j = 0, input = 0;
//    while (~scanf("%d", &input))
//    {
//        for (i = 0; i < input; i++)
//        {
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < input - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main(void)
//{
//    int input = 0, i = 0, j = 0;
//    while (~scanf("%d", &input))
//    {
//        //�ϰ벿��
//        for (i = 0; i <= input; i++)
//        {
//            for (j = 0; j < input - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        //�°벿��
//        for (i = 0; i < input; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < input - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main(void)
//{
//    int input = 0, i = 0, j = 0;
//    while (~scanf("%d", &input))
//    {
//        //�ȴ�ӡ�ϰ벿��
//        for (i = 0; i < input + 1; i++)
//        {
//            for (j = 0; j < input + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//
//        }
//        //�ٴ�ӡ�°벿��
//        for (i = 0; i < input; i++)
//        {
//            for (j = 0; j < input + i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
//int main(void)
//{
//    int input = 0, i = 0, j = 0;
//    while (~scanf("%d", &input))
//    {
//        //�ȴ�ӡ�ϰ벿��
//        for (i = 0; i < input + 1; i++)
//        {
//            for (j = 0; j < input + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//
//        }
//        //�ٴ�ӡ�°벿��
//        for (i = 1; i < input + 1; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
//int main(void)
//{
//    int i = 0, input = 0, j = 0;
//    while (~scanf("%d", &input))
//    {
//        //�ϰ벿��
//        for (i = 0; i < input; i++)
//        {
//            for (j = 0; j < 2*(input-i); j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        //�°벿��
//        for (i = 0; i < input + 1; i++)
//        {
//            for (j = 0; j < (2 * i); j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < input + 1 - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main(void)
//{
//    int input = 0, i = 0, j = 0;
//    while (~scanf("%d", &input))
//    {
//        for (i = 0; i < input; i++)
//        {
//            for (j = 0; j < input; j++)
//            {
//                if (0 == i || input - 1 == i || 0 == j || input - 1 == j)
//                {
//                    printf("* ");
//                }
//                else {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//}
int main(void)
{
    int input = 0, i = 0, j = 0;
    while (~scanf("%d", &input))
    {
        for (i = 0; i < input; i++)
        {
            for (j = 0; j <= i; j++)
            {
                if (0 == j || i == j || input - 1 == i)
                {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}