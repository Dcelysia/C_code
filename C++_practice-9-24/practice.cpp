#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdlib.h>
using namespace std;
//int main(void)
//{
//	cout << "������һ���ɼ�:";
//	int score = 0;
//	cin >> score;
//	cout << "���ķ���Ϊ:" <<score<< endl;
//	if (score > 600)
//	{
//		cout << "��ϲ�㿼��һ����ѧ����" << endl;
//	}
//	else
//	{
//		cout << "�Ǻ�" << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//int main(void)
//{
//
//	//�������A��B��C�ֱ��ʾС��������
//	int A = 0, B = 0, C = 0;
//	//�����ʾ��Ϣ�����û�����С��A������
//	cout << "������AС��������:";
//	//���û������ֵ��ֵ������A
//	cin >> A;
//	//�����ʾ��Ϣ�����û�����С��B������
//	cout << "������BС��������:";
//	//���û������ֵ��ֵ������B
//	cin >> B;
//	//�����ʾ��Ϣ�����û�����С��C������
//	cout << "������CС��������:";
//	//���û������ֵ��ֵ������C
//	cin >> C;
//	//�������max����ʾ���ص�С��������
//	int max = A > B ? A : B;
//	//�Ƚ�max��C�Ĵ�С�������ֵ��ֵ��max
//	max = max > C ? max : C;
//	//����max��ֵ��������ص�С������Ϣ
//	if (max == A)
//	{
//		cout << "AС������" << endl;
//	}
//	else if (max == B)
//	{
//		cout << "BС������" << endl;
//	}
//	else if (max == C)
//	{
//		cout << "CС������" << endl;
//	}
//	//��ͣ�������û��鿴������
//	system("pause");
//	return 0;
//}
//��Ŀ������������
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = a > b ? a : b;
//	cout << "c==" << c << endl;
//	system("pause");
//	return 0;
//}
//������С��Ϸ
//int main(void)
//{
//	//�������������
//	srand((unsigned int)time(NULL));
//	//����һ��1-100�������
//	int num = rand() % 100 + 1;
//	/*cout << num << endl;*/
//	//��ʼ��Ϸ
//	while (1)
//	{
//		//��ʾ�û�����һ������
//		cout << "����������:";
//		int ip = 0;
//		cin >> ip;
//		//�ж��û����������
//		if (ip > num)
//		{
//			cout << "�´���" << endl;
//		}
//		else if (ip < num)
//		{
//			cout << "��С��" << endl;
//		}
//		else
//		{
//			cout << "��ϲ�㣬�¶��ˣ���" << endl;
//			break;
//		}
//	}
//	//��ͣ����
//	system("pause");
//	return 0;
//}

//ˮ�ɻ���
#include <math.h>
//int main(void)
//{
//	//ѭ������100��999������
//	for (int i = 100; i <= 999; i++)
//	{
//		//����һ������num�������洢��ǰ����
//		int num = i;
//		//����һ������sum�������洢��ǰ���ֵ�������
//		int sum = 0;
//		//ѭ��������ǰ���ֵ�ÿһλ
//		while (num)
//		{
//			//����һ������n2�������洢��ǰ���ֵĸ�λ
//			int n2 = num % 10;
//			//����ǰ���ֵĸ�λ����10
//			num /= 10;
//			//����ǰ���ֵĸ�λ���������ۼӵ�sum��
//			sum += pow(n2, 3);
//		}
//		//���sum���ڵ�ǰ���֣��������ǰ����
//		if (sum == i)
//		{
//			cout << sum << " ";
//		}
//	}
//	//��ͣ���򣬵ȴ��û�����
//	system("pause");
//	return 0;
//}
//������
//int main(void)
//{
//	// ѭ�����1-100������
//	for (int i = 1; i <= 100; i++)
//	{
//		// ���������7�ı�������������7�ı����������������
//		if ((i % 10 == 7) || (i / 10 == 7) || (i % 7 == 0))
//		{
//			cout << "������ ";
//		}
//		// �����������
//		else
//		{
//			cout << i << " ";
//		}
//	}
//	// ��ͣ����
//	system("pause");
//	return 0;
//}
//Ƕ��ѭ��
//int main(void)
//{
//	// ��ӡ10��10�е�����
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			// ��ӡ����
//			cout << "* ";
//		}
//		// ����
//		cout << endl;
//	}
//	// ��ͣ
//	system("pause");
//	return 0;
//}