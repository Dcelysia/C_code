#include <stdio.h>

//打印出来1000到2000年的闰年，并且计算其数量
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//for (i = 1000; i <= 2000; i++)
//	//{
//	//	if (i % 4 == 0 && i % 100 != 0)
//	//	{
//	//		printf("%d ", i);
//	//		count++;
//	//	}
//	//	if (i % 400 == 0)
//	//	{
//	//		count++;
//	//		printf("%d ", i);
//	//	}
//	//}
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//判断100到200之间的素数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (b = 2; b < a; b++)
//		{
//			if (a % b == 0)
//				break;
//		}
//		if (a == b)
//		{
//			printf("%d ", a);
//		}
//	}
//
//
//	return 0;
//}