#define _CRT_SECURE_NO_WARNINGS

//int main(void)
//{
//	char arr1[201] = { 0 };
//	scanf("%s", arr1);
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		char a = (char)arr1[i] + arr1[i + 1];
//		printf("%c",a);
//	}
//	char a2 = (char)arr1[len - 1] + arr1[0];
//	printf("%c",a2);
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char arr[30] = { 0 };
//	scanf("%s", arr);
//	int len = strlen(arr);
//	if (arr[0] >= '0' && arr[0] <= '9')
//	{
//		printf("no\n");
//		return 0;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		if ((arr[i] >= '0' && arr[i] <= '9') || (arr[i] >= 'A' && arr[i] <= 'Z')
//			|| (arr[i] >= 'a' && arr[i] <= 'z')||arr[i]=='_')
//		{
//			continue;
//		}
//		else
//		{
//			printf("no");
//			return 0;
//		}
//	}
//	printf("yes");
//	return 0;
//}
//
//
//int main()
//{
//    int a[10];
//    int i = 0, sum = 0, min = 10, max = 0;
//    double ave = 0;
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &a[i]);
//        if (max < a[i]) {
//            max = a[i];
//        }
//        if (min > a[i]) {
//            min = a[i];
//        }
//        sum = sum + a[i];
//    }
//    ave = (sum - max - min) / 8.0;
//    printf("%lf", ave);
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == 'A')
//		{
//			printf("T");
//		}
//		if (arr[i] == 'T')
//		{
//			printf("A");
//		}
//		if (arr[i] == 'C')
//		{
//			printf("G");
//		}
//		if (arr[i] == 'G')
//		{
//			printf("C");
//		}
//	}
//
//	return 0;
//}

//int main(void)
//{
//	char arr[40] = { 0 };
//	char p1 = 0;
//	char p2 = 0;
//	scanf("%s %c %c", &arr, &p1, &p2);
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == p1)
//		{
//			arr[i] = p2;
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}
#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	char* parr = arr1;
	int i = 0;
	while (~scanf("%c", parr))
	{
		if (*parr == '\n')
		{
			break;
		}
		if ((*parr >= 'a' && *parr < 'z') || (*parr >= 'A' && *parr < 'Z'))
		{
			arr2[i] = *parr + 1;
		}
		else if (*parr == 'z')
		{
			arr2[i] = 'a';
		}
		else if (*parr == 'Z')
		{
			arr2[i] = 'A';
		}
		else
		{
			arr2[i] = *parr;
		}
		i++;
	}
	int j = 0;
	for (j = 0; j < i; j++)
	{
		printf("%c", arr2[j]);
	}

	return 0;

}