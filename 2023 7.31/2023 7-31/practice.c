#include <stdio.h>
//ָ������ǿ����е�Ԫ�ظ���
//��������ָ��Ҫָ��ͬһ�ռ�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}
//����Ǽ�����ԭ��
//int my_strlen(char* a)
//{
//	int count = 0;
//	while (*a != '\0')
//	{
//		count++;
//		a++;
//	}
//	return count;
//}
//�������ָ��ԭ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}
//������ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p<==>%p\n", &arr[i], p + i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%p %p", pa, ppa);
//	return 0;
//}
//ָ������
//int main()
//{
//	int* prr[5];
//	char* arr[5];
//	return 0;
//}
//�ṹ��
//struct s
//{
//	char name[20];
//	int count;
//	char id[20];
//
//};
//struct stu
//{
//	struct s b;
//	int name;
//	char id[20];
//};
//void print(struct stu t)
//{
//	printf("%s %d %s %d %s\n", t.b.name, t.b.count, t.b.id, t.name, t.id);
//}
//void print2(struct stu* pa)
//{
//	printf("%s %d %s %d %s\n", (*pa).b.name, (*pa).b.count, (*pa).b.id, (*pa).name, (*pa).id);
//
//}
//int main()
//{
//	struct stu c= { {"Elysia",20,"2023 7-31"},20,"Elysian" };
//	printf("%s\n", c.b.name);
//	printf("%d\n", c.name);
//	struct stu* pa = &c;
//	printf("%d\n", (*pa).b.count);
//	printf("%s\n", pa->b.name);
//	print(c);
//	print2(&c);
//
//	return 0;
//} 
