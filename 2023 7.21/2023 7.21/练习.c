#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//void print_table(int x)
//{
//	int i = 0;//����
//	int y = 0;//����
//	for (i = 1; i <= x; i++)
//	{
//		for (y = 1; y <=i; y++)
//		{
//			printf("%d*%d=%d ", i, y, i* y);
//		}
//		printf("\n");
//		
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��ӡ�˷��ھ���ĺ���
//	print_table(n);
//	return 0;
//}
int my_strlen(char* arr)
{
	int count = 0;
	while(*arr !='\0')
	{
		count++;
		arr++;
	}
	return count;
}
//void reverse_string(char* arr)//�ǵݹ鷽��
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	while (left < right)
//	{
//		char tem = 0;
//		tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//
//}
void reverse_string(char* arr)//�ݹ鷽��
{

}
int main()
{
	char arr[] ="abcdefg";
	reverse_string(arr);//�ߵ��������ַ�����˳��
	printf("%s\n", arr);
	return 0;
}