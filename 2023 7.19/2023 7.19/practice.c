#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\n')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//
//	int main()
//	{
//		char arr[] = "hello";
//		printf("%d\n", my_strlen(arr));
//		return 0;
//	}
//int multiply(int input)
//{
//	if (input >= 1)
//		return input * multiply(input - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int output = multiply(input);
//	printf("%d",output);
//
//	return 0;
//}
int count = 0;
int Fac(int input)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 3;
	//	if (3==input)
	//	{
	//		count++;
	//}
	//	if (input > 2)
	//	{
	//		return Fac(input - 1) + Fac(input - 2);
	//	}
	//	else
	//	{
	//		return 1;
	//	}
	if (input <= 2)
	{
		return 1;
	}
	else
	{
		while (i <= input)
		{
			c = a + b;
			int d = 0;
			d = c;
			a = b;
			b = d;
			i++;

		}
		return c;
	}
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	int c=Fac(input);
	printf("%d\n",c);
	printf("%d\n", count);
	return 0;
}