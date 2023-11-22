#define _CRT_SECURE_NO_WARNINGS

//char maxa[1001] = { 0 };
//char mina[1001] = { 0 };
//char ip1[20200] = { 0 };
//int main(void)
//{
//
//	int max = -1;
//	int min = 150;
//	gets(ip1);
//	char* ip = ip1;
//	int len = 0;
//	char* start = ip;
//	char* end = NULL;
//	int k = 0;
//
//	while (*ip != '\0')
//	{
//		if (*ip == ' ')
//		{
//			char* tmp = start;
//			end = ip;
//			if (len > max)
//			{
//
//				k = 0;
//				max = len;
//				while (start != end)
//				{
//					maxa[k] = *start;
//					start++;
//					k++;
//				}
//			}
//			if (len <min)
//			{
//				start = tmp;
//				k = 0;
//				min = len;
//				while (start != end)
//				{
//					mina[k] = *start;
//					start++;
//					k++;
//				}
//			}
//			while (*ip == ' ')
//			{
//				ip++;
//			}
//			start = ip;
//			len = 0;
//		}
//		else
//		{
//			len++;
//			ip++;
//		}
//	}
//	end = ip;
//	if (len > max)
//	{
//		k = 0;
//		max = len;
//		while (start != end)
//		{
//			maxa[k] = *start;
//			start++;
//			k++;
//		}
//	}
//	if (len < min)
//	{
//		k = 0;
//		min = len;
//		while (start != end)
//		{
//			mina[k] = *start;
//			start++;
//			k++;
//		}
//	}
//
//	printf("%s\n", maxa);
//	printf("%s\n", mina);
//	return 0;
//}
#include <stdio.h>
char arr[30000] = { 0 };
int My_strlen(char* ip)
{
	int len = 0;
	while (*ip != ' ' && *ip != '\0' && *ip != ',')
	{
		len++;
		ip++;
	}
	return len;
}
int main(void)
{
	gets(arr);
	int len = My_strlen(arr);
	char* start = arr;
	int max = -1;
	int min = 200;
	char amax[300] = { 0 };
	char amin[300] = { 0 };
	int i = 0;
	while (*start != '\0')
	{
		if (My_strlen(start) > max)
		{
			max = My_strlen(start);
			for (i = 0; i < My_strlen(start); i++)
			{
				amax[i] = *(start + i);
			}
		}
		if (My_strlen(start) <min)
		{
			min = My_strlen(start);
			for (i = 0; i < My_strlen(start); i++)
			{
				amin[i] = *(start + i);
			}
		}
		int go = My_strlen(start);
		start += go + 1;
	}
	printf("%s\n", amax);
	printf("%s\n", amin);
	return 0;
}