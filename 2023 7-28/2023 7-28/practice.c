#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", *pa);
//	return 0;
//}

//int main()
//{
//	int a =(int) 2.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 3;
//	if (a && b)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("%d\n%d\n%d\n%d\n ", a, b, c, d);
//	printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = (a = c + 3, b = a + 4, c = b - 6);
//	printf("%d\n", d);
//	return 0;
//}

struct Book
{
	char name[20];
	char id[20];
	int price;
};


int main()
{
	struct Book b = { "Elysia","2023 7.28",55 };
	struct Book* pb = &b;
	//printf("书名=%s\n", b.name);
	//printf("书号=%s\n", b.id);
	//printf("价格=%d\n", b.price);
	printf("书名=%s\n", pb->name);
	printf("书号=%s\n", pb->id);
	printf("价格=%d\n", pb->price);
	return 0;
}