#include <stdio.h>
//int main()
//{
//	int a = 13;
//	int b = 1 << 4;
//	a = a | b;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 0;
//	printf("%d\n", !a);
//	printf("%d\n", !b);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	a = -a;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = ~a;
//	printf("%d\n", b);
//
//	return 0;
//}
int main()
{
	int a = 13;
	a = a | (1 << 4);
	a = a & ~(1 << 4);
	printf("%d\n", a);
	return 0;
}