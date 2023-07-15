#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 0; a <= 200; a++)
//	{
//		int flat = 1;
//		for (b = 2; b < a; b++)
//		{
//			if (a % b == 0)
//			{
//				flat = 0;
//				break;
//			}
//		}
//		if (flat == 1)
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\n有%d个素数", count);
//
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		int flat = 1;
//		for (b = 2; b < sqrt(a); b++)
//		{
//			if (a % b == 0)
//			{
//				flat = 0;
//				break;
//			}
//		}
//		if (flat == 1)
//		{
//			printf("%d ", a);
//			count++;
//		}
//	}
//	printf("\n有%d个素数", count);
//
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hellow";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = ("hello the world");
//	memset(arr, 'x', 5);
//	printf("%s ", arr);
//
//	return 0;
//}

int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
    
	return z;
}void exchange(int* pa,int* pb)
{
	int tem = 0;
	tem=*pa;
	*pa = *pb;
	*pb = tem;

}
int main()
{
	int a = 10;
	int b = 20;
	int max=get_max(a, b);
	printf("%d\n", max);
	printf("交换前：a=%d,b=%d\n", a, b);
	exchange(&a,&b);
	printf("交换后：a=%d,b=%d\n",a,b);
	return 0;
}