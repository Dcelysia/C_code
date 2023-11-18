#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char ip[60] = { 0 };
//	scanf("%s", ip);
//	int len = strlen(ip);
//	int i = 0;
//	//第一步  
//	for (i = 0; i < len; i++)
//	{
//		if (ip[i] >= 'a' && ip[i] <= 'z')
//		{
//			ip[i] = ip[i] - 32;
//		}
//		else if (ip[i] >= 'A' && ip[i] <= 'Z')
//		{
//			ip[i] = ip[i] + 32;
//		}
//	}
//	//第二部
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = ip[left];
//		ip[left] = ip[right];
//		ip[right] = tmp;
//		left++;
//		right--;
//	}
//	//第三步
//	for (i = 0; i < len; i++)
//	{
//		if (ip[i] >= 'a' && ip[i] <= 'w')
//		{
//			ip[i] += 3;
//		}
//		else if (ip[i] >= 'x' && ip[i] <= 'z')
//		{
//			ip[i] -= 23;
//		}
//		else if (ip[i] >= 'A' && ip[i] <= 'W')
//		{
//			ip[i] += 3;
//		}
//		else if (ip[i] >= 'X' && ip[i] <= 'Z')
//		{
//			ip[i]-=23;
//		}
//		
//	}
//	printf("%s", ip);
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	/*char arr1[101] = { 0 };*/
//	char pa = 0;
//	while (~scanf("%c", &pa))
//	{
//		if (pa == '\n')
//		{
//			break;
//		}
//		if (pa >= 'a' && pa <= 'z')
//		{
//			pa -= 32;
//		}
//		printf("%c", pa);
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	/*char arr1[101] = { 0 };*/
//	char pa = 0;
//	while (~scanf("%c", &pa))
//	{
//		if (pa == '\n')
//		{
//			break;
//		}
//		if (pa >= 'a' && pa <= 'z')
//		{
//			pa -= 32;
//		}
//		else if (pa >= 'A' && pa <= 'Z')
//		{
//			pa += 32;
//		}
//
//		printf("%c", pa);
//	}
//
//	return 0;
//////}
////#include <stdio.h>
////#include <string.h>
//
//int main(void)
//{
//	char ip[100][30] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &ip[i][0]);
//		int len = strlen(&ip[i]);
//		if (ip[i][0] >= 'a' && ip[i][0] <= 'z')
//		{
//			ip[i][0] -= 32;
//		}
//		for (j = 1; j < len; j++)
//		{
//			if (ip[i][j] >= 'A' && ip[i][j] <= 'Z')
//			{
//				ip[i][j] += 32;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", ip[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char a[100], b[100];
//    gets(a);
//    gets(b);
//    int x = strlen(a);
//    int y = strlen(b);
//     
//    for (int i = 0; i <= x - 1; i++)
//    {
//        if (a[i] >= 'a' && a[i] <= 'z')
//        {
//            a[i] = a[i] - 32;
//        }
//    }
//    for (int i = 0; i <= y - 1; i++)
//    {
//        if (b[i] >= 'a' && b[i] <= 'z')
//        {
//            b[i] = b[i] - 32;
//        }
//    }
//    if (strcmp(a, b) < 0)
//    {
//        printf("<");
//    }
//    else if (strcmp(a, b) > 0)
//    {
//        printf(">");
//    }
//    else
//    {
//        printf("=");
//    }
//    return 0;
//}
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[1000] = { 0 };
	char b[1000] = { 0 };
	gets(a);
	gets(b);
	int lena = strlen(a);
	int lenb = strlen(b);
	int haxia[123] = { 0 };
	int haxib[123] = { 0 };
	int i = 0;
	for (i = 0; i < lena; i++)
	{
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
	}

	for (i = 0; i < lenb; i++)
	{
		if (b[i] >= 'a' && a[i] <= 'z')
		{
			b[i] = b[i] - 32;
		}
	}

	for (i = 0; i < lena; i++)
	{
		if (a[i] == ' ')
		{
			continue;
		}
		else
		{
			haxia[a[i]]++;
		}

	}

	for (i = 0; i < lenb; i++)
	{
		if (b[i] == ' ')
		{
			continue;
		}
		haxib[b[i]]++;
	}
	for (i = 'A'; i <='Z'; i++)
	{
		if (haxia[i] != haxib[i])
		{
			printf("NO\n");
			return 0;
		 }
	}
	printf("YES\n");
	return 0;
}