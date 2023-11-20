#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h> 
//int main(void)
//{
//	char s[200] = { 0 };
//	char a[200] = { 0 };
//	char b[200] = { 0 };
//	gets(s);
//	gets(a);
//	gets(b);
//	
//	char* tmp = s;
//	int len = 0;
//	int lena = strlen(a);
//	int lenb = strlen(b);
//	while (*tmp != '\0')
//	{
//		len++;
//		tmp++;
//	}
//
//	for (int i = 0; i < 10000; i++)
//	{
//		char* issame = strstr(s, a);
//		if (issame != NULL)
//		{
//			for (int i = 0; i < lenb; i++)
//			{
//				*issame = b[i];
//				issame++;
//			}
//			for (int i = 0; i < lena-lenb; i++)
//			{
//				*issame ='*';
//				issame++;
//			}
//		}
//	}
//
//
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] != '*')
//		{
//			printf("%c", s[i]);
//		}
//	}
//
//	return 0;
//}

//int main(void)
//{
//	char a[200] = { 0 };
//	gets(a);
//	int len = strlen(a);
//
//	return 0;
//}	
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[200] = { 0 };
	char a[101] = { 0 };
	char b[101] = { 0 };
	char result[200] = { 0 };
	gets(str);
	scanf("%s", a);
	scanf("%s", b);
	int len1 = strlen(str);
	int i = 0, j = 0;
	int ids[250] = { 0 };
	int n = 0;
	int m = 0;
	int k = 0;
	memset(ids, -1,sizeof(ids));
	while (n < len1)
	{
		if (str[n] == a[m] && (str[n - m-1] == ' ' || n - m == 0))
		{
			n++; m++;
			if (m == strlen(a) && str[n] == ' ' || str[n] == '\0')
			{
				ids[k] = n - m;
				k++;
			}
		}
		else
		{
			n = n - m + 1;
			m = 0;
		}
	}
	k = 0;
	n = 0; m = 0;
	while (i < len1)
	{
		if (i != ids[k])
		{
			result[n] = str[i];
			n++;
			i++;
		}
		else
		{
			for (j = 0; j < strlen(b); j++,n++)
			{
				result[n] = b[j];
			}
			i += strlen(a);
			k++;
		}
	}
	for (int l = 0; l < strlen(result); l++)
	{
		printf("%c", result[l]);
	}


	return 0;
}