#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdlib.h>
using namespace std;
//int main(void)
//{
//	cout << "请输入一个成绩:";
//	int score = 0;
//	cin >> score;
//	cout << "您的分数为:" <<score<< endl;
//	if (score > 600)
//	{
//		cout << "恭喜你考上一本大学！！" << endl;
//	}
//	else
//	{
//		cout << "呵呵" << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//int main(void)
//{
//
//	//定义变量A，B，C分别表示小猪的重量
//	int A = 0, B = 0, C = 0;
//	//输出提示信息，让用户输入小猪A的重量
//	cout << "请输入A小猪的重量:";
//	//将用户输入的值赋值给变量A
//	cin >> A;
//	//输出提示信息，让用户输入小猪B的重量
//	cout << "请输入B小猪的重量:";
//	//将用户输入的值赋值给变量B
//	cin >> B;
//	//输出提示信息，让用户输入小猪C的重量
//	cout << "请输入C小猪的重量:";
//	//将用户输入的值赋值给变量C
//	cin >> C;
//	//定义变量max，表示最重的小猪的重量
//	int max = A > B ? A : B;
//	//比较max和C的大小，将最大值赋值给max
//	max = max > C ? max : C;
//	//根据max的值，输出最重的小猪的信息
//	if (max == A)
//	{
//		cout << "A小猪最重" << endl;
//	}
//	else if (max == B)
//	{
//		cout << "B小猪最重" << endl;
//	}
//	else if (max == C)
//	{
//		cout << "C小猪最重" << endl;
//	}
//	//暂停程序，让用户查看输出结果
//	system("pause");
//	return 0;
//}
//三目操作符的运用
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = a > b ? a : b;
//	cout << "c==" << c << endl;
//	system("pause");
//	return 0;
//}
//猜数字小游戏
//int main(void)
//{
//	//设置随机数种子
//	srand((unsigned int)time(NULL));
//	//生成一个1-100的随机数
//	int num = rand() % 100 + 1;
//	/*cout << num << endl;*/
//	//开始游戏
//	while (1)
//	{
//		//提示用户输入一个数字
//		cout << "请输入数字:";
//		int ip = 0;
//		cin >> ip;
//		//判断用户输入的数字
//		if (ip > num)
//		{
//			cout << "猜大了" << endl;
//		}
//		else if (ip < num)
//		{
//			cout << "猜小了" << endl;
//		}
//		else
//		{
//			cout << "恭喜你，猜对了！！" << endl;
//			break;
//		}
//	}
//	//暂停程序
//	system("pause");
//	return 0;
//}

//水仙花数
#include <math.h>
//int main(void)
//{
//	//循环遍历100到999的数字
//	for (int i = 100; i <= 999; i++)
//	{
//		//定义一个变量num，用来存储当前数字
//		int num = i;
//		//定义一个变量sum，用来存储当前数字的立方和
//		int sum = 0;
//		//循环遍历当前数字的每一位
//		while (num)
//		{
//			//定义一个变量n2，用来存储当前数字的个位
//			int n2 = num % 10;
//			//将当前数字的个位除以10
//			num /= 10;
//			//将当前数字的个位立方，并累加到sum中
//			sum += pow(n2, 3);
//		}
//		//如果sum等于当前数字，则输出当前数字
//		if (sum == i)
//		{
//			cout << sum << " ";
//		}
//	}
//	//暂停程序，等待用户输入
//	system("pause");
//	return 0;
//}
//拍桌子
//int main(void)
//{
//	// 循环输出1-100的数字
//	for (int i = 1; i <= 100; i++)
//	{
//		// 如果数字是7的倍数或者数字是7的倍数，则输出敲桌子
//		if ((i % 10 == 7) || (i / 10 == 7) || (i % 7 == 0))
//		{
//			cout << "敲桌子 ";
//		}
//		// 否则输出数字
//		else
//		{
//			cout << i << " ";
//		}
//	}
//	// 暂停程序
//	system("pause");
//	return 0;
//}
//嵌套循环
//int main(void)
//{
//	// 打印10行10列的星星
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			// 打印星星
//			cout << "* ";
//		}
//		// 换行
//		cout << endl;
//	}
//	// 暂停
//	system("pause");
//	return 0;
//}
