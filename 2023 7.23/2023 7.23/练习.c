#include <stdio.h>
#include <string.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;
//	int i = 0;
//	int text = strlen(arr);
//	printf("%d \n", text);
//	printf("------------------------\n ");
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <n ; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d]的地址为%p\n",i,j,&arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	return 0;
//}
void bubble_sort(int arr[],int sz)//冒泡排序法
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = tem;

			}
		}
	}
}
int main()
{
	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//将数组变成升序的函数
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}

	return 0;
}