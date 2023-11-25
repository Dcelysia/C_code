#define _CRT_SECURE_NO_WARNINGS

//int cal(char* start, char* end)
//{
//	int len = 0;
//	while (start != end) {
//		len++;
//		start++;
//	}
//	return len;
//}
//char s[301] = { 0 };
//char s1[11] = { 0 };
//char s2[11] = { 0 };
//int main(void)
//{
//
//	char tmp = 0;
//	int i = 0;
//	int j = 0;
//	while (1)
//	{
//		char tmp = 0;
//	
//		scanf(" %c", &tmp);
//		if (tmp != ',')
//		{
//			s[j] = tmp;
//			j++;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//	j = 0;
//	while (1)
//	{
//		char tmp = 0;
//
//		scanf(" %c", &tmp);
//		if (tmp != ',')
//		{
//			s1[j] = tmp;
//			j++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	j = 0;
//	while (1)
//	{
//		char tmp = 0;
//
//		scanf("%c", &tmp);
//		if (tmp != ','&&tmp!='\n')
//		{
//			s2[j] = tmp;
//			j++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//
//	char* cs = s;
//	int ouput = -1;
//	char* cs1 = NULL;
//	char* cs2 = NULL;
//	char* tmp2 = NULL;
//	while (*cs != '\0')
//	{
//		if (*cs == s1[0])
//		{
//			int issame = 1;
//			for (i = 0; i < len1; i++)
//			{
//				if (*(cs + i) != s1[i])
//				{
//					issame = 0;
//					break;
//				}
//			}
//			if (issame == 1)
//			{
//				cs1 = cs;
//				cs += len1;
//				tmp2 = cs;
//				while (*tmp2 != '\0')
//				{
//
//					int issame = 1;
//					if (*tmp2 == s2[0]) {
//						for (i = 0; i < len2; i++)
//						{
//							if (*(tmp2 + i) != s2[i])
//							{
//								issame = 0;
//								break;
//							}
//						}
//						if (issame == 1)
//						{
//							cs2 = tmp2;
//							tmp2 += len2;
//
//							ouput = cal(cs1, cs2);
//						}
//					}
//					tmp2++;
//				}
//				if (ouput != -1)
//				{
//					printf("%d", ouput - 1 - len1 + 1);
//					return 0;
//				}
//			}
//		}
//		cs++;
//	}
//	printf("-1");
//
//
//	return 0;
//}
#include <stdio.h>
#include <string.h>
int Mystrlen(char* ps)
{
	int res = 0;
	while (*ps != ' ' && *ps != '\0')
	{
		res++;
		ps++;
	}
	return res;
}
int main(void)
{
	char s[501] = { 0 };
	gets(s);
	char* ps = s;
	while (*ps != '\0')
	{
		int len = Mystrlen(ps);
		for (int i = len - 1; i >= 0; i--)
		{
			printf("%c", ps[i]);
		}
		printf(" ");
		ps += len + 1;
	}


	return 0;
}