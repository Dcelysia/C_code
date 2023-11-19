#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	char s1[205] = { 0 };
//	char s2[205] = { 0 };
//	scanf("%s", s1);
//	scanf("%s", s2);
//	char* isbaohhan1 = strstr(s2, s1);
//	char* isbaohhan2 = strstr(s1, s2);
//	if (isbaohhan1 != NULL)
//	{
//		printf("%s is substring of %s", s1, s2);
//	}
//	else if (isbaohhan2 != NULL)
//	{
//		printf("%s is substring of %s", s2, s1);
//	}
//	else
//	{
//		printf("No substring\n");
//	}
//	return 0;
//}
//int findsame(char* s1, char* s2, char* zhuchuan)
//{
//	char same = strstr(s1, s2);
//
//}
// 
// 
// 
//int main(void)
//{
//	char s1[200] = { 0 };
//	char s2[200] = { 0 };
//	scanf("%s", s1);
//	scanf("%s", s2);
//	char* zhuchuan = s1;
//	findsame(s1, s2, zhuchuan);
//
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	char s1[31] = { 0 };
//	char s2[31] = { 0 };
//	scanf("%s %s", s1, s2);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len1; i++)
//	{
//		char* issame = strstr(s1, s2);
//		if (issame != NULL)
//		{
//			printf("true");
//			return 0;
//		}
//		char tmp = s1[0];
//		for (j = 0; j < len1 - 1; j++)
//		{
//			s1[j] = s1[j+1];
//		}
//		s1[len1-1] = tmp;
//	}
//	for (i = 0; i < len2; i++)
//	{
//		char* issame = strstr(s2, s1);
//		if (issame != NULL)
//		{
//			printf("true");
//			return 0;
//		}
//		char tmp = s2[0];
//		for (j = 0; j < len2 - 1; j++)
//		{
//			s2[j] = s2[j + 1];
//		}
//		s2[len2 - 1] = tmp;
//	}
//
//
//	printf("false");
//
//
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char s1[32] = { 0 };
//	scanf("%s", s1);
//	int len = strlen(s1);
//	if (s1[len - 1] == 'r' && s1[len - 2] == 'e')
//	{
//		s1[len - 2] = '\0';
//	}
//	if (s1[len - 1] == 'y' && s1[len - 2] == 'l')
//	{
//		s1[len - 2] = '\0';
//	}
//	if (s1[len-3]=='i'&&s1[len - 1] == 'g' && s1[len - 2] == 'n')
//	{
//		s1[len - 3] = '\0';
//	}
//	printf("%s", s1);
//	return 0;
//}