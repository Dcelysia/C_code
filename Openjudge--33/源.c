#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<ctype.h>
//char arr1[10000][51] = { 0 };
//char arr2[10000][51] = { 0 };
//int main(void)
//{
//	char email[51] = { 0 };
//	gets(email);
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	char a1[51] = { 0 };
//	char a2[51] = { 0 };
//	char a3[51] = { 0 };
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", a1);
//		scanf("%s", a2);
//		scanf("%s", a3);
//		if (strcmp(a3, email) == 0)
//		{
//			for (int j = 0; j < strlen(a2); j++)
//			{
//				if (a2[j] >= 'A' && a2[j] <= 'Z')
//				{
//					a2[j] += 32;
//				}
//				else if (a2[j] >= 'a' && a2[j] <= 'z')
//				{
//					a2[j] -= 32;
//				}
//			}
//			for (int j = 0; j < strlen(a1); j++)
//			{
//				arr1[k][j] = a1[j];
//			}
//			for (int j = 0; j < strlen(a2); j++)
//			{
//				arr2[k][j] = a2[j];
//			}
//			k++;
//			sum = 1;
//		}
//	}
//	if (sum == 0)
//	{
//		printf("empty");
//	}
//	else
//	{
//		for (i = 0; i < k; i++)
//		{
//			printf("%s %s\n", arr1[i], arr2[i]);
//		}
//	}
//	return 0;
//}

//int main(void)
//{
//	char arr[200] = "fja$$$$";
//	int arr1 = strlen(arr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char ip[201] = { 0 };
//	char result[201] = { 0 };
//	gets(ip);
//	int i = 0;
//	int n = 0;
//	for (i = 0; i < strlen(ip); i++)
//	{
//		if (ip[i] == ' ' && ip[i - 1] == ' ')
//		{
//			continue;
//		}
//		result[n] = ip[i];
//		n++;
//	}
//	printf("%s", result);
//	return 0;
//}
#include <stdio.h>
#include <string.h>
int main(void)
{
	char arr[1001] = { 0 };
	gets(arr);
	char* ip =arr;
	int result[1000] = { 0 };
	int n = 0;
	int k = 0;
	while (*ip != '\0')
	{
		if (*ip == ' ')
		{
			while (*ip ==' ')
			{
				ip++;
			}
			result[n] = k;
			k = 0;
			n++;
		}
		else
		{
			k++;
			ip++;
		}

	}
	result[n] = k;
	k = 0;
	n++;
	printf("%d", result[0]);
	for (int i = 1; i < n; i++)
	{
		printf(",%d", result[i]);
	}
	return 0;
}