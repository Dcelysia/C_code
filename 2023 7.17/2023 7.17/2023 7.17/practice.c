#include <stdio.h>
#include <string.h>
#include "add.h"


//void Add(int* pa)
//{
//	(*pa)++;
//
//
//}
//
//
//
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n",num);
//	Add(&num);
//	printf("%d\n",num);
//	Add(&num);
//	printf("%d\n",num);
//
//
//
//	return 0;
//}

//int main()
//{
//	int ret = strlen("abd");
//	printf("%d\n", ret);
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
#pragma comment(lib,"add.lib")
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}