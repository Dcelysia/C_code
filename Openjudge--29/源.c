#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	char p1 = 0;
//	char op[201] = { 0 };
//	int i = 0;
//	while (~scanf("%c", &p1))
//	{
//		if (p1 == '\n')
//		{
//			break;
//		}
//		if (p1 >= 'F' && p1 <= 'Z')
//		{
//			op[i] = p1 - 5;
//		}
//		else if (p1 >= 'A' && p1 <= 'E')
//		{
//			op[i] = p1 + 21;
//		}
//		else
//		{
//			op[i] = p1;
//		}
//		i++;
//	}
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		printf("%c", op[j]);
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	char arr[123] = { 0 };
	for (i = 0; i < 123; i++)
	{
		arr[i] = '*';
	}
	char ip1[101] = { 0 };
	char ip2[101] = { 0 };
	char op[101] = { 0 };
	char* pop=op;
	int arrps[123] = { 0 };
	scanf("%s", ip1);
	char* pip1 = ip1;
	scanf("%s", ip2);
	char* pip2 = ip2;
	scanf("%s", op);
	int lenop = strlen(op);
	int len = strlen(ip1);
	for (i = 0; i < len; i++)
	{
		if ((arr[*pip1] == '*')||(arr[*pip1]==*pip2))
		{
			arr[*pip1] = *pip2;
			pip1++;
			pip2++;
		}
		else
		{
			printf("Failed");
			return 0;
		}
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (arr[i] == '*')
		{
			printf("Failed");
			return 0;
		}
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		arrps[arr[i]]++;
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (arrps[i] >= 2)
		{
			printf("Failed");
			return 0;
		}
	}

	for (i = 0; i < lenop; i++)
	{
		printf("%c", arr[*pop]);
		pop++;
	}
	return 0;
}