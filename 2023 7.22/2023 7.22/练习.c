#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//void reverse_string(char* arr)//�ݹ鷽��
//{
//	char tem = 0;	
//	int len = strlen(arr);
//	tem = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	*(arr + len - 1) = tem;
// 
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);//�ߵ��������ַ�����˳��
//	printf("%s\n", arr);
//	return 0;
//}
//int Digitsum(int x)
//{
//	if (x > 9)
//	{
//		return Digitsum(x / 10) + x% 10;
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	int tem = 1729;
//	int a=Digitsum(tem);//��tem�е�ֵ���1 7 2 9�����1+7+2+9�ĺ���
//	printf("%d\n", a);
//
//	return 0;
//}
double ditgitsum(int n, int k)
{
	if (k >= 1)
	{
		return n * ditgitsum(n, k - 1);
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / (ditgitsum(n, -k));
	}

}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double input = ditgitsum(n,k);//�������n��k�η��ķ���
	printf("%lf", input);

	return 0;
}