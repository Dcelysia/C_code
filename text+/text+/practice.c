#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//struct S
//{
//	char name[20];
//	int n;
//	float pf;
//};
//int main(void)
//{
//	struct S s = {"Alysia",18,177.5 };
//	char chg[30] = { 0 };
//	sprintf(&chg, "%s %d %f", s.name, s.n, s.pf);
//	printf("%s\n", chg);
//	sscanf(chg, "%s %d %f", s.name, &(s.n), &(s.pf));
//	printf("%s\n", s.name);
//	printf("%d\n", s.n);
//	printf("%f\n", s.pf);
//
//	return 0;
////}
//int main(void)
//{
//	FILE* pr = fopen("text.txt", "r");
//	if (NULL == pr)
//	{
//
//		perror("fopen");
//	}
//	int ch = fgetc(pr);
//	printf("%c ", ch);
//	fseek(pr, 2, SEEK_CUR);
//	ch = fgetc(pr);
//	printf("%c ", ch);
//	ch = fgetc(pr);
//	printf("%c ", ch);
//	int num=ftell(pr);//文件现在所处位置
//	printf("%d ", num);
//	rewind(pr);
//	ch = fgetc(pr);
//	printf("%c ", ch);
//	free(pr);
//	pr = NULL;
//	return 0;
////}
//int main(void)
//{
//	FILE* pr = fopen("alphabet.txt", "w");
//	if (NULL == pr)
//	{
//		ferror("fopen");
//	}
//	char c;
//	for (c = 'A'; c < 'Z'; c++)
//	{
//		fputc(c, pr);
//	}
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}
//int main()
//{
//    FILE* pFile;
//    char c;
//
//    pFile = fopen("alphabet.txt", "w");
//    if (pFile != NULL) {
//
//        for (c = 'A'; c <= 'Z'; c++)
//            fputc(c, pFile);
//
//        fclose(pFile);
//    }
//    return 0;
//}

//int main(void)
//{
//	FILE* pf1 = fopen("text.txt", "r");
//	FILE* pf2 = fopen("text2.txt", "w");
//	if (NULL == pf1 || NULL == pf2)
//	{
//		ferror("fopen");
//	}
//	int c;
//	while ((c = fgetc(pf1)) != EOF)
//	{
//		fputc(c, pf2);
//	}
//	if (feof(pf1))
//	{
//		printf("文件正常结束");
//	}
//	else if (ferror(pf1))
//	{
//		printf("文件遇到错误，终止访问");
//	}
//	fclose(pf1);
//	pf1 = NULL;
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}
//int main(void)
//{
//	printf("%s\n", __FILE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __FUNCTION__);
//
//	return 0;
// 
//int main()
////{
//	char c;
//	for (c = 'A'; c <= 'Z'; c++) putchar(c);
//
//	return 0;
//}
//int main(void)
//{
//	//打开文件
//	FILE* pr = fopen("log.txt", "w");
//	if (NULL == pr)
//	{
//		ferror("fopen");
//	}
//	//再写入数据
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	fprintf(pr, "%s,%s,%s,%d,%s,%d\n", __FILE__, __DATE__, __TIME__, __LINE__, __FUNCTION__,i);
//
//	//}
//	printf("%d\n", __STDC__);
//
//
//	//先关闭文件
//	fclose(pr);
//	pr = NULL;
//	return 0;
//}
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main(void)
//{
//	int ret = MAX(101, 100);
//	printf("%d\n", ret);
//	return 0;
//}
//#define CRT(X,Y) X##Y
//int main(void)
//{
//	int class101 = 100;
//	printf("%d\n", CRT(class, 101));
//	return 0;
//}
//#define print(X,Y,Z)\
//         printf("the value of "#X" is "#Y"\n",Z);
//int main(void)
//{
//
//	int x = 100;
//	print(x, %d, 100);
//	return 0;
//}
//#define print(x) int ret=((x)*(x));\
//                  printf("%d\n",ret);
//
//int main(void)
//{
//    print(4)     
//    return 0;
//}
//#define M 100;
//int main(void)
//{
//	int a = M;
//#undef M
//	printf("%d\n", M);
//	return 0;
//}
//#define PRINT
//int main(void)
//{
//#ifdef PRINT
//	printf("hehe\n");
//#endif
//
//	return 0;
//}
//#include <stdio.h>
//#include <Windows.h>
//
//int main()
//{
//    float x, y, a;
//    for (y = 1.5; y > -1.5; y -= 0.1)
//    {
//        for (x = -1.5; x < 1.5; x += 0.05)
//        {
//            a = x * x + y * y - 1;
//            putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : ' ');
//        }
//        system("color 0c");
//        putchar('\n');
//    }
//    return 0;
//}
//int main(void)
//{
//#if 0
//	printf("hehe\n");
//#elif 1==2
//	printf("haha\n");
//#else 
//	printf("lulu\n");
//#endif
//#ifndef HEEE
//	printf("lala\n");
//#endif
//	return 0;
//}
//EOF
//#ifndef __TEXT_H__
//#define __TEXT_H__
//
//struct S
//{
//	char a;
//	int n;
//};
//int main(void)
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//
//#endif
//#include <ctype.h>
//
//int my_isdigit(const char* p)
//{
//	int n = 0;
//	if (NULL == p)
//	{
//		
//		return 0;
//	}
//	if ('\0' == *p)
//	{
//		return 0;
//	}
//	while (isspace(*p))
//	{
//		p++;
//	}
//	while ((*p)!='\0')
//	{
//		n = n * 10 + *p - '0';
//		p++;
//	 }
//	return n;
//	
//}
//
//int main(void)
//{
//	const char* a = "      1234";
//	int i= my_isdigit(a);
//	printf("%d\n", i);
//
//	return 0;
//}
//void find_printf(int arr[], int sz)
//{
//	int i = 0;
//	int arr2[10] = { 0 };
//	for (i = 0; i < sz; i++)
//	{
//		switch (arr[i])
//		{
//		case 0:
//			arr2[0] += 1;
//			break;
//		case 1:
//			arr2[1] += 1;
//			break;
//		case 2:
//			arr2[2] += 1;
//			break;
//		case 3:
//			arr2[3] += 1;
//			break;
//		case 4:
//			arr2[4] += 1;
//			break;
//		case 5:
//			arr2[5] += 1;
//			break;
//		case 6:
//			arr2[6] += 1;
//			break;
//		case 7:
//			arr2[7] += 1;
//			break;
//		case 8:
//			arr2[8] += 1;
//			break;
//		case 9:
//			arr2[9]+=1;
//			break;
//			
//		}
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr2[i] == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	find_printf(arr, sz);//找出没有重复的数组且打印出来
//	return 0;
//}

