#include <stdio.h>

//int main(void)
//{
//	int a = 1;
//	do
//	{
//		printf("%d ",a);
//		a++;
//
//
//	} while (a<= 10);
//
//	return 0;
//}
//
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf_s("%d", &b);
//	for (a = 1; a <= b; a++)
//
//	{
//		c = c * a;
//	
//	}
//
//	
//	printf("%d", c);
//
////	return 0;
////}
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d", &a);
//	do
//	{
//		b = a - 1;
//		a = a * b;
//	} while (a <= 0);
//	printf("%d", a);
//	return 0;
//}

int main(void)
{
	int a = 0;
	scanf_s("%d", &a);
	int i = 0;
	int tem = 0;
	int c = 1;
	int sum = 0;

	for (c = 1; c <= a; c++)
	{
		for (i = 1; i <= c; i++)
		{
			tem = i * tem;
		}
		sum = sum + tem;
		tem = 1;
		

	}
	printf("%d", sum);

	return 0;
}
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for(i=1;i<=n;)
//
//	return 0;
//}