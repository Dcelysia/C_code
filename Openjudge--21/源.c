#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char ip1[201] = { 0 };
//	char ip2[201] = { 0 };
//	scanf("%s", ip1);
//	scanf("%s", ip2);
//	int len1 = strlen(ip1);
//	int len2 = strlen(ip2);
//	int arr1[201] = { 0 };
//	int arr2[201] = { 0 };
//	char* f1 = ip1;
//	char* f2 = ip2;
//	int n1 = 201 - len1;
//	int n2 = 201 - len2;
//	while (*f1 != '\0')
//	{
//		arr1[n1] = *f1-'0';
//		f1++;
//		n1++;
//	}
//	while (*f2 != '\0')
//	{
//		arr2[n2] = *f2 - '0';
//		f2++;
//		n2++;
//	}
//
//	int i = 0;
//	n1 = 200;
//	n2 = 200;
//	int arr3[201] = { 0 };
//	for (i = 0; i < len1; i++)
//	{
//		if (arr1[n1] - arr2[n2] < 0)
//		{
//			arr1[n1 - 1] -= 1;
//			arr1[n1] += 10;
//		}
//		arr3[n1] = arr1[n1] - arr2[n2];
//		n1--;
//		n2--;
//	}
//	int if0 = 0;
//	for (i = 0; i < 201; i++)
//	{
//		if (arr3[i] != 0 && if0 == 0)
//		{
//			if0 = 1;
//		}
//		if (if0 == 1)
//		{
//			printf("%d", arr3[i]);
//		}
//   }
//	return 0;
//}
//int main(void)
//{
//	int ip = 0;
//	int i = 0;
//	for()
//	return 0;
//}
