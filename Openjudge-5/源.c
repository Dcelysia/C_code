#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
//int main(void)
//{
//	double a = 0, b = 0, c = 0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	double deta = b * b - 4 * a * c;
//	if (b * b == 4 * a * c)
//	{
//		printf("x1=x2=%.5lf", -b / (2 * a));
//
//	}
//	if (b * b > a * c * 4)
//	{
//		printf("x1=%.5lf;x2=%.5lf", (-b + sqrt(deta)) / (2 * a), (-b - sqrt(deta)) / (2 * a));
//	}
//	if (b * b < 4 * a * c)
//	{
//		double x1 = (0 - b) / (2 * a);
//		double x2 = sqrt(4 * a * c - b * b) / (2 * a);
//		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", (0 - b) / (2 * a), sqrt(4 * a * c - b * b) / (2 * a), (0 - b) / (2 * a), sqrt(4 * a * c - b * b) / (2 * a));
//	}
//	return 0;
//}
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main(void)
//{
//	//成员的名字
//	char name[30][30] = { 0 };
//	//成员的分数
//	int score[30] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	char ch_tmp[30] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d", &name[i],&score[i]);
//	}
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n-i-1; j++)
//		{
//			if (score[j] < score[j + 1])
//			{
//				int int_tmp = 0;
//				int_tmp = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = int_tmp;
//				strcpy(ch_tmp, name[j]);
//				strcpy(name[j], name[j+1]);
//				strcpy(name[j +1], ch_tmp);
//			}
//			if (score[j] == score[j + 1])
//			{
//				if (strcmp(name[j], name[j + 1]) > 0)
//				{
//					strcpy(ch_tmp, name[j]);
//					strcpy(name[j], name[j +1]);
//					strcpy(name[j+1], ch_tmp);
//				}
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %d\n", name[i], score[i]);
//	}
//
//}
//
//int main(void)
//{
//	char name[8][10] = { 0 };
//	int i = 0;
//	scanf("%s", &name[i]);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int a = 0;
//    float diyi = 5.50, dier = 4.30, disan = 3.00, disi = 2.50, q = 0, zhaoqian = 0, s = 0, f = 0;
//    scanf("%d %f %f", &a, &s, &q);
//    switch (a) 
//    {
//    case 1: 
//    {
//        f = diyi * s;
//        zhaoqian = q - diyi * s;
//        //printf("%.6f", zhaoqian);
//        break;
//    }
//    case 2: 
//    {
//        f = dier * s;
//        zhaoqian = q - dier * s;
//        //printf("%.6f", zhaoqian); 
//        break;
//    }
//    case 3: 
//    {
//        f = disan * s;
//        zhaoqian = q - disan * s;
//        //printf("%.6f", zhaoqian); 
//        break;
//    }
//    case 4: 
//    {
//        f = disi * s;
//        zhaoqian = q - disi * s;
//        //printf("%.6f", zhaoqian);
//        break;
//    }
//
//    default:
//    {
//        printf("DataError\n");
//        break;
//    }
//    }
//
//
//    printf("您选择的苹果等级=%d级\n您购买的苹果重量=%.6f公斤\n您应付款=%.6f元\n您实付款=%.6f元\n应找您%.6f元\n", a, s, f, q, zhaoqian);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, prize, b = 0;
//    scanf("%d", &a);
//    if (a <= 100000 && a >= 0) 
//    {
//        prize = 0.1 * a;
//    }
//    else if (a < 0) 
//    {
//        printf("prize=%d", b);
//    }
//    else if (a > 100000 && a < 200000) 
//    {
//        prize = 100000 * 0.1 + (a - 100000) * 0.075;
//    }
//    else if (a >= 200000 && a < 400000) 
//    {
//        prize = 100000 * 0.1 + 100000 * 0.075 + (a - 200000) * 0.05;
//
//    }
//    else if (a >= 400000 && a < 600000) 
//    {
//        prize = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (a - 400000) * 0.03;
//
//    }
//    else if (a >= 600000 && a < 1000000) 
//    {
//        prize = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (a - 600000) * 0.015;
//    }
//    else 
//    {
//        prize = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (a - 1000000) * 0.01;
//       
//    }
//    printf("prize=%d", prize);
//    return 0;
//}
//
//int main(void)
//{
//	int arr[7] = { 0 };
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i < 7; i++)
//	{
//		for (int j = 0; j < 7-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[305] = { 0 };
//	int arr2[305] = { 0 };
//	int arr3[305][3] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d %d",&arr3[i][0], &arr3[i][1], &arr3[i][2]);
//		arr1[i] = arr3[i][0] + arr3[i][1] + arr3[i][2];
//	}
//	for (i = 0; i < n; i++)
//	{
//		arr2[i] = i + 1;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n-i-1; j++)
//		{
//			if (arr1[j] < arr1[j + 1])
//			{
//				int tmp = arr1[j];
//				arr1[j] = arr1[j+1];
//				arr1[j+1] = tmp;
//				tmp = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = tmp;
//			}
//
//		}
//	}
//	for (j = 0; j < n - 1; j++)
//	{
//		if (arr1[j] == arr1[j + 1])
//		{
//			if (arr3[arr2[j]-1][0] < arr3[arr2[j+1]-1][0])
//			{
//				int tmp = 0;
//				tmp = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = tmp;
//			}
//		}
//	}
//	for (j = 0; j < n - 1; j++)
//	{
//		if (arr1[j] == arr1[j + 1])
//		{
//			if (arr3[arr2[j]-1][0]==arr3[arr2[j + 1]-1][0])
//			{
//				if (arr2[j] > arr2[j+1])
//				{
//					int tmp = arr2[j];
//					arr2[j] = arr2[j + 1];
//					arr2[j + 1] = tmp;
//				}
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d %d\n", arr2[i], arr1[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//#define GET_LOW_BYTE0(x) ((x >>  0) & 0x000000ff) /* 获取第0个字节 */
//#define GET_LOW_BYTE1(x) ((x >>  8) & 0x000000ff) /* 获取第1个字节 */
//#define GET_LOW_BYTE2(x) ((x >> 16) & 0x000000ff) /* 获取第2个字节 */
//#define GET_LOW_BYTE3(x) ((x >> 24) & 0x000000ff) /* 获取第3个字节 */
//
//int main(void)
//{
//	unsigned int a = 0x12345678;
//
//	printf("byte0 = 0x%x\n", GET_LOW_BYTE0(a));
//	printf("byte1 = 0x%x\n", GET_LOW_BYTE1(a));
//	printf("byte2 = 0x%x\n", GET_LOW_BYTE2(a));
//	printf("byte3 = 0x%x\n", GET_LOW_BYTE3(a));
//	return 0;
//}
////
//#include <stdio.h>
//
//int main() {
//	short data = 265;
//	
//	printf("字节: %#X\n", data>>4);
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
struct student
{
    int chinese;
    int math;
    int english;
    int all;
    int num;
};
struct student st[310];
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        st[i].all = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d%d%d", &st[i].chinese, &st[i].math, &st[i].english);
        st[i].all = st[i].all + st[i].chinese + st[i].math + st[i].english;
        st[i].num = i + 1;
    }
    int temp1 = 0, temp2 = 0, temp3 = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i-1; j++)
        {
            if (st[j + 1].all < st[j].all)
            {
                temp1 = st[j].all;
                st[j].all = st[j + 1].all;
                st[j + 1].all = temp1;
                temp2 = st[j].num;
                st[j].num = st[j + 1].num;
                st[j + 1].num = temp2;
            }
            if (st[j + 1].all == st[j].all)
                if (st[j + 1].chinese > st[j].chinese)
                {
                    //temp3 = st[j].chinese;
                    //st[j].chinese = st[j + 1].chinese;
                    //st[j + 1].chinese = temp3;
                    temp2 = st[j].num;
                    st[j].num = st[j + 1].num;
                    st[j + 1].num = temp2;
                }
            if (st[j + 1].all == st[j].all && st[j + 1].chinese == st[j].chinese)
                if (st[j + 1].num < st[j].num)
                {
                    temp2 = st[j].num;
                    st[j].num = st[j + 1].num;
                    st[j + 1].num = temp2;
                }
        }
    for (i = n; i > n - 5; i--)
        printf("%d %d \n", st[i].num, st[i].all);
    return 0;
}
//int go_stair(int x)
//{
//    if (x < 1) 
//    {
//        return 0;
//    }
//    if (x == 1) 
//    {
//        return 1;
//    }
//    if (x == 2) {
//        return 2;
//    }
//    return go_stair(x - 1) + go_stair(x - 2);
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	int op = 0;
//	op = go_stair(n);
//	printf("%d", op);
//
//	return 0;
//}