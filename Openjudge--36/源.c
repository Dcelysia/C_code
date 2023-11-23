#define _CRT_SECURE_NO_WARNINGS

//
//int main(void)
//{
//	int num[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 13; i++)
//	{
//		char tmp = 0;
//		scanf(" %c", &tmp);
//		if (tmp != '-') {
//			if (tmp == 'X')
//			{
//				num[9] = 10;
//			}
//			else
//			{
//				num[j] = tmp - '0';
//				j++;
//			}
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < 9; i++)
//	{
//		sum += num[i] * (i + 1);
//	}
//
//	int tmp = sum % 11;
//
//	if(num[9] == tmp)
//	{
//		printf("Right");
//	}
//	else
//	{
//		printf("%d-",num[0]);
//		for (i = 1; i <= 3; i++)
//		{
//			printf("%d",num[i]);
//		}
//		printf("-");
//		for (i = 4; i <= 8; i++)
//		{
//			printf("%d", num[i]);
//		}
//		printf("-");
//		if (tmp == 10)
//		{
//			printf("X");
//		}
//		else
//		{
//			printf("%d", tmp);
//
//		}
//
//	}
//
//	return 0;
//}
//
//#include <string.h>
//int main(void) {
//	int lena = 0, lenb = 0;
//	char a[256] = { 0 };
//	char b[256] = { 0 };
//	char al[512] = { 0 };
//	char bl[512] = { 0 };
//	scanf("%s", a);
//	scanf("%s", b);
//	strcpy(al, a);
//	strcpy(bl, b);
//	strcat(al, a);
//	strcat(bl, b);
//	lena = strlen(a);
//	lenb = strlen(b);
//	int j = 0, i = 0, k = 0;
//	int sum = 0;
//
//	int lenmin = lena > lenb ? lenb : lena;
//	for (i = 0; i < lena; i++)
//	{
//		for (j = 0; j < lenb; j++)
//		{
//			k = 0;
//			while (al[i + k] == bl[j + k]&&k<lenmin)
//			{
//				k++;
//			}
//			sum = sum > k ? sum : k;
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	int arr[1001] = { 0 };
	int i = 0;
	int n = 0;
	while (1)
	{
		char tmp = 0;
		scanf("%c", &tmp);
		if (tmp != '\n')
		{
			arr[i] = tmp - '0';
			i++;
			n++;
		}
		else
		{
			break;
		}
	}

	int num = 0;
	int sum = 0;
	num = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] == num)
		{
			sum++;
		}
		else
		{
			printf("%d%d", sum, num);
			sum = 1;
			num = arr[i];
		}
	}
	printf("%d%d", sum, num);
	return 0;
}