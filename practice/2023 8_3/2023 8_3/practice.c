#include <stdio.h>

//int main()
//{
//	int a = 5;
//	int c = ++a;
//	int b;
//	b = a++, ++c, c++, a++;
//	b += a++ + c;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
// ����һ�������⣬���ܲ⸺��
//int numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n /= 2;
//
//	}
//	return count;
//
//}
//int numberof1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n>>i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//
//
//}
////�ж�һ�����ǲ���2��n�η�
////�����ж�n&(n-1)�ǲ���0
//int main()
//{
//
//	int n = -1;
//	int ret = numberof1(n);//����������м���1�ĺ���
//	printf("%d\n", ret);
//	return 0;
//}
int main()
{
	int n = 15;
	int i = 0;
	for (i = 31; 1 <= 1;i -= 2)
	{
		printf("%d ",(n>>i)&1);
	}

	return 0;
}