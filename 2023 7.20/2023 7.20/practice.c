#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((9 == i % 10)||(i>=90&&i<99))
//			count++;
//	
//	}
//	printf("%d\n", count);
//	return 0;
//}
//double new(int i)
//{ if (i >= 1)
//{
//	if (i%2 != 0)
//	{
//		double a = 0;
//		a = 1.0 / i;
//		return a+ new(i - 1);
//	}
//	else
//	{
//		double a = 0;
//		a = 1.0 / i;
//		return -a+ new(i - 1);
//	}
//}
//
//else
//{
//	return 0;
// }
//}
//int main()
//{
//	int i = 100;
//	printf("%lf\n", new(i));
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//
//	}
//	printf("%d", max);
//
//
//	return 0;
//}
int main()
{
	int i = 0;
	int a = 0;
	for (i = 1; i <= 9; i++)
	{
		for (a = 1; a <= i; a++)
		{
			printf("%d*%d=%-2d ",i,a,i*a);
		}
		printf("\n");
	}
	return 0;
}