//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//#define OFFSETOF(struct_name,name) (int)&(((struct_name*)0)->name)
//int main(void)
//{
//	printf("%d\n", OFFSETOF(struct A, a));
//	printf("%d\n", OFFSETOF(struct A, b));
//	printf("%d\n", OFFSETOF(struct A, c));
//	printf("%d\n", OFFSETOF(struct A, d));
//
//	return 0;
//}
//int main(void)
//{
//    int input = 0;
//    scanf("%d", &input);
//    int n = 0;
//    int sum = 0;
//    int zero = 0;
//    while (input / 10)
//    {
//        n = input % 10;
//        if (0 == n)
//        {
//            zero++;
//        }
//        sum = sum * 10 + n;
//        input = input / 10;
//
//
//
//    }
//    n = input % 10;
//    if (0 == n)
//    {
//        zero++;
//    }
//    sum = sum * 10 + n;
//    int i = 0;
//    for (i = 0; i < zero; i++)
//    {
//        printf("%d", 0);
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//int main(void)
//{
//    char input = 0;
//    while ((scanf("%c", &input)) != EOF)
//    {
//        if ('\n'==input)
//        {
//            input = 0;
//            continue;
//        }
//        char output = input + ' ';
//        printf("%c\n",output);
//
//    }
//    //
//    //char a = 0;
//    //a = getchar();
//    //putchar(a + 32);
//
//    return 0;
//}-=-


//int main(void)
//{
//	int input = 0;
//
//	while (scanf("%d", &input) != EOF)
//	{
//		if (0 == input)
//		{
//			return 1;
//
//		}
//
//		int A_n = 1;//母牛的数量
//		int a_n = 0;//小牛的数量
//		int i = 0;
//		for (i = 1; i <= input; i++)
//		{
//			a_n += A_n;
//			if (0 == i % 4)
//			{
//				A_n+=A_n;
//			}
//		}
//		printf("%d\n", a_n);
//	}
//	//if (0 == input)
//	//{
//	//	return 1;
//
//	//}
//
//	//int A_n = 1;//母牛的数量
//	//int a_n = 0;//小牛的数量
//	//int i = 0;
//	//for (i = 1; i <= input; i++)
//	//{
//	//	a_n += A_n;
//	//	if (0 == i % 4)
//	//	{
//	//		A_n++;
//	//	}
//	//}
//	return 0;
//}
//int main(void)
//{
//	int input = 0;
//	scanf("%d", &input);
//	return 0;
//}
//int main(void)
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    int tem = a;
//    a = b;
//    b = a;
//    printf("a=%d,b=%d\n", a, b);
//
//    return 0;
//}
//#include <math.h>
//int main(void)
//{
//    int i = 0;
//    int j = 0;
//
//    for (i = 9999; i < 100000; i++)
//
//    {
//        int sum = 0;
//        
//        for (j = 1; j <= 4; j++)
//        {
//            int num1 = i;
//            int num = pow(10, j);
//            int num2 = num1 %num ;
//            num1 /= num;            sum = sum + num1 * num2;
//
//        }
//        if (i == sum)
//        {
//            printf("%d ", i);
//        }
//
//    }
//    return 0;
//}
int main(void)
{
	int a = 02;
	printf("%d ", a);
	return 0;
}