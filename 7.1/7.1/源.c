#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("%d\n", a);
//	printf("%d\n", b);
// 
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//
//
//	return 0;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a ||b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 8;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//
//	return 0;
//}
//
//void text()
//{
//	static int a=0;
//	
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		text();
//		i++;
//	}
//
//
//	return 0;
//}
//extern int a;
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}

//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	char b = "c";
//	printf("%p\n", &a);
//	int* pc = &a;
//	char* d = &b;
//	printf("%p\n", d);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//
//
//	return 0;
//}
//
//int main(void)
//{

//	return 0;
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//
//};
//
//int main(void)
//{
//	struct stu s ={ "ÕÅÈý", 18, 98.5 };
//	struct stu* pa = &s;
//	printf("%s %d %lf\n", (*pa).name, (*pa).age, (*pa).score);
//	printf("%s %d %lf\n",pa->name,pa->age,pa->score);
//
//	return 0;
//}
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int c = a > b ? a : b;
//	printf("%d\n", c);
//	return 0;
//}


int Max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;

}

int main(void)
{
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	int max = Max(a, b);
	printf("%d", max);

	return 0;
}