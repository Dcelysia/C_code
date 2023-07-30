#include <stdio.h>
#define N_values 5
//void reserve(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz- 1;
//		int tem = 0;
//		tem = arr[left];
//		arr[left] = arr[right];
//
//	arr[right] = '/0';
//	if (left <right)
//	{
//		reserve(arr+1,sz-1);
//	}
//	arr[right] = tem;
//}	
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	reserve(arr,sz);
//	print(arr, sz);
//	return 0;
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		int tem = 0;
//		tem = arr[i];
//		arr[i] = arr2[i];
//		arr2[i] = tem;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* pc = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pc + i) = 1;
//	}
//	return 0;
//}

////指针中特殊的野指
//int* text()
//{
//	int a = 10;
//
//	return &a;
//}
//int main()
//{
//	int* pc = text();
//	*pc = 20;
//	printf("%d ", *pc);
//	return 0;
//}
//指针初始化
//int main()
//{
//	int* p = NULL;
//	return 0;
//}
//关于指针加减和指针间判断的代码
//int main()
//{
//	int values[N_values];
//	float* va;
//	for (va = &values[0]; va < &values[N_values];)
//	{
//		*va++ = 0;
//	}
//	return 0;
//}
//一个简洁的打印数组的代码
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p =NULL;
	for (p = &arr[0]; p < &arr[10];)
	{
		printf("%d\n", *p++);
	}
	return 0;
}