#include <stdio.h>
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(+c));
//	printf("%d\n", sizeof(-c));
//	return 0;
//}
//int fun()
//{
//	static int count = 1;
//	return ++count;
//	
//}
//int main()
//{
//	int i = fun() - fun() * fun();
//	printf("%d\n", i);
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	return 0;
//}
void reserve(int arr[])
{
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int tem = 0;
	tem = arr[left];
	arr[left] = arr[right];
	arr[right] = '/0';
	reserve(arr+1);
	arr[right] = tem;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	reserve(arr);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}