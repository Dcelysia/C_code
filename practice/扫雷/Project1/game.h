#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define mine_count 10

//��ʼ�����̵ĺ���
void Initboard(char arr[ROWS][COLS], int rows, int cols);
//��ӡ���̵ĺ���
void Displayboard(char arr[ROWS][COLS], int row, int col);
//���õ��׵ĺ���
void Setmine(char arr[ROWS][COLS], int row, int col);
//���ֵ��׵ĺ���
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

