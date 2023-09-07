#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

#include <stdlib.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (0==j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1&&j<i)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//			
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//    int count = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	if (a ==0)
//	{
//		a = 1;
//		if (c == 1)
//		{
//			count++;
//		}
//		if (d == 1)
//		{
//			count++;
//		}
//		if (d != 1)
//		{
//			count++;
//		}
//		if (count == 3)
//		{
//			printf("凶手是A");
//		}
//		a = 0;
//		count = 0;
//	}
//	if (b == 0)
//	{
//		b = 1;
//		if (a != 1)
//		{
//			count++;
//		}
//		if (d == 1)
//		{
//			count++;
//		}
//		if (d != 1)
//		{
//			count++;
//		}
//		if (count == 3)
//		{
//			printf("凶手是B");
//		}
//		b = 0;
//		count = 0;
//	}
//	if (c == 0)
//	{
//		c = 1;
//		if (a != 1)
//		{
//			count++;
//		}
//		if (c == 1)
//		{
//			count++;
//		}
//		if (d != 1)
//		{
//			count++;
//		}
//		if (count == 3)
//		{
//			printf("凶手是C");
//		}
//		c = 0;
//		count = 0;
//	}
//	if (d == 0)
//	{
//		d = 1;
//		if (a != 1)
//		{
//			count++;
//		}
//		if (c == 1)
//		{
//			count++;
//		}
//		if (d == 1)
//		{
//			count++;
//		}
//		if (count == 3)
//		{
//			printf("凶手是D");
//		}
//		d = 0;
//		count = 0;
//	}
//	
//	return 0;
//}
//函数指针
//void text(char* pr)
//{
//
//
//}
//int main()
//{
//	void (*p)(char*) = &text;
//	return 0;
//}
//void menu(void)
//{
//	printf("****************************\n");
//	printf("*****1.Add      2.Sub  *****\n");
//	printf("*****2.Mul      3.Div  *****\n");
//	printf("*******    0.exit    *******\n");
//	printf("****************************\n");
//}
//void cal(int (*p)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("结果是%d",p(x, y));
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int (*p1[5])(int,int) = {NULL,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d",&input);
//		if (input >= 1 && input <= 4)
//		{
//			switch (input)
//			{
//			case 1:
//				cal(Add);
//				break;
//			case 2:
//				cal(Sub);
//				break;
//			case 3:
//				cal(Mul);
//			case 4:
//				cal(Div);
//				break;
//			}
//		}
//		else if (input == 0)
//		{
//			printf(("退出\n"));
//		}
//		else
//		{
//			printf("输入错误,请重新输出\n");
//		}
//	} while (input);
//	return 0;
//}
//一个人从1990年1月1日开始，三天打渔两天晒网，随便输入一个日期，显示出它是在打渔还是在晒网
//int main(void)
//{
//	printf("请输入年份:");
//	int year = 0;
//	scanf("%d", &year);
//	printf("请输入月份:");
//	int month = 0;
//	int day = 0;
//	scanf("%d", &month);
//	printf("请输入日期:");
//	scanf("%d", &day);
//	int permonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int count = 0;
//	while (year > 1990)
//	{
//		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//		{
//			count += 366;
//			year--;

//		else,
//		{
//			count += 365;
//			year--;
//		}
//	}
//		while (month > 1)
//		{
//			count += permonth[month];
//			month--;
//		}
//		while (day >= 1)
//		{
//			count++;
//			day--;
//		}
//		if (1<=count % 5&&count%5<=3)
//		{
//			printf("他在打渔\n");
//		}
//		else
//		{
//			printf("他在晒网\n");
//		}
//	return 0;
//}
//void bubble_sort(int arr[10], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//
//	}
//}
//void print(int arr[10],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//int main(void)
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print(arr,sz);
//
//	return 0;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}
//void shengxu(void* e1, void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//int main(void)
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), shengxu);//把数组变成升序
//	print(arr, sz);
//	return 0;
////}
//struct stu
//{
//	char name[20];
//	int age;
//};
//#include <string.h>
//int sort_name(const void* e1, const void* e2)
//
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void Swap(char* e1, char* e2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		*e1++;
//		*e2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; i < sz - 1; j++)
//		{
//			if ((cmp)((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//		    }
//
//		}
//	}
//}
//int main(void)
//{
//	struct stu s[3] = { {"zhagnsan",28},{"lisi",20},{"wangwu",40}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), sort_name);
//	return 0;
//
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr1 = (int*)((int)arr + 1);
//	int* ptr2 = (int*)(&arr+1);
//	printf("%x,%x", *ptr1, ptr2[-1]);
//
//	return 0;
//}

//int main()
//{
//	int arr[3][2] = { (2,3),(4,5),(6,7) };
//	int* p = arr[0];
//	printf("%d", p[0]);
//	return 0;
//}
//void find_num(int arr[][3], int px, int py, int k)
//{
//	int x = 0;
//	int y = py-1;
//	while (x < px && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if(arr[x][y]==k)
//		{
//			printf("找到了\n");
//			printf("%d %d", x, y);
//			break;
//		}
//		else
//		{
//			printf("没找到\n");
//		}
//	}
//	
//}
//int main(void)
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//
//	find_num(arr, 3, 3, k);
//
//	return 0;
//}
//void string_left_rotate(char arr[], int k,int len)
//{
//	int i = 0;
//	for (i = 0; i < k;i++)
//	{
//		char tem = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j+1];
//		}
//		arr[len - 1] = tem;
//	}
//}
//void print(char arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//}
//#include <string.h>
//int main()
//{
//	char arr[10] = "ABCDEFG";
//	int len = strlen(arr);
//	print(arr, len);
//	string_left_rotate(arr, 2,len);
//	print(arr, len);
//	return 0;
//}
//int is_string_rotation(char* str1, char* str2)
//{
//	if (strlen(str1) != (strlen(str2)))
//	{
//		return 0;
//	}
//	strncat(str1, str1, 6);
//	int ret=strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return  1;
//	}
//
//}
//int main()
//{
//	char arr1[20] = "ABCDEF";
//	char arr2[] = "CDEFA";
//	int i=is_string_rotation(arr1, arr2);
//	if (i == 1)
//	{
//		printf("是翻转过来的\n");
//
//	}
//	else
//	{
//		printf("不是翻转得到的");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	char* p1 = (char*)&arr[0];
//	char* p2 = (char*)&arr[3];
//	int len = p1 - p2;
//	printf("%d\n", len);
//
//	return 0;
//}
//int main(void)
//{
//	char arr[] = "ABCDEF";
//	int len = sizeof(arr);//计算arr的大小
//	printf("%d\n", len);
//
//
//	return 0;
//
//}

//#include<string.h>
//void my_strcpy(char* s1, const char* s2)
//{
//	while (*s1++ = *s2++);
//}
//int my_strcmp(char* s1, char* s2)
//{
//	while (*s1++ && *s2++)
//	{
//		if (*s1 > *s2)
//		{
//			return 1;
//		}
//		else if (*s1 < *s2)
//		{
//			return -1;
//		}
//	}
//	if (*s1 == '\0' && *s2 == '\0')
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	char arr1[9] = "abcdef";
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}
//int main(void)
//{
//	char arr[30] = "abc@idn.yien";
//	char* ret =NULL;
//	char* str = "@.";
//	for (ret = strtok(arr, str); ret != NULL; ret = strtok(NULL, str))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//#include <errno.h>
//int main(void)
//{
//	FILE* pf = fopen("text.c", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//struct s
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	struct s sb = { 0 };
//	printf("%d\n", sizeof(sb));
//	return 0;
////}
//struct s
//{
//	char a;
//	int i;
//	double b;
//}s1,s2;
//struct text
//{
//	int i;
//	float g;
//	double o;
//}tex1;
//int main()
//{
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(tex1));
//
//	return 0;
//}
//这里包含位断，如果跨平台可能无法运行，需要优化
//struct s
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//}s;
//int main()
//{
//	printf("%d\n", sizeof(struct s));
//	struct s s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//
//	return 0;
//}
//enum color
//{
//	red,
//	yellow,
//	bule
//};
//int main()
//{
//	printf("%d\n", red);
//	printf("%d\n", yellow);
//	printf("%d\n", bule);
//
//	return 0;
//}
//union UN
//{
//	char i;
//	int z;
//};
//int main()
//{
//	union UN u;
//	printf("%p\n", &u);
//	printf("%p\n", &u.i);
//	printf("%p\n", &u.z);
//
//
//	return 0;
//}
//void Sys_check()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("小端存储");
//	}
//	else
//	{
//		printf("大端存储");
//	}
//
//}
//void Sys_check()
//{
//	union UN {
//
//		int i;
//		char a;
//
//	}u;
//	u.i = 1;
//	return u.a;
//	//返回1就是小端
//	//返回0就是大端
//
//}
//union UN
//{
//
//	char a[5];
//	int i;
//}u;
//int main()
//{
//	Sys_check();
//	printf("%d\n", sizeof(u));
//	return 0;
//
//}
#include <stdlib.h>
//int main()
//{
//	int* p=(int*)malloc(100000000000000000 * sizeof(int));
//	int i = 0;
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p = ((int*)malloc(10 * sizeof(int)));
//
//	int* pc = ((int*)calloc(sizeof(int), 10));
//
//
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* pr = (int*)realloc(p, 10 * sizeof(int));
//	return 0;
//}
//struct S
//{
//	int i;
//	int arr[];
//}s;
//int main()
//{
//	struct S* ps = (struct S*)malloc(10 * sizeof(struct S));
//	if (ps == NULL)
//		return 1;
//
//	ps->i = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}
/*truct S
{
	int i;
	int* arr;
}s;
int main()
{
	s.i = 10;
	s.arr = (int*)malloc(10 * sizeof(int));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		s.arr[i] = i;
	}
	free(s.arr);
	s.arr = NULL;
	return 0;
}*/
//#include <stdio.h>
//void foo(void)
//{
//	int a;
//	printf("%d\n", a);
//}
//void bar(void)
//{
//	int a = 42;
//}
//int main(void)
//{
//	bar();
//	foo();
//}
//#include <stdio.h>
//
//int main(void)
//{
//    int input = 0;
//    scanf("%d", &input);
//    int up = 0;
//    int down = 0;
//    if (input % 2 == 0)
//    {
//        up = input / 2;
//        down = input / 2;
//
//    }
//    else {
//
//        up = input / 2 + 1;
//        down = input / 2;
//
//    }
//    int i = 0;
//    int j = 0;
//    int left = 0;
//    int right = input - 1;
//    for (i = 0; i < up; i++)
//    {
//
//        for (j = 0; j < input; j++)
//        {
//            if (j == left || j == right)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//
//        }
//        left++; right--;
//        printf("\n");
//
//    }
//
//    for (i = 0; i < down; i++)
//    {
//        for (j = 0; j < down; j++)
//        {
//            if (j == left || j == right)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        left++; right--;
//        printf("\n");
//
//    }
//
//
//
//    return 0;
//}
//int main(void)
//{
//    int n = 0;
//    int arr[51] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &arr[0]);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            int tem = arr[i];
//            arr[i] = arr[i + 1];
//            arr[i + 1] = tem;
//        }
//
//    }
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//
//}
//int main(void)
//{
//	FILE* pr = fopen("D:\\C language1\\practice\\practice\\practice\\text.txt","r");//打开文件
//	if (pr == NULL)//判断文件是否被正常打开
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ret = fgetc(pr);
//	printf("%c\n", ret);
//	ret = fgetc(pr);
//	printf("%c\n", ret);
//	ret = fgetc(pr);
//	printf("%c\n", ret);
//	ret = fgetc(pr);
//	printf("%c\n", ret);
//	ret = fgetc(pr);
//	printf("%c\n", ret);
//	ret = fgetc(pr);
//	printf("%c\n", ret);
//	
//
//	//读写文件
//	fclose(pr);
//	pr = NULL;
//
//	return 0;
//}
//int main(void)
//{
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//
//
//	return 0;
//}
//int main(void)
//{
//	FILE* pr = fopen("text1.txt", "r");
//	if (pr == NULL)
//	{
//		perror("fopen");
//
//	}
//	char arr[10] = { 0 };
//	fgets(arr, 4, pr);
//	printf("%s\n", arr);
//	fgets(arr, 4, pr);
//	printf("%s\n", arr);
//	//fputs("abcdefg\n", pr);
//	//fputs("ghyeks\n",pr);
//	return 0;
//}
struct S
{
	char name[20];
	int n;
	float sc;
};
int main(void)
{
	struct S s = {0};

	FILE* pr = fopen("text2.txt", "r");
	if (NULL == pr)
	{
		perror("fopen");
		return 1;
	}
	fread(&s, sizeof(struct S), 1, pr);
	printf("%s %d %f", s.name, s.n, s.sc);

	//关闭文件
	fclose(pr);
	pr = NULL;
	return 0;
}