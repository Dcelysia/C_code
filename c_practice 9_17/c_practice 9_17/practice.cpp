//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//int main(void)
//{
//    int n1 = 0, i = 2, j = 0, count = 0;
//    while (~scanf("%d", &n1))
//    {
//        //试除法
//        for (i = 2; i <= n1; i++)
//        {
//            for (j = 2; j < i; j++)
//            {
//                if (i % j == 0)
//                {
//                    count++;
//                    break;
//                }
//            }
//            if (j == i)
//            {
//                printf("%d ", i);
//            }
//
//        }
//
//        printf("\n%d\n", count);
//
//    }
//
//    return 0;
//}
//输入两个图形，判断图形的相似度
//int main(void)
//{
//    int arr1[101][101] = { 0 };
//    int arr2[101][101] = { 0 };
//    int i = 0, ip1 = 0, j = 0, ip2;
//    scanf("%d %d", &ip1, &ip2);
//    int count = 0.0;
//    for (i = 0; i < ip1; i++)
//    {
//        for (j = 0; j < ip2; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//
//
//    }
//    for (i = 0; i < ip1; i++)
//    {
//        for (j = 0; j < ip2; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//
//    }
//    for (i = 0; i < ip1; i++)
//    {
//        for (j = 0; j < ip2; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//
//    printf("%.2lf\n", 100.0 * count / (ip1 * ip2));
//
//
//    return 0;
//}
//比较字符串要用strcmp，不能用==
//int main(void)
//{
//    char arr1[20] = { 0 };
//    char arr2[20] = { 0 };
//    while (~scanf("%s %s", arr1, arr2))
//    {
//        if (strcmp(arr1, "admin") == 0 && strcmp(arr2, "admin") == 0)
//        {
//            printf("Login Success!\n");
//        }
//        else {
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}
//判断1到2019之间包含9的数字有多少
//int main(void)
//{
//    int i = 0, n = 0, count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        n = i;
//        while (n)
//        {
//            if (n % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            n /= 10;
//        }
//    }
//    printf("%d\n", count);
//}
//打印成绩的最高值和最低分和平均分
//int main(void)
//{
//    int n = 0;
//    double ip = 0.0;
//    double max = 0.0;
//    double min = 100.0, sum = 0.0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%lf", &ip);
//        if (ip > max)
//        {
//            max = ip;
//        }
//        if (ip < min)
//        {
//            min = ip;
//        }
//        sum += ip;
//    }
//    printf("%.2lf %.2lf %.2lf", max, min, sum / n / 1.0);
//    return 0;
//}
//判断两次输入的密码是否相同
//int main(void)
//{
//    char arr1[100] = { 0 };
//    char arr2[100] = { 0 };
//    scanf("%s %s", &arr1, &arr2);
//    if (strcmp(arr1, arr2) == 0)
//    {
//        printf("same\n");
//    }
//    else
//    {
//        printf("different\n");
//    }
//    return 0;
//}
//矩形计算

//int main(void)
//{
//    int m = 0, n = 0;
//    int i = 0, j = 0;
//    int ip = 0;
//    int sum = 0;
//    scanf("%d %d", &m, &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &ip);
//            if (ip > 0)
//            {
//                sum += ip;
//            }
//        }
//
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//逆序输出
//int main(void)
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//判断10个整数之间的正负
//int main(void)
//{
//    int count = 0, i = 0;
//    int ip = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &ip);
//        if (ip > 0)
//        {
//            count++;
//        }
//    }
//    printf("positive:%d\n", count);
//    printf("negative:%d\n", 10 - count);
//    return 0;
//}
//n之数的和
//int main(void)
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    int ip = 0;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &ip);
//        sum += ip;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//有序数组的判断
//int main(void)
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] < arr[i + 1])
//        {
//            continue;
//        }
//        else {
//            break;
//        }
//    }
//    if (i == n - 1)
//    {
//        printf("sorted\n");
//    }
//    else {
//
//        printf("unsorted\n");
//    }
//
//    return 0;
//}
// //判断一个函数是否有序
//int main(void)
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    int count1 = 0, count2 = 0;
//
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] < arr[i + 1])
//        {
//            count1++;
//        }
//        else {
//            count2++;
//        }
//    }
//    if (count1 == n - 1 || count2 == n - 1)
//    {
//        printf("sorted\n");
//    }
//    else {
//
//        printf("unsorted\n");
//    }
//
//    return 0;
//}
//在有序数组中删除一个数
//int main(void)
//{
//    int n1 = 0;
//    scanf("%d", &n1);
//    int i = 0;
//    int count = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < n1; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int n2 = 0;//要删除的数字
//    scanf("%d", &n2);
//    for (i = 0; i < n1; i++)
//    {
//        if (n2 == arr[i])
//        {
//            count++;
//        }
//    }
//    int j = 0;
//    for (i = 0; i < count; i++)
//    {
//        for (j = 0; j < n1 - count; j++)
//        {
//            if (arr[j] == n2)
//            {
//                if (j < n1 - count - 1)
//                {
//                    int tem = arr[j];
//                    arr[j] = arr[j + 1];
//                    arr[j + 1] = tem;
//                }
//            }
//        }
//    }
//
//
//    for (i = 0; i < n1 - count; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main(void)
//{
//    int n1 = 0;
//    scanf("%d", &n1);
//    int i = 0;
//    int count = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < n1; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int n2 = 0;//要删除的数字
//    scanf("%d", &n2);
//    for (i = 0; i < n1; i++)
//    {
//        if (n2 == arr[i])
//        {
//            count++;
//        }
//    }
//    int j = 0, k = 0;
//    for (i = 0; i < count; i++)
//    {
//        for (j = 0; j < n1 - count; j++)
//        {
//            if (arr[j] == n2)
//            {
//                for (k = j; k < n1 - count; k++)
//                {
//                    if (k < n1 - 1)
//                    {
//                        int tem = arr[k];
//                        arr[k] = arr[k + 1];
//                        arr[k + 1] = tem;
//                    }
//
//                }
//            }
//        }
//    }
//
//
//    for (i = 0; i < n1 - count; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main(void)
//{
//    int n1 = 0;
//    scanf("%d", &n1);
//    int i = 0;
//    int count = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < n1; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int n2 = 0;//要删除的数字
//    scanf("%d", &n2);
//    int j = 0;
//    for (i = 0; i < n1; i++)
//    {
//        if (arr[i] != n2)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//有序数列去重
//int main(void)
//{
//    int n = 0, i = 0, j = 0;
//    scanf("%d", &n);
//    int arr[1000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                int k = 0;
//                for (k = j; k < n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;
//                j--;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
//合并两个有序数组
//int main(void)
//{
//    int n1 = 0;
//    int n2 = 0;
//    scanf("%d %d", &n1, &n2);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int arr3[2000] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < n1; i++)//输入第一个数组
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < n2; i++)//输入第二个数组
//    {
//        scanf("%d", &arr2[i]);
//    }
//    i = 0, j = 0;
//    int k = 0;
//    //判断大小，存入arr3
//    while (i < n1 && j < n2)
//    {
//        if (arr1[i] >= arr2[j])
//        {
//            arr3[k++] = arr2[j++];
//
//        }
//        else if (arr1[i] < arr2[j])
//        {
//            arr3[k++] = arr1[i++];
//        }
//    }
//    //查缺补漏
//    if (i != n1)
//    {
//        while (i < n1)
//        {
//            arr3[k++] = arr1[i++];
//
//        }
//    }
//    else if (j != n2)
//    {
//        while (j < n2)
//        {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    for (i = 0; i < n1 + n2; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}
#define DAY 7
#include <iostream>
using namespace std;

//int main(void)
//{
//	int a = 10;
//	cout << "a=" << a << endl;
//	//cout << "hello,world" << endl;
//	//system("pause");
//    return 0;
//}
//int main(void)
//{
//	cout << "一周有" << DAY << "天" << endl;
//	system("pause");
//	return 0;
//}
int main(void)
{
	//int _123abc = 2;
	float num1 = 3.1415926f;
	double num2 = 3.1415926;
	float num3 = 2e-2;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	system("pause");
	return 0;
